
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned long) ;

void FUNC_1(void)
{
    unsigned long *VAR_2 = (unsigned long *)0;
    volatile int VAR_3 = 0;
    int VAR_4 = 0;

    for (VAR_4 = 0; VAR_4 < 1000; VAR_4++) {
        VAR_3++;
    }

    if(VAR_1 & VAR_0) {
        FUNC_0("Write to bad address 0x%lx.\n", (unsigned long)VAR_2);
        *VAR_2 = 0xDEADBEEF;
    }
}
