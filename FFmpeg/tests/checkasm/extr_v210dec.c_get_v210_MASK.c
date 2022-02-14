
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 () ;

__attribute__((used)) static uint32_t FUNC_1(void)
{
    uint32_t VAR_0 = FUNC_0() & 0x3ff,
             VAR_1 = FUNC_0() & 0x3ff,
             VAR_2 = FUNC_0() & 0x3ff;
    uint32_t VAR_3 = VAR_0
                   | (VAR_1 << 10)
                   | (VAR_2 << 20);
    return VAR_3;
}
