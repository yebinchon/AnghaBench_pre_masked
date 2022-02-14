
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ieee754sp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

ieee754sp FUNC_1(ieee754sp VAR_10, int *VAR_11)
{
 VAR_1;
 VAR_0;
 VAR_2;

 switch (VAR_6) {
 case 129:
 case 130:
 case 132:
 case 128:
  *VAR_11 = 0;
  return VAR_10;
 case 133:
  VAR_3;
  break;
 case 131:
  break;
 }
 *VAR_11 = VAR_7 + 1;
 return FUNC_0(VAR_9, -1 + VAR_4, VAR_8 & ~VAR_5);
}
