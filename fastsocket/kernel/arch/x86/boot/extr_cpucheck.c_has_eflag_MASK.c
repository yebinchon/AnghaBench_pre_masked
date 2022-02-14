
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static int FUNC_0(u32 VAR_0)
{
 u32 VAR_1, VAR_2;

 asm("pushfl ; "
     "pushfl ; "
     "popl %0 ; "
     "movl %0,%1 ; "
     "xorl %2,%1 ; "
     "pushl %1 ; "
     "popfl ; "
     "pushfl ; "
     "popl %1 ; "
     "popfl"
     : "=&r" (VAR_1), "=&r" (VAR_2)
     : "ri" (VAR_0));

 return !!((VAR_1^VAR_2) & VAR_0);
}
