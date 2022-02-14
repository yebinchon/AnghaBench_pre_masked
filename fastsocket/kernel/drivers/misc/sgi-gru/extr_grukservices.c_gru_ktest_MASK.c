
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

int FUNC_5(unsigned long VAR_1)
{
 int VAR_2 = -VAR_0;

 switch (VAR_1 & 0xff) {
 case 0:
  VAR_2 = FUNC_1(VAR_1);
  break;
 case 1:
  VAR_2 = FUNC_2(VAR_1);
  break;
 case 2:
  VAR_2 = FUNC_3(VAR_1);
  break;
 case 3:
  VAR_2 = FUNC_4(VAR_1);
  break;
 case 99:
  VAR_2 = FUNC_0();
  break;
 }
 return VAR_2;

}
