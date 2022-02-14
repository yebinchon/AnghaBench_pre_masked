
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static inline u32 FUNC_2(u32 *VAR_0, u32 VAR_1)
{
 u32 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1();

 asm(".byte 0x0F,0xA7,0xC0 /* xstore %%edi (addr=%0) */"
  :"=m"(*VAR_0), "=a"(VAR_2)
  :"D"(VAR_0), "d"(VAR_1));

 FUNC_0(VAR_3);
 return VAR_2;
}
