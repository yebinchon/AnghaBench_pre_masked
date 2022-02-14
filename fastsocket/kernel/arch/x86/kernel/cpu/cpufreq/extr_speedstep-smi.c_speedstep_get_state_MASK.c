
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(void)
{
 u32 VAR_4 = VAR_0;
 u32 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_8 = (VAR_3 & 0xffffff00) | (VAR_1 & 0xff);

 FUNC_0("trying to determine current setting with command %x "
  "at port %x\n", VAR_8, VAR_2);

 __asm__ __volatile__(
  "push %%ebp\n"
  "out %%al, (%%dx)\n"
  "pop %%ebp\n"
  : "=a" (VAR_5),
    "=b" (VAR_6), "=D" (VAR_7),
    "=c" (VAR_9), "=d" (VAR_9), "=S" (VAR_9)
  : "a" (VAR_8), "b" (VAR_4), "c" (0),
    "d" (VAR_2), "S" (0), "D" (0)
 );

 FUNC_0("state is %x, result is %x\n", VAR_6, VAR_5);

 return VAR_6 & 1;
}
