
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf32_hdr {scalar_t__ e_machine; int e_flags; } ;
 int VAR_0 ;




 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 () ;

int FUNC_3(const struct elf32_hdr *VAR_14)
{
 unsigned long VAR_15 = FUNC_1(0);
 unsigned long VAR_16 = FUNC_2();

 if (VAR_14->e_machine != VAR_4)
  return 0;

 switch (VAR_14->e_flags & VAR_2) {
 case 128:
  if ((VAR_15 & VAR_7) == VAR_8)
   return 0;
 case 129:
 case 0:
  break;
 default:
  return 0;
 }

 switch (VAR_14->e_flags & VAR_1) {
 case 131:
  if ((VAR_15 & VAR_5) == VAR_6)
   return 0;
 case 132:
 case 130:
 case 0:
  break;
 default:
  return 0;
 }

 if ((VAR_14->e_flags & VAR_3) == VAR_3)
  if (FUNC_0(VAR_16) != VAR_10 &&
      FUNC_0(VAR_16) != VAR_11)
   return 0;

 switch (VAR_14->e_flags & VAR_0) {
 case 135:
  break;
 case 140:
 case 134:
 case 133:
 default:
  return 0;
 case 139:
  if (FUNC_0(VAR_16) != VAR_9 &&
      FUNC_0(VAR_16) != VAR_10 &&
      FUNC_0(VAR_16) != VAR_11 &&
      FUNC_0(VAR_16) != VAR_13)
   return 0;
  break;
 case 138:
  if (FUNC_0(VAR_16) != VAR_11)
   return 0;
  break;
 case 137:
  if (FUNC_0(VAR_16) != VAR_12)
   return 0;
  break;
 case 136:
  if (FUNC_0(VAR_16) != VAR_13)
   return 0;
  break;
 }

 return 1;
}
