
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v2i64 ;
typedef scalar_t__ v16u8 ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ,int *,int) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(uint8_t *VAR_0, uint8_t VAR_1,
                                       int32_t VAR_2, int32_t VAR_3)
{
    int32_t VAR_4;
    uint64_t VAR_5;
    v16u8 VAR_6;

    VAR_6 = (v16u8) FUNC_2(VAR_1);
    VAR_5 = FUNC_1((v2i64) VAR_6, 0);

    for (VAR_4 = (VAR_3 >> 2); VAR_4--;) {
        FUNC_0(VAR_5, VAR_5, VAR_5, VAR_5, VAR_0, VAR_2);
        VAR_0 += (4 * VAR_2);
    }
}
