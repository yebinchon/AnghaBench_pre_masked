
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;

void FUNC_3(char *VAR_3)
{
 FUNC_1();


 FUNC_0();


 FUNC_2(VAR_1, 0xfff00100);
 FUNC_2(VAR_2, VAR_0);


 __asm__ __volatile__("rfi" : : : "memory");


 while (1);
}
