
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v16u8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,int ,int *,int) ;

__attribute__((used)) static void FUNC_2(const uint8_t *VAR_0, uint8_t *VAR_1,
                                         int32_t VAR_2)
{
    uint32_t VAR_3;
    v16u8 VAR_4, VAR_5;

    VAR_4 = FUNC_0(VAR_0);
    VAR_5 = FUNC_0(VAR_0 + 16);

    for (VAR_3 = 32; VAR_3--;) {
        FUNC_1(VAR_4, VAR_5, VAR_1, 16);
        VAR_1 += VAR_2;
    }
}
