
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_12__ ;


struct TYPE_26__ {int PicStruct; } ;
struct TYPE_25__ {int TimeStamp; } ;
struct TYPE_27__ {TYPE_2__ Info; TYPE_1__ Data; } ;
typedef TYPE_3__ mfxFrameSurface1 ;
struct TYPE_31__ {int time_base; int h; int w; int * dst; } ;
struct TYPE_30__ {scalar_t__ format; int height; int* linesize; int width; } ;
struct TYPE_29__ {TYPE_3__* surface; TYPE_12__* frame; TYPE_3__ surface_internal; } ;
struct TYPE_28__ {TYPE_2__* frame_infos; int in_mem_mode; int in_frame_list; } ;
struct TYPE_24__ {int height; int repeat_pict; scalar_t__ top_field_first; int interlaced_frame; int pts; int width; scalar_t__* data; } ;
typedef TYPE_4__ QSVVPPContext ;
typedef TYPE_5__ QSVFrame ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVFilterLink ;
typedef int AVFilterContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 size_t FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_3 (TYPE_6__*) ;
 scalar_t__ FUNC_4 (TYPE_12__*,TYPE_6__*) ;
 int FUNC_5 (TYPE_12__*,TYPE_6__*) ;
 int FUNC_6 (TYPE_12__**) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int VAR_8 ;
 TYPE_12__* FUNC_10 (TYPE_7__*,int ,int ) ;
 TYPE_5__* FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (TYPE_12__*,TYPE_3__*) ;

__attribute__((used)) static QSVFrame *FUNC_13(QSVVPPContext *VAR_9, AVFilterLink *VAR_10, AVFrame *VAR_11)
{
    QSVFrame *VAR_12;
    AVFilterContext *VAR_13 = VAR_10->dst;

    FUNC_9(VAR_9->in_frame_list);

    VAR_12 = FUNC_11(&VAR_9->in_frame_list);
    if (!VAR_12)
        return ((void*)0);







    if (!FUNC_2(VAR_9->in_mem_mode)) {
        if (VAR_11->format != VAR_1) {
            FUNC_7(VAR_13, VAR_0, "QSVVPP gets a wrong frame.\n");
            return ((void*)0);
        }
        VAR_12->frame = FUNC_3(VAR_11);
        VAR_12->surface = (mfxFrameSurface1 *)VAR_12->frame->data[3];
    } else {

        if (VAR_11->height & 31 || VAR_11->linesize[0] & 31) {
            VAR_12->frame = FUNC_10(VAR_10,
                                                   FUNC_0(VAR_10->w, 32),
                                                   FUNC_0(VAR_10->h, 32));
            if (!VAR_12->frame)
                return ((void*)0);

            VAR_12->frame->width = VAR_11->width;
            VAR_12->frame->height = VAR_11->height;

            if (FUNC_4(VAR_12->frame, VAR_11) < 0) {
                FUNC_6(&VAR_12->frame);
                return ((void*)0);
            }

            FUNC_5(VAR_12->frame, VAR_11);
        } else
            VAR_12->frame = FUNC_3(VAR_11);

        if (FUNC_12(VAR_12->frame,
                                &VAR_12->surface_internal) < 0) {
            FUNC_7(VAR_13, VAR_0, "Unsupported frame.\n");
            return ((void*)0);
        }
        VAR_12->surface = &VAR_12->surface_internal;
    }

    VAR_12->surface->Info = VAR_9->frame_infos[FUNC_1(VAR_10)];
    VAR_12->surface->Data.TimeStamp = FUNC_8(VAR_12->frame->pts,
                                                      VAR_10->time_base, VAR_8);

    VAR_12->surface->Info.PicStruct =
            !VAR_12->frame->interlaced_frame ? VAR_7 :
            (VAR_12->frame->top_field_first ? VAR_4 :
                                                 VAR_2);
    if (VAR_12->frame->repeat_pict == 1)
        VAR_12->surface->Info.PicStruct |= VAR_3;
    else if (VAR_12->frame->repeat_pict == 2)
        VAR_12->surface->Info.PicStruct |= VAR_5;
    else if (VAR_12->frame->repeat_pict == 4)
        VAR_12->surface->Info.PicStruct |= VAR_6;

    return VAR_12;
}
