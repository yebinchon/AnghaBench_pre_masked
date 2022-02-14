
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (int) ;


 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

extern inline int FUNC_3(u16 VAR_6)
{
 int VAR_7 = VAR_2;

 switch (FUNC_2(VAR_6)) {
 case 130:
  if ((VAR_6 & VAR_4) && (VAR_6 & VAR_5))
   VAR_7 = VAR_3;
  if(FUNC_0(VAR_6))
   VAR_7 += 2;
  break;
 case 131:
  switch (FUNC_1(VAR_6)) {
  case 128:
  case 129:
   VAR_7 = VAR_0;
   break;
  default:
   VAR_7 = VAR_1;
   break;
  }
  break;
 }

 return VAR_7;
}
