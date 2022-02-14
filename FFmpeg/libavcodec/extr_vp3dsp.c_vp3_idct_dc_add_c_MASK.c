
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0 , ptrdiff_t VAR_1,
                              int16_t *VAR_2 )
{
    int VAR_3, VAR_4 = (VAR_2[0] + 15) >> 5;

    for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
        VAR_0[0] = FUNC_0(VAR_0[0] + VAR_4);
        VAR_0[1] = FUNC_0(VAR_0[1] + VAR_4);
        VAR_0[2] = FUNC_0(VAR_0[2] + VAR_4);
        VAR_0[3] = FUNC_0(VAR_0[3] + VAR_4);
        VAR_0[4] = FUNC_0(VAR_0[4] + VAR_4);
        VAR_0[5] = FUNC_0(VAR_0[5] + VAR_4);
        VAR_0[6] = FUNC_0(VAR_0[6] + VAR_4);
        VAR_0[7] = FUNC_0(VAR_0[7] + VAR_4);
        VAR_0 += VAR_1;
    }
    VAR_2[0] = 0;
}
