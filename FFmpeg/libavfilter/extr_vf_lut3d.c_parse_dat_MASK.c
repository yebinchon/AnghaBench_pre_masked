
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rgbvec {int b; int g; int r; } ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int lutsize; struct rgbvec* lut; } ;
typedef TYPE_1__ LUT3DContext ;
typedef int FILE ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (char*,char*,int *,int *,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_2, FILE *VAR_3)
{
    LUT3DContext *VAR_4 = VAR_2->priv;
    char VAR_5[VAR_1];
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

    VAR_4->lutsize = VAR_10 = 33;
    VAR_11 = VAR_10 * VAR_10;

    FUNC_0(FUNC_3(VAR_5));
    if (!FUNC_4(VAR_5, "3DLUTSIZE ", 10)) {
        VAR_10 = FUNC_5(VAR_5 + 10, ((void*)0), 0);

        FUNC_0(FUNC_3(VAR_5));
    }

    VAR_6 = FUNC_1(VAR_2, VAR_10);
    if (VAR_6 < 0)
        return VAR_6;

    for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
        for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
            for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
                struct rgbvec *VAR_12 = &VAR_4->lut[VAR_9 * VAR_11 + VAR_8 * VAR_10 + VAR_7];
                if (VAR_9 != 0 || VAR_8 != 0 || VAR_7 != 0)
                    FUNC_0(FUNC_3(VAR_5));
                if (FUNC_2(VAR_5, "%f %f %f", &VAR_12->r, &VAR_12->g, &VAR_12->b) != 3)
                    return VAR_0;
            }
        }
    }
    return 0;
}
