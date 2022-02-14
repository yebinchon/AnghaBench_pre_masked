
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

int FUNC_7(int VAR_0, int VAR_1,
       int VAR_2)
{
 int VAR_3 = -1;
 int VAR_4 = FUNC_4(VAR_0);
 int VAR_5 = FUNC_3(VAR_0);

 if (VAR_5 >= FUNC_6(VAR_4))
  return -1;

 switch (FUNC_5(VAR_4)) {
 case 137:
 case 133:
 case 129:
 case 134:
 case 135:
  break;
 case 128:
  VAR_3 =
      FUNC_2(VAR_0,
         VAR_1,
         VAR_2);
  break;
 case 131:
 case 136:
  VAR_3 =
      FUNC_0(VAR_0,
          VAR_1,
          VAR_2);
  break;
 case 130:
 case 132:
  VAR_3 =
      FUNC_1(VAR_0,
          VAR_1,
          VAR_2);
  break;
 }
 return VAR_3;
}
