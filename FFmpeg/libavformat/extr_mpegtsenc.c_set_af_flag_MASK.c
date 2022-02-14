
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, int VAR_1)
{

    FUNC_0(VAR_1);

    if ((VAR_0[3] & 0x20) == 0) {

        VAR_0[3] |= 0x20;

        VAR_0[4] = 1;
        VAR_0[5] = 0;
    }
    VAR_0[5] |= VAR_1;
}
