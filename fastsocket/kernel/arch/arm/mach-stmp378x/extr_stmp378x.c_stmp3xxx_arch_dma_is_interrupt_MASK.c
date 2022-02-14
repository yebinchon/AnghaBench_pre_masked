
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3(int VAR_4)
{
 int VAR_5 = 0;

 switch (FUNC_0(VAR_4)) {
 case 129:
  VAR_5 = FUNC_2(VAR_2 + VAR_0) &
   (1 << FUNC_1(VAR_4));
  break;

 case 128:
  VAR_5 = FUNC_2(VAR_3 + VAR_1) &
   (1 << FUNC_1(VAR_4));
  break;
 }
 return VAR_5;
}
