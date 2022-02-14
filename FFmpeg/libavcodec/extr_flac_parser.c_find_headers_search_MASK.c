
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int FLACParseContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(FLACParseContext *VAR_0, uint8_t *VAR_1,
                               int VAR_2, int VAR_3)
{
    int VAR_4 = 0, VAR_5 = (VAR_2 - 1) % 4, VAR_6, VAR_7;
    uint32_t VAR_8;

    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
        if ((FUNC_0(VAR_1 + VAR_6) & 0xFFFE) == 0xFFF8)
            VAR_4 = FUNC_2(VAR_0, VAR_3 + VAR_6);
    }

    for (; VAR_6 < VAR_2 - 1; VAR_6 += 4) {
        VAR_8 = FUNC_1(VAR_1 + VAR_6);
        if (((VAR_8 & ~(VAR_8 + 0x01010101)) & 0x80808080)) {
            for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
                if ((FUNC_0(VAR_1 + VAR_6 + VAR_7) & 0xFFFE) == 0xFFF8)
                    VAR_4 = FUNC_2(VAR_0, VAR_3 + VAR_6 + VAR_7);
            }
        }
    }
    return VAR_4;
}
