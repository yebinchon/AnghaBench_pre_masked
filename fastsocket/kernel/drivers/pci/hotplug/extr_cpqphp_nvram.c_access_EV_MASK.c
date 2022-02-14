
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static u32 FUNC_2 (u16 VAR_3, u8 *VAR_4, u8 *VAR_5, u32 *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8 = VAR_3;
 int VAR_9;

 if (!VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_2, VAR_7);
 __asm__ (
  "xorl   %%ebx,%%ebx\n" "xorl    %%edx,%%edx\n" "pushf\n" "push %%cs\n" "cli\n" "call *%6\n"





  : "=c" (*VAR_6), "=a" (VAR_9)
  : "a" (VAR_8), "c" (*VAR_6), "S" (VAR_4),
  "D" (VAR_5), "m" (VAR_1)
  : "%ebx", "%edx");
 FUNC_1(&VAR_2, VAR_7);

 return((VAR_9 & 0xFF00) >> 8);
}
