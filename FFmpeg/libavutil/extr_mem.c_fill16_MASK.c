
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, int VAR_1)
{
    uint32_t VAR_2 = FUNC_0(VAR_0 - 2);

    VAR_2 |= VAR_2 << 16;

    while (VAR_1 >= 4) {
        FUNC_1(VAR_0, VAR_2);
        VAR_0 += 4;
        VAR_1 -= 4;
    }

    while (VAR_1--) {
        *VAR_0 = VAR_0[-2];
        VAR_0++;
    }
}
