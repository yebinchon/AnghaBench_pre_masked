
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(int VAR_4)
{
 switch (VAR_4) {
 case 0:
  return (VAR_0 > 0x0f) ? 0 : VAR_2 ? 1 : VAR_3;
 case 1:
  return (VAR_1 > 0x0f) ? 0 : VAR_2 ? VAR_3 : 1;
 case 2:
 case 3:
 default:
  return 1;
 }
}
