
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int) ;


 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

extern inline int FUNC_3(u16 VAR_2)
{
 int VAR_3 = 24;

 switch (FUNC_2(VAR_2)) {
 case 130:
  if ((VAR_2 & VAR_0) && (VAR_2 & VAR_1))
   VAR_3 = 30;
  if(FUNC_0(VAR_2))
   VAR_3 += 2;
  break;
 case 131:
  switch (FUNC_1(VAR_2)) {
  case 128:
  case 129:
   VAR_3 = 10;
   break;
  default:
   VAR_3 = 16;
   break;
  }
  break;
 }

 return VAR_3;
}
