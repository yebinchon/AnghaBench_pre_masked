
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3(int VAR_2)
{
 int VAR_3 = 0;

 switch (FUNC_0(VAR_2)) {
 case 129:
  VAR_3 = FUNC_2(VAR_1 + VAR_0) &
   (1 << FUNC_1(VAR_2));
  break;

 case 128:
  VAR_3 = FUNC_2(VAR_1 + VAR_0) &
   (1 << FUNC_1(VAR_2));
  break;
 }
 return VAR_3;
}
