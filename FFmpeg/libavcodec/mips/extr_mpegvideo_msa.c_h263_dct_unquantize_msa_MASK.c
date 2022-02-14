
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v16u8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int,int*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(int16_t *VAR_0, int16_t VAR_1,
                                    int16_t VAR_2, int8_t VAR_3,
                                    uint8_t VAR_4)
{
    int16_t *VAR_5 = VAR_0;
    int32_t VAR_6, VAR_7;
    v8i16 VAR_8, VAR_9, VAR_10, VAR_11;
    v8i16 VAR_12, VAR_13, VAR_14, VAR_15;

    VAR_9 = FUNC_5(VAR_1);
    VAR_10 = FUNC_5(VAR_2);
    for (VAR_7 = 0; VAR_7 < (VAR_3 >> 3); VAR_7++) {
        VAR_8 = FUNC_0(VAR_5 + VAR_4);
        VAR_13 = FUNC_4(VAR_8, 0);
        VAR_15 = FUNC_3(VAR_8, 0);
        VAR_14 = VAR_8 * VAR_9;
        VAR_11 = VAR_14 - VAR_10;
        VAR_12 = VAR_14 + VAR_10;
        VAR_12 = (v8i16) FUNC_2((v16u8) VAR_12, (v16u8) VAR_11, (v16u8) VAR_13);
        VAR_8 = (v8i16) FUNC_2((v16u8) VAR_12, (v16u8) VAR_8,
                                         (v16u8) VAR_15);
        FUNC_1(VAR_8, VAR_5 + VAR_4);
        VAR_5 += 8;
    }

    VAR_7 = ((VAR_3 >> 3) * 8) + VAR_4;

    for (; VAR_7 <= VAR_3; VAR_7++) {
        VAR_6 = VAR_0[VAR_7];
        if (VAR_6) {
            if (VAR_6 < 0) {
                VAR_6 = VAR_6 * VAR_1 - VAR_2;
            } else {
                VAR_6 = VAR_6 * VAR_1 + VAR_2;
            }
            VAR_0[VAR_7] = VAR_6;
        }
    }
}
