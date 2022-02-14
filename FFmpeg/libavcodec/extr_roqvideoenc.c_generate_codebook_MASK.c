
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int u; int v; int * y; } ;
typedef TYPE_1__ roq_cell ;
struct TYPE_9__ {int randctx; } ;
struct TYPE_8__ {int* closest_cb2; } ;
typedef TYPE_2__ RoqTempdata ;
typedef TYPE_3__ RoqContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int) ;
 int FUNC_3 (int*,int,int,int*,int,int,int*,int *) ;
 int FUNC_4 (int*,int,int,int*,int,int,int*,int *) ;

__attribute__((used)) static int FUNC_5(RoqContext *VAR_2, RoqTempdata *VAR_3,
                             int *VAR_4, int VAR_5, roq_cell *VAR_6,
                             int VAR_7, int VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12 = 0;
    int VAR_13 = VAR_7*VAR_7/4;
    int *VAR_14;
    int *VAR_15 = FUNC_2(6*VAR_13, VAR_8*sizeof(int));
    int *VAR_16;

    if (!VAR_15)
        return FUNC_0(VAR_1);

    if (VAR_7 == 4) {
        VAR_16 = FUNC_2(6*VAR_13, VAR_5*sizeof(int));
        if (!VAR_16) {
            VAR_12 = FUNC_0(VAR_1);
            goto out;
        }
    } else
        VAR_16 = VAR_3->closest_cb2;

    VAR_12 = FUNC_4(VAR_4, 6 * VAR_13, VAR_5, VAR_15,
                       VAR_8, 1, VAR_16, &VAR_2->randctx);
    if (VAR_12 < 0)
        goto out;
    VAR_12 = FUNC_3(VAR_4, 6 * VAR_13, VAR_5, VAR_15,
                     VAR_8, 1, VAR_16, &VAR_2->randctx);
    if (VAR_12 < 0)
        goto out;

    VAR_14 = VAR_15;
    for (VAR_9=0; VAR_9<VAR_8; VAR_9++)
        for (VAR_11=0; VAR_11<VAR_13; VAR_11++) {
            for(VAR_10=0; VAR_10<4; VAR_10++)
                VAR_6->y[VAR_10] = *VAR_14++;

            VAR_6->u = (*VAR_14++ + VAR_0/2)/VAR_0;
            VAR_6->v = (*VAR_14++ + VAR_0/2)/VAR_0;
            VAR_6++;
        }
out:
    if (VAR_7 == 4)
        FUNC_1(VAR_16);
    FUNC_1(VAR_15);
    return VAR_12;
}
