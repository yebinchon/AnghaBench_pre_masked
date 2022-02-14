
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Map ;


 int FUNC_0 (int *,int,int,int) ;
 int FUNC_1 (float) ;

int FUNC_2(
    Map *VAR_0, float VAR_1, int VAR_2,
    float VAR_3, float VAR_4, float VAR_5,
    float VAR_6, float VAR_7, float VAR_8,
    int *VAR_9, int *VAR_10, int *VAR_11)
{
    int VAR_12 = 32;
    int VAR_13 = 0;
    int VAR_14 = 0;
    int VAR_15 = 0;
    for (int VAR_16 = 0; VAR_16 < VAR_1 * VAR_12; VAR_16++) {
        int VAR_17 = FUNC_1(VAR_3);
        int VAR_18 = FUNC_1(VAR_4);
        int VAR_19 = FUNC_1(VAR_5);
        if (VAR_17 != VAR_13 || VAR_18 != VAR_14 || VAR_19 != VAR_15) {
            int VAR_20 = FUNC_0(VAR_0, VAR_17, VAR_18, VAR_19);
            if (VAR_20 > 0) {
                if (VAR_2) {
                    *VAR_9 = VAR_13; *VAR_10 = VAR_14; *VAR_11 = VAR_15;
                }
                else {
                    *VAR_9 = VAR_17; *VAR_10 = VAR_18; *VAR_11 = VAR_19;
                }
                return VAR_20;
            }
            VAR_13 = VAR_17; VAR_14 = VAR_18; VAR_15 = VAR_19;
        }
        VAR_3 += VAR_6 / VAR_12; VAR_4 += VAR_7 / VAR_12; VAR_5 += VAR_8 / VAR_12;
    }
    return 0;
}
