
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static void FUNC_0(void)
{

 VAR_1 = *(volatile unsigned long *)0xfeff9820;
 *(volatile unsigned long *)0xfeff9820 = ~(1 << (VAR_0 + 16)) & 0xfffe0000;
}
