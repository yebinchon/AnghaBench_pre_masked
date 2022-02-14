
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef scalar_t__ v16u8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int *,int,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(uint8_t *VAR_0, int32_t VAR_1,
                                                  int32_t VAR_2,
                                                  int32_t VAR_3,
                                                  int8_t *VAR_4)
{
    int32_t VAR_5, VAR_6;
    int16_t VAR_7, VAR_8;
    v16u8 VAR_9, VAR_10, VAR_11;

    VAR_9 = (v16u8) FUNC_3(VAR_2);
    VAR_10 = (v16u8) FUNC_3(VAR_3);

    for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
        VAR_6 = (VAR_4[VAR_5] - 1) + 1;

        if (VAR_6 <= 0) {
            VAR_0 += 4 * VAR_1;
            continue;
        }

        FUNC_0(VAR_0, VAR_1, VAR_6, VAR_9, VAR_10, VAR_11);

        VAR_7 = FUNC_2((v8i16) VAR_11, 0);
        VAR_8 = FUNC_2((v8i16) VAR_11, 1);

        FUNC_1(VAR_7, (VAR_0 - 1));
        VAR_0 += VAR_1;
        FUNC_1(VAR_8, (VAR_0 - 1));
        VAR_0 += VAR_1;
    }
}
