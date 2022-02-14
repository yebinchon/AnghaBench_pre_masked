
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf32_hdr {scalar_t__ e_machine; int e_entry; unsigned int e_flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_0(const struct elf32_hdr *VAR_10)
{
 unsigned int VAR_11;


 if (VAR_10->e_machine != VAR_5)
  return 0;


 if (VAR_10->e_entry & 1) {
  if (!(VAR_9 & VAR_7))
   return 0;
 } else if (VAR_10->e_entry & 3)
  return 0;

 VAR_11 = VAR_10->e_flags;
 if ((VAR_11 & VAR_1) == VAR_2) {
  unsigned int VAR_12;


  if ((VAR_11 & VAR_0) && !(VAR_9 & VAR_6))
   return 0;

  VAR_12 = VAR_11 & (VAR_4 | VAR_3);


  if (VAR_12 == VAR_4 && !(VAR_9 & VAR_8))
   return 0;
 }
 return 1;
}
