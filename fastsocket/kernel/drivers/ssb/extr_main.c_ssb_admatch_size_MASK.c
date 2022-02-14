
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int FUNC_0 (int) ;

u32 FUNC_1(u32 VAR_8)
{
 u32 VAR_9 = 0;

 switch (VAR_8 & VAR_7) {
 case 130:
  VAR_9 = ((VAR_8 & VAR_1) >> VAR_2);
  break;
 case 129:
  FUNC_0(VAR_8 & VAR_0);
  VAR_9 = ((VAR_8 & VAR_3) >> VAR_4);
  break;
 case 128:
  FUNC_0(VAR_8 & VAR_0);
  VAR_9 = ((VAR_8 & VAR_5) >> VAR_6);
  break;
 default:
  FUNC_0(1);
 }
 VAR_9 = (1 << (VAR_9 + 1));

 return VAR_9;
}
