
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;
typedef int PutBitContext ;


 size_t FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int,int ) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int) ;
 int * VAR_0 ;
 int FUNC_5 (int *,int,int ) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_6(PutBitContext *VAR_2,
        int16_t *VAR_3, int VAR_4, int *VAR_5, const uint8_t VAR_6[64])
{
    int VAR_7 = 4;
    int VAR_8 = 2;

    int VAR_9 = 0, VAR_10, VAR_11, VAR_12, VAR_13;
    for (VAR_12 = 1; VAR_12 < 64; VAR_12++) {
        int VAR_14 = VAR_6[VAR_12];
        for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
            int VAR_15 = FUNC_2(VAR_5, VAR_14, VAR_3[(VAR_13 << 6) + VAR_14]);
            if (VAR_15) {
                FUNC_3(VAR_2, VAR_9, VAR_1[FUNC_0(VAR_7, 15)]);

                VAR_7 = VAR_9;
                VAR_9 = 0;
                VAR_10 = FUNC_4(VAR_15);
                VAR_11 = VAR_10 - 1;

                FUNC_3(VAR_2, VAR_11, VAR_0[FUNC_0(VAR_8, 9)]);

                VAR_8 = VAR_10;

                FUNC_5(VAR_2, 1, FUNC_1(VAR_15));
            } else {
                ++VAR_9;
            }
        }
    }
}
