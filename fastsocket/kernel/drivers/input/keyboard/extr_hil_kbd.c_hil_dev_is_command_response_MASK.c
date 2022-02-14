
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hil_packet ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static bool FUNC_0(hil_packet VAR_6)
{
 if ((VAR_6 & ~VAR_0) == (VAR_4 | VAR_5 | VAR_2))
  return 0;

 if ((VAR_6 & ~VAR_1) == (VAR_4 | VAR_5 | VAR_3))
  return 0;

 return 1;
}
