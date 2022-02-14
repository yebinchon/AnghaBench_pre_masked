
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(unsigned int VAR_4)
{
 switch (VAR_4) {
 case 16:
  if (!(VAR_3 & VAR_0))
   return 1;
  break;
 case 24:
  if (!(VAR_3 & VAR_1))
   return 1;
  break;
 case 32:
  if (!(VAR_3 & VAR_2))
   return 1;
  break;
 default:
  return -1;
  break;
 }
 return 0;
}
