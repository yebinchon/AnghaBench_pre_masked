
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int,int,...) ;

void FUNC_2(void)
{
    uint32_t VAR_6 = FUNC_0(VAR_2);
    uint32_t VAR_7 = FUNC_0(VAR_0);
    FUNC_1("perfmon: PGM=%08x, INTPC=%08x\n", VAR_6, VAR_7);

    for (int VAR_8 = 0 ; VAR_8 < VAR_1 ; VAR_8++) {
        uint32_t VAR_9 = FUNC_0(VAR_3 + VAR_8 * sizeof(int32_t));
        uint32_t VAR_10 = FUNC_0(VAR_4 + VAR_8 * sizeof(int32_t));
        uint32_t VAR_11 = FUNC_0(VAR_5 + VAR_8 * sizeof(int32_t));
        FUNC_1("perfmon: pm%i=%08x, pmctrl%i=%08x, pmstat%i=%08x\n", VAR_8, VAR_9, VAR_8, VAR_10, VAR_8, VAR_11);
    }
}
