
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int const int16_t ;
typedef int PutBitContext ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int) ;
 int * VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_4 (int *,int,int ) ;

__attribute__((used)) static void FUNC_5(PutBitContext *VAR_3, int16_t *VAR_4,
                       int VAR_5,
                       int VAR_6,
                       const uint8_t *VAR_7, const int16_t *VAR_8)
{
    int VAR_9, VAR_10;
    int VAR_11, VAR_12, VAR_13, VAR_14;
    int VAR_15, VAR_16;

    VAR_15 = VAR_5 << 6;
    VAR_13 = VAR_2[4];
    VAR_14 = VAR_1[2];
    VAR_11 = 0;

    for (VAR_10 = 1; VAR_10 < 64; VAR_10++) {
        for (VAR_9 = VAR_7[VAR_10]; VAR_9 < VAR_15; VAR_9 += 64) {
            VAR_12 = VAR_4[VAR_9] / VAR_8[VAR_7[VAR_10]];
            if (VAR_12) {
                VAR_16 = FUNC_0(VAR_12);
                FUNC_3(VAR_3, VAR_0[VAR_13], VAR_11);
                FUNC_3(VAR_3, VAR_0[VAR_14],
                                    VAR_16 - 1);
                FUNC_4(VAR_3, 1, FUNC_2(VAR_12));

                VAR_13 = VAR_2[FUNC_1(VAR_11, 15)];
                VAR_14 = VAR_1[FUNC_1(VAR_16, 9)];
                VAR_11 = 0;
            } else {
                VAR_11++;
            }
        }
    }
}
