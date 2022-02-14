
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int ia32_boot_gdt ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long** VAR_5 ;
 size_t FUNC_1 () ;

__attribute__((used)) static unsigned long
FUNC_2 (u16 VAR_6)
{
 unsigned long *VAR_7, VAR_8, VAR_9;

 if (!VAR_6)
  return 0;
 if (VAR_6 & VAR_4) {
  VAR_7 = (unsigned long *) VAR_1;
  VAR_8 = VAR_0;
 } else {
  VAR_7 = VAR_5[FUNC_1()];
  VAR_8 = VAR_2 / sizeof(ia32_boot_gdt[0]);
 }
 VAR_9 = VAR_6 >> VAR_3;
 if (VAR_9 >= VAR_8)
  return 0;
 return FUNC_0(VAR_7[VAR_9]);
}
