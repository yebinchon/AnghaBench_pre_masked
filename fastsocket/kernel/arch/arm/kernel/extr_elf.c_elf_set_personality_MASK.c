
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf32_hdr {unsigned int e_flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;

void FUNC_3(const struct elf32_hdr *VAR_9)
{
 unsigned int VAR_10 = VAR_9->e_flags;
 unsigned int VAR_11 = VAR_6;




 if ((VAR_10 & VAR_1) == VAR_2) {
  if (VAR_10 & VAR_0)
   VAR_11 = VAR_5;
 }

 FUNC_1(VAR_11);







 if (VAR_8 & VAR_4 &&
     VAR_10 & (VAR_1 | VAR_3)) {
  FUNC_2(VAR_7);
 } else {
  FUNC_0(VAR_7);
 }
}
