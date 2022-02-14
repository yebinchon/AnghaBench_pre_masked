
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rgbvec {int r; int g; int b; } ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int lutsize; struct rgbvec* lut; } ;
typedef TYPE_1__ LUT3DContext ;
typedef int FILE ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int const) ;
 int FUNC_2 (char*,char*,int*,int*,int*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_2, FILE *VAR_3)
{
    char VAR_4[VAR_1];
    LUT3DContext *VAR_5 = VAR_2->priv;
    int VAR_6, VAR_7, VAR_8, VAR_9;
    const int VAR_10 = 17;
    const int VAR_11 = 17 * 17;
    const float VAR_12 = 16*16*16;

    VAR_5->lutsize = VAR_10;

    VAR_6 = FUNC_1(VAR_2, VAR_10);
    if (VAR_6 < 0)
        return VAR_6;

    FUNC_0(FUNC_3(VAR_4));
    for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
        for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
            for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
                int VAR_13, VAR_14, VAR_15;
                struct rgbvec *VAR_16 = &VAR_5->lut[VAR_9 * VAR_11 + VAR_8 * VAR_10 + VAR_7];

                FUNC_0(FUNC_3(VAR_4));
                if (FUNC_2(VAR_4, "%d %d %d", &VAR_13, &VAR_14, &VAR_15) != 3)
                    return VAR_0;
                VAR_16->r = VAR_13 / VAR_12;
                VAR_16->g = VAR_14 / VAR_12;
                VAR_16->b = VAR_15 / VAR_12;
            }
        }
    }
    return 0;
}
