
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_0(int VAR_9, int VAR_10)
{
 int VAR_11;

 VAR_11 = 0;
 switch (VAR_9&3) {
 default:
 case 130:
  VAR_11 = VAR_6;
  break;

 case 128:
  VAR_11 = VAR_8;
  break;

 case 129:
  VAR_11 = VAR_5;
  break;
 }

 if (VAR_9 & VAR_2)
  VAR_11 |= VAR_7;

 if (VAR_10) {
  if (VAR_9 & VAR_1)
   VAR_11 |= VAR_4;

  if (VAR_9 & VAR_0)
   VAR_11 |= VAR_3;
 }

 return VAR_11;
}
