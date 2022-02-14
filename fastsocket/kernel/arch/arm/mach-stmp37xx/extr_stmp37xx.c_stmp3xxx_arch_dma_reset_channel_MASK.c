
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned int,scalar_t__) ;

void FUNC_5(int VAR_6)
{
 unsigned VAR_7 = 1 << FUNC_1(VAR_6);

 switch (FUNC_0(VAR_6)) {
 case 129:

  FUNC_4(VAR_7 << VAR_0,
   VAR_4 + VAR_2);
  while (FUNC_2(VAR_4 + VAR_2) &
         (VAR_7 << VAR_0))
    FUNC_3();
  break;

 case 128:
  FUNC_4(VAR_7 << VAR_1,
   VAR_5 + VAR_3);
  while (FUNC_2(VAR_5 + VAR_3) &
         (VAR_7 << VAR_1))
    FUNC_3();
  break;
 }
}
