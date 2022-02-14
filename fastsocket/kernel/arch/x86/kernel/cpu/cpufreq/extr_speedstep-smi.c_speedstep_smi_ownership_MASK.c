
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned char*) ;

__attribute__((used)) static int FUNC_2(void)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7;
 u32 VAR_8 = VAR_0;
 unsigned char VAR_9[] = "Copyright (c) 1999 Intel Corporation";

 VAR_4 = (VAR_3 & 0xffffff00) | (VAR_1 & 0xff);
 VAR_6 = FUNC_1(VAR_9);

 FUNC_0("trying to obtain ownership with command %x at port %x\n",
   VAR_4, VAR_2);

 __asm__ __volatile__(
  "push %%ebp\n"
  "out %%al, (%%dx)\n"
  "pop %%ebp\n"
  : "=D" (VAR_5),
    "=a" (VAR_7), "=b" (VAR_7), "=c" (VAR_7), "=d" (VAR_7),
    "=S" (VAR_7)
  : "a" (VAR_4), "b" (VAR_8), "c" (0), "d" (VAR_2),
    "D" (0), "S" (VAR_6)
  : "memory"
 );

 FUNC_0("result is %x\n", VAR_5);

 return VAR_5;
}
