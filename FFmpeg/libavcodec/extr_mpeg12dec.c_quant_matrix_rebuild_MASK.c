
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(uint16_t *VAR_0, const uint8_t *VAR_1,
                                 const uint8_t *VAR_2)
{
    uint16_t VAR_3[64];
    int VAR_4;

    FUNC_0(VAR_3, VAR_0, 64 * sizeof(uint16_t));

    for (VAR_4 = 0; VAR_4 < 64; VAR_4++)
        VAR_0[VAR_2[VAR_4]] = VAR_3[VAR_1[VAR_4]];
}
