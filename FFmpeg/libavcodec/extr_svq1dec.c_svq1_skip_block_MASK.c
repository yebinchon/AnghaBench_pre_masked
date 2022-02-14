
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, uint8_t *VAR_1,
                            ptrdiff_t VAR_2, int VAR_3, int VAR_4)
{
    uint8_t *VAR_5;
    uint8_t *VAR_6;
    int VAR_7;

    VAR_5 = &VAR_1[VAR_3 + VAR_4 * VAR_2];
    VAR_6 = VAR_0;

    for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
        FUNC_0(VAR_6, VAR_5, 16);
        VAR_5 += VAR_2;
        VAR_6 += VAR_2;
    }
}
