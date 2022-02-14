
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ieee754sp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__,int,char*,int ,int) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

ieee754sp FUNC_2(ieee754sp VAR_8, int VAR_9)
{
 VAR_1;

 VAR_0;

 VAR_2;

 switch (VAR_4) {
 case 129:
  return FUNC_1(VAR_8, "scalb", VAR_8, VAR_9);
 case 130:
 case 132:
 case 128:
  return VAR_8;
 case 133:
  VAR_3;
  break;
 case 131:
  break;
 }
 FUNC_0(VAR_7, VAR_5 + VAR_9, VAR_6 << 3, "scalb", VAR_8, VAR_9);
}
