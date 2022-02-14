
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float*,int,int,int,int,int,int,int,double) ;

void FUNC_1(float* VAR_0,
         int VAR_1, int VAR_2, int VAR_3,
         int VAR_4, int VAR_5, int VAR_6, float* VAR_7)
{
    int VAR_8,VAR_9,VAR_10;
    int VAR_11 = (VAR_2 + 2*VAR_6 - VAR_4) / VAR_5 + 1;
    int VAR_12 = (VAR_3 + 2*VAR_6 - VAR_4) / VAR_5 + 1;

    int VAR_13 = VAR_1 * VAR_4 * VAR_4;
    for (VAR_8 = 0; VAR_8 < VAR_13; ++VAR_8) {
        int VAR_14 = VAR_8 % VAR_4;
        int VAR_15 = (VAR_8 / VAR_4) % VAR_4;
        int VAR_16 = VAR_8 / VAR_4 / VAR_4;
        for (VAR_9 = 0; VAR_9 < VAR_11; ++VAR_9) {
            for (VAR_10 = 0; VAR_10 < VAR_12; ++VAR_10) {
                int VAR_17 = VAR_15 + VAR_9 * VAR_5;
                int VAR_18 = VAR_14 + VAR_10 * VAR_5;
                int VAR_19 = (VAR_8 * VAR_11 + VAR_9) * VAR_12 + VAR_10;
                double VAR_20 = VAR_0[VAR_19];
                FUNC_0(VAR_7, VAR_2, VAR_3, VAR_1,
                        VAR_17, VAR_18, VAR_16, VAR_6, VAR_20);
            }
        }
    }
}
