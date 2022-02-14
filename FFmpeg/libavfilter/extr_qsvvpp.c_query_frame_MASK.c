
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_20__ {int Info; } ;
typedef TYPE_3__ mfxFrameSurface1 ;
struct TYPE_23__ {int h; int w; int hw_frames_ctx; int * src; } ;
struct TYPE_22__ {TYPE_3__* surface; TYPE_3__ surface_internal; TYPE_10__* frame; } ;
struct TYPE_18__ {int Out; } ;
struct TYPE_19__ {TYPE_1__ vpp; } ;
struct TYPE_21__ {TYPE_2__ vpp_param; int out_mem_mode; int out_frame_list; } ;
struct TYPE_17__ {int height; int width; scalar_t__* data; } ;
typedef TYPE_4__ QSVVPPContext ;
typedef TYPE_5__ QSVFrame ;
typedef TYPE_6__ AVFilterLink ;
typedef int AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 TYPE_10__* FUNC_2 () ;
 int FUNC_3 (int ,TYPE_10__*,int ) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int ) ;
 TYPE_10__* FUNC_6 (TYPE_6__*,int ,int ) ;
 TYPE_5__* FUNC_7 (int *) ;
 int FUNC_8 (TYPE_10__*,TYPE_3__*) ;

__attribute__((used)) static QSVFrame *FUNC_9(QSVVPPContext *VAR_1, AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->src;
    QSVFrame *VAR_4;
    int VAR_5;

    FUNC_5(VAR_1->out_frame_list);

    VAR_4 = FUNC_7(&VAR_1->out_frame_list);
    if (!VAR_4)
        return ((void*)0);



    if (!FUNC_1(VAR_1->out_mem_mode)) {
        VAR_4->frame = FUNC_2();
        if (!VAR_4->frame)
            return ((void*)0);

        VAR_5 = FUNC_3(VAR_2->hw_frames_ctx, VAR_4->frame, 0);
        if (VAR_5 < 0) {
            FUNC_4(VAR_3, VAR_0, "Can't allocate a surface.\n");
            return ((void*)0);
        }

        VAR_4->surface = (mfxFrameSurface1 *)VAR_4->frame->data[3];
    } else {


        VAR_4->frame = FUNC_6(VAR_2,
                                               FUNC_0(VAR_2->w, 128),
                                               FUNC_0(VAR_2->h, 64));
        if (!VAR_4->frame)
            return ((void*)0);

        VAR_4->frame->width = VAR_2->w;
        VAR_4->frame->height = VAR_2->h;

        VAR_5 = FUNC_8(VAR_4->frame,
                                  &VAR_4->surface_internal);
        if (VAR_5 < 0)
            return ((void*)0);

        VAR_4->surface = &VAR_4->surface_internal;
    }

    VAR_4->surface->Info = VAR_1->vpp_param.vpp.Out;

    return VAR_4;
}
