
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 size_t FUNC_1 () ;
 size_t FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (size_t,int) ;

void FUNC_5(void)
{
    size_t VAR_0=FUNC_2();
    size_t VAR_1=FUNC_1();
    FUNC_3("Himem has %dKiB of memory, %dKiB of which is free. Testing the free memory...\n", (int)VAR_0/1024, (int)VAR_1/1024);
    FUNC_0(FUNC_4(VAR_1, 0xaaaa));
    FUNC_3("Done!\n");
}
