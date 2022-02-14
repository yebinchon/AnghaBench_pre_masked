
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int* gprs; } ;
typedef int addr_t ;



__attribute__((used)) static void* FUNC_0(struct pt_regs *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
        addr_t VAR_4;

        VAR_1 &= 15;
        VAR_2 &= 15;
        VAR_4 = VAR_3 & 0xfff;
        VAR_4 += (VAR_1 != 0) ? VAR_0->gprs[VAR_1] : 0;
        VAR_4 += (VAR_2 != 0) ? VAR_0->gprs[VAR_2] : 0;
        return (void*) VAR_4;
}
