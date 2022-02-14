
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int uint8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(int16_t *VAR_0)
{
    uint8_t VAR_1;
    int32_t VAR_2;
    v8i16 VAR_3;

    VAR_2 = (VAR_0[0] + 1) >> 1;
    VAR_2 = (VAR_2 + 32) >> 6;
    VAR_3 = FUNC_1(VAR_2);

    for (VAR_1 = 4; VAR_1--;) {
        FUNC_0(VAR_3, VAR_3, VAR_3, VAR_3, VAR_3, VAR_3, VAR_3, VAR_3, VAR_0, 8);
        VAR_0 += 8 * 8;
    }
}
