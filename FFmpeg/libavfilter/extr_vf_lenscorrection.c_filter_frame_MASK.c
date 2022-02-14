
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_13__ {int w; int h; int xcenter; int ycenter; int plane; int* correction; int * out; int * in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_16__ {TYPE_1__* internal; scalar_t__ priv; TYPE_4__** outputs; } ;
struct TYPE_15__ {int h; int w; TYPE_5__* dst; } ;
struct TYPE_14__ {int nb_planes; int hsub; int vsub; int cx; int cy; int k1; int k2; int** correction; int height; int width; } ;
struct TYPE_12__ {int (* execute ) (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ LenscorrectionCtx ;
typedef int AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int **) ;
 int* FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_4__*,int *) ;
 int FUNC_7 (TYPE_5__*) ;
 int * FUNC_8 (TYPE_4__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_9 (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_10(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    AVFilterLink *VAR_5 = VAR_4->outputs[0];
    LenscorrectionCtx *VAR_6 = (LenscorrectionCtx*)VAR_4->priv;
    AVFrame *VAR_7 = FUNC_8(VAR_5, VAR_5->w, VAR_5->h);
    int VAR_8;

    if (!VAR_7) {
        FUNC_4(&VAR_3);
        return FUNC_0(VAR_0);
    }

    FUNC_3(VAR_7, VAR_3);

    for (VAR_8 = 0; VAR_8 < VAR_6->nb_planes; ++VAR_8) {
        int VAR_9 = VAR_8 == 1 || VAR_8 == 2 ? VAR_6->hsub : 0;
        int VAR_10 = VAR_8 == 1 || VAR_8 == 2 ? VAR_6->vsub : 0;
        int VAR_11 = FUNC_1(VAR_6->width, VAR_9);
        int VAR_12 = FUNC_1(VAR_6->height, VAR_10);
        int VAR_13 = VAR_6->cx * VAR_11;
        int VAR_14 = VAR_6->cy * VAR_12;
        int VAR_15 = VAR_6->k1 * (1<<24);
        int VAR_16 = VAR_6->k2 * (1<<24);
        ThreadData VAR_17 = {
            .in = VAR_3,
            .out = VAR_7,
            .w = VAR_11,
            .h = VAR_12,
            .xcenter = VAR_13,
            .ycenter = VAR_14,
            .plane = VAR_8};

        if (!VAR_6->correction[VAR_8]) {
            int VAR_18,VAR_19;
            const int64_t VAR_20 = (4LL<<60) / (VAR_11 * VAR_11 + VAR_12 * VAR_12);

            VAR_6->correction[VAR_8] = FUNC_5(VAR_11, VAR_12 * sizeof(**VAR_6->correction));
            if (!VAR_6->correction[VAR_8])
                return FUNC_0(VAR_0);
            for (VAR_19 = 0; VAR_19 < VAR_12; VAR_19++) {
                const int VAR_21 = VAR_19 - VAR_14;
                const int VAR_22 = VAR_21 * VAR_21;
                for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++) {
                    const int VAR_23 = VAR_18 - VAR_13;
                    const int64_t VAR_24 = ((VAR_23 * VAR_23 + VAR_22) * VAR_20 + (1LL<<31)) >> 32;
                    const int64_t VAR_25 = (VAR_24 * VAR_24 + (1<<27)) >> 28;
                    const int VAR_26 = (VAR_24 * VAR_15 + VAR_25 * VAR_16 + (1LL<<27) + (1LL<<52))>>28;
                    VAR_6->correction[VAR_8][VAR_19 * VAR_11 + VAR_18] = VAR_26;
                }
            }
        }

        VAR_17.correction = VAR_6->correction[VAR_8];
        VAR_4->internal->execute(VAR_4, VAR_1, &VAR_17, ((void*)0), FUNC_2(VAR_12, FUNC_7(VAR_4)));
    }

    FUNC_4(&VAR_3);
    return FUNC_6(VAR_5, VAR_7);
}
