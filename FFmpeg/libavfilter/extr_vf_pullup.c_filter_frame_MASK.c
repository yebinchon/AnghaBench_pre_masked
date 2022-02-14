
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_34__ {TYPE_3__* priv; TYPE_6__** outputs; } ;
struct TYPE_33__ {int h; int w; int format; TYPE_7__* dst; } ;
struct TYPE_32__ {int linesize; scalar_t__ data; scalar_t__ repeat_pict; int top_field_first; scalar_t__ interlaced_frame; } ;
struct TYPE_31__ {scalar_t__ planes; } ;
struct TYPE_30__ {int planewidth; } ;
struct TYPE_29__ {int length; TYPE_1__* buffer; } ;
struct TYPE_28__ {scalar_t__ planes; } ;
typedef TYPE_2__ PullupFrame ;
typedef TYPE_3__ PullupContext ;
typedef TYPE_4__ PullupBuffer ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVFilterLink ;
typedef TYPE_7__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_5__**) ;
 int FUNC_3 (scalar_t__,int ,int const**,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_7__*,int ,char*) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*) ;
 TYPE_5__* FUNC_6 (TYPE_6__*,int ,int ) ;
 TYPE_4__* FUNC_7 (TYPE_3__*,int) ;
 TYPE_2__* FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_4__*,int) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_3__*,TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_13(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    AVFilterLink *VAR_5 = VAR_4->outputs[0];
    PullupContext *VAR_6 = VAR_4->priv;
    PullupBuffer *VAR_7;
    PullupFrame *VAR_8;
    AVFrame *VAR_9;
    int VAR_10, VAR_11 = 0;

    VAR_7 = FUNC_7(VAR_6, 2);
    if (!VAR_7) {
        FUNC_4(VAR_4, VAR_0, "Could not get buffer!\n");
        VAR_8 = FUNC_8(VAR_6);
        FUNC_11(VAR_8);
        goto end;
    }

    FUNC_3(VAR_7->planes, VAR_6->planewidth,
                  (const uint8_t**)VAR_3->data, VAR_3->linesize,
                  VAR_2->format, VAR_2->w, VAR_2->h);

    VAR_10 = VAR_3->interlaced_frame ? !VAR_3->top_field_first : 0;
    FUNC_12(VAR_6, VAR_7, VAR_10 );
    FUNC_12(VAR_6, VAR_7, VAR_10^1);

    if (VAR_3->repeat_pict)
        FUNC_12(VAR_6, VAR_7, VAR_10);

    FUNC_10(VAR_7, 2);

    VAR_8 = FUNC_8(VAR_6);
    if (!VAR_8)
        goto end;

    if (VAR_8->length < 2) {
        FUNC_11(VAR_8);
        VAR_8 = FUNC_8(VAR_6);
        if (!VAR_8)
            goto end;
        if (VAR_8->length < 2) {
            FUNC_11(VAR_8);
            if (!VAR_3->repeat_pict)
                goto end;
            VAR_8 = FUNC_8(VAR_6);
            if (!VAR_8)
                goto end;
            if (VAR_8->length < 2) {
                FUNC_11(VAR_8);
                goto end;
            }
        }
    }


    if (!VAR_8->buffer)
        FUNC_9(VAR_6, VAR_8);

    VAR_9 = FUNC_6(VAR_5, VAR_5->w, VAR_5->h);
    if (!VAR_9) {
        VAR_11 = FUNC_0(VAR_1);
        goto end;
    }
    FUNC_1(VAR_9, VAR_3);

    FUNC_3(VAR_9->data, VAR_9->linesize,
                  (const uint8_t**)VAR_8->buffer->planes, VAR_6->planewidth,
                  VAR_2->format, VAR_2->w, VAR_2->h);

    VAR_11 = FUNC_5(VAR_5, VAR_9);
    FUNC_11(VAR_8);
end:
    FUNC_2(&VAR_3);
    return VAR_11;
}
