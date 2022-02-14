
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 float* VAR_0 ;
 int FUNC_2 (int,int,int,int,int,int,float*) ;

__attribute__((used)) static void FUNC_3(int VAR_1, int VAR_2, int VAR_3, int VAR_4, float *VAR_5)
{
    int VAR_6 = VAR_4 - VAR_2;
    int VAR_7 = VAR_3 - VAR_1;
    int VAR_8 = FUNC_0(VAR_6);
    int VAR_9 = VAR_6 < 0 ? -1 : 1;
    VAR_5[VAR_1] = VAR_0[FUNC_1(VAR_2)];
    if (VAR_8*2 <= VAR_7) {
        FUNC_2(VAR_1, VAR_2, VAR_3, VAR_9, VAR_8, VAR_7, VAR_5);
    } else {
        int VAR_10 = VAR_6 / VAR_7;
        int VAR_11 = VAR_1;
        int VAR_12 = VAR_2;
        int VAR_13 = -VAR_7;
        VAR_8 -= FUNC_0(VAR_10) * VAR_7;
        while (++VAR_11 < VAR_3) {
            VAR_12 += VAR_10;
            VAR_13 += VAR_8;
            if (VAR_13 >= 0) {
                VAR_13 -= VAR_7;
                VAR_12 += VAR_9;
            }
            VAR_5[VAR_11] = VAR_0[FUNC_1(VAR_12)];
        }
    }
}
