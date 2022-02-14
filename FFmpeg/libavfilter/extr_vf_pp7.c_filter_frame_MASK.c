
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_20__ {int is_disabled; TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_19__ {int w; int h; TYPE_4__* dst; } ;
struct TYPE_18__ {int * linesize; int * data; int height; int width; } ;
struct TYPE_17__ {scalar_t__ qp; int vsub; int hsub; int qscale_type; } ;
typedef TYPE_1__ PP7Context ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__**) ;
 int * FUNC_5 (TYPE_2__*,int*,int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int ,int ,int ,int const,int const) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_10 (TYPE_3__*,int const,int const) ;
 int FUNC_11 (TYPE_1__*,int ,int ,int ,int ,int const,int const,int *,int,int) ;

__attribute__((used)) static int FUNC_12(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    PP7Context *VAR_4 = VAR_3->priv;
    AVFilterLink *VAR_5 = VAR_3->outputs[0];
    AVFrame *VAR_6 = VAR_2;

    int VAR_7 = 0;
    uint8_t *VAR_8 = ((void*)0);

    if (!VAR_4->qp)
        VAR_8 = FUNC_5(VAR_2, &VAR_7, &VAR_4->qscale_type);

    if (!VAR_3->is_disabled) {
        const int VAR_9 = FUNC_1(VAR_1->w, VAR_4->hsub);
        const int VAR_10 = FUNC_1(VAR_1->h, VAR_4->vsub);



        if (!FUNC_6(VAR_2) || (VAR_1->w & 7) || (VAR_1->h & 7)) {
            const int VAR_11 = FUNC_2(VAR_1->w, 8);
            const int VAR_12 = FUNC_2(VAR_1->h, 8);

            VAR_6 = FUNC_10(VAR_5, VAR_11, VAR_12);
            if (!VAR_6) {
                FUNC_4(&VAR_2);
                return FUNC_0(VAR_0);
            }
            FUNC_3(VAR_6, VAR_2);
            VAR_6->width = VAR_2->width;
            VAR_6->height = VAR_2->height;
        }

        if (VAR_8 || VAR_4->qp) {

            FUNC_11(VAR_4, VAR_6->data[0], VAR_2->data[0], VAR_6->linesize[0], VAR_2->linesize[0],
                   VAR_1->w, VAR_1->h, VAR_8, VAR_7, 1);
            FUNC_11(VAR_4, VAR_6->data[1], VAR_2->data[1], VAR_6->linesize[1], VAR_2->linesize[1],
                   VAR_9, VAR_10, VAR_8, VAR_7, 0);
            FUNC_11(VAR_4, VAR_6->data[2], VAR_2->data[2], VAR_6->linesize[2], VAR_2->linesize[2],
                   VAR_9, VAR_10, VAR_8, VAR_7, 0);
            FUNC_8();
        }
    }

    if (VAR_2 != VAR_6) {
        if (VAR_2->data[3])
            FUNC_7(VAR_6->data[3], VAR_6->linesize[3],
                                VAR_2 ->data[3], VAR_2 ->linesize[3],
                                VAR_1->w, VAR_1->h);
        FUNC_4(&VAR_2);
    }
    return FUNC_9(VAR_5, VAR_6);
}
