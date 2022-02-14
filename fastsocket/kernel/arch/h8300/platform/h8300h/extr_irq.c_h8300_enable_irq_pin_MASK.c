
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;






 int FUNC_0 (int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;

int FUNC_2(unsigned int VAR_4)
{
 int VAR_5;
 if (VAR_4 < 133 || VAR_4 > 128)
  return 0;


 VAR_5 = 1 << (VAR_4 - 133);
 switch(VAR_4) {
 case 133:
 case 132:
 case 131:
 case 130:
  if (FUNC_1(VAR_2, VAR_5) == 0)
   return -VAR_0;
  FUNC_0(VAR_2, VAR_5, VAR_1);
  break;
 case 129:
 case 128:
  if (FUNC_1(VAR_3, VAR_5) == 0)
   return -VAR_0;
  FUNC_0(VAR_3, VAR_5, VAR_1);
  break;
 }

 return 0;
}
