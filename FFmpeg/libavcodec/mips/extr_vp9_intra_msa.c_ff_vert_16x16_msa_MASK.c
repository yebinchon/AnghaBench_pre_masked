
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v16u8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(uint8_t *VAR_0, ptrdiff_t VAR_1, const uint8_t *VAR_2,
                       const uint8_t *VAR_3)
{
    uint32_t VAR_4;
    v16u8 VAR_5;

    VAR_5 = FUNC_0(VAR_3);

    for (VAR_4 = 16; VAR_4--;) {
        FUNC_1(VAR_5, VAR_0);
        VAR_0 += VAR_1;
    }
}
