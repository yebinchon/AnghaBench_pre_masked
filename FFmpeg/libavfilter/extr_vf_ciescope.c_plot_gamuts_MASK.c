
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ColorSystem {int xRed; int yRed; int xGreen; int yGreen; int xBlue; int yBlue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct ColorSystem* VAR_4 ;
 int FUNC_1 (int *,int,int,int,int,int,int,int) ;
 int FUNC_2 (int,int,double*,double*) ;
 int FUNC_3 (int,int,double*,double*) ;

__attribute__((used)) static void FUNC_4(uint16_t *VAR_5, int VAR_6, int VAR_7, int VAR_8,
                        int VAR_9, int VAR_10)
{
    int VAR_11;

    for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
        const struct ColorSystem *VAR_12 = &VAR_4[VAR_11];
        int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

        if (!((1 << VAR_11) & VAR_10))
            continue;
        if (VAR_9 == VAR_0) {
            double VAR_19, VAR_20;
            FUNC_2(VAR_12->xRed, VAR_12->yRed, &VAR_19, &VAR_20);
            VAR_13 = (VAR_7 - 1) * VAR_19;
            VAR_14 = (VAR_8 - 1) - ((int) ((VAR_8 - 1) * VAR_20));
            FUNC_2(VAR_12->xGreen, VAR_12->yGreen, &VAR_19, &VAR_20);
            VAR_15 = (VAR_7 - 1) * VAR_19;
            VAR_16 = (VAR_8 - 1) - ((int) ((VAR_8 - 1) * VAR_20));
            FUNC_2(VAR_12->xBlue, VAR_12->yBlue, &VAR_19, &VAR_20);
            VAR_17 = (VAR_7 - 1) * VAR_19;
            VAR_18 = (VAR_8 - 1) - ((int) ((VAR_8 - 1) * VAR_20));
        } else if (VAR_9 == VAR_2) {
            double VAR_21, VAR_22;
            FUNC_3(VAR_12->xRed, VAR_12->yRed, &VAR_21, &VAR_22);
            VAR_13 = (VAR_7 - 1) * VAR_21;
            VAR_14 = (VAR_8 - 1) - ((int) ((VAR_8 - 1) * VAR_22));
            FUNC_3(VAR_12->xGreen, VAR_12->yGreen, &VAR_21, &VAR_22);
            VAR_15 = (VAR_7 - 1) * VAR_21;
            VAR_16 = (VAR_8 - 1) - ((int) ((VAR_8 - 1) * VAR_22));
            FUNC_3(VAR_12->xBlue, VAR_12->yBlue, &VAR_21, &VAR_22);
            VAR_17 = (VAR_7 - 1) * VAR_21;
            VAR_18 = (VAR_8 - 1) - ((int) ((VAR_8 - 1) * VAR_22));
        } else if (VAR_9 == VAR_3) {
            VAR_13 = (VAR_7 - 1) * VAR_12->xRed;
            VAR_14 = (VAR_8 - 1) - ((int) ((VAR_8 - 1) * VAR_12->yRed));
            VAR_15 = (VAR_7 - 1) * VAR_12->xGreen;
            VAR_16 = (VAR_8 - 1) - ((int) ((VAR_8 - 1) * VAR_12->yGreen));
            VAR_17 = (VAR_7 - 1) * VAR_12->xBlue;
            VAR_18 = (VAR_8 - 1) - ((int) ((VAR_8 - 1) * VAR_12->yBlue));
        } else {
            FUNC_0(0);
        }

        FUNC_1(VAR_5, VAR_6, VAR_13, VAR_14, VAR_15, VAR_16, VAR_7, VAR_8);
        FUNC_1(VAR_5, VAR_6, VAR_15, VAR_16, VAR_17, VAR_18, VAR_7, VAR_8);
        FUNC_1(VAR_5, VAR_6, VAR_17, VAR_18, VAR_13, VAR_14, VAR_7, VAR_8);
    }
}
