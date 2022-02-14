
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v16u8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (scalar_t__,scalar_t__,int *,int) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(uint8_t *VAR_0, ptrdiff_t VAR_1, const uint8_t *VAR_2,
                      const uint8_t *VAR_3)
{
    uint32_t VAR_4, VAR_5;
    v16u8 VAR_6, VAR_7, VAR_8, VAR_9;

    VAR_2 += 28;
    for (VAR_4 = 8; VAR_4--;) {
        VAR_5 = FUNC_0(VAR_2);
        VAR_2 -= 4;

        VAR_6 = (v16u8) FUNC_2(VAR_5 >> 24);
        VAR_7 = (v16u8) FUNC_2(VAR_5 >> 16);
        VAR_8 = (v16u8) FUNC_2(VAR_5 >> 8);
        VAR_9 = (v16u8) FUNC_2(VAR_5);

        FUNC_1(VAR_6, VAR_6, VAR_0, 16);
        VAR_0 += VAR_1;
        FUNC_1(VAR_7, VAR_7, VAR_0, 16);
        VAR_0 += VAR_1;
        FUNC_1(VAR_8, VAR_8, VAR_0, 16);
        VAR_0 += VAR_1;
        FUNC_1(VAR_9, VAR_9, VAR_0, 16);
        VAR_0 += VAR_1;
    }
}
