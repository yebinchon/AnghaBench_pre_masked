
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v16u8 ;
typedef int uint8_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, uint8_t VAR_1,
                                        int32_t VAR_2, int32_t VAR_3)
{
    int32_t VAR_4;
    v16u8 VAR_5;

    VAR_5 = (v16u8) FUNC_1(VAR_1);

    for (VAR_4 = (VAR_3 >> 3); VAR_4--;) {
        FUNC_0(VAR_5, VAR_5, VAR_5, VAR_5, VAR_5, VAR_5, VAR_5, VAR_5, VAR_0, VAR_2);
        VAR_0 += (8 * VAR_2);
    }
}
