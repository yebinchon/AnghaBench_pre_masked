
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;



 unsigned int const FUNC_4 (unsigned int) ;
 unsigned int const FUNC_5 (unsigned int) ;




 unsigned int VAR_8 ;
 unsigned int VAR_9 ;

__attribute__((used)) static unsigned FUNC_6(unsigned int VAR_10)
{
 unsigned VAR_11;
 unsigned VAR_12;
 const unsigned VAR_13 =
     VAR_10 & VAR_7;

 switch (VAR_13) {
 case 130:
  VAR_11 = VAR_4;
  break;
 case 129:
  VAR_11 = VAR_5;
  break;
 case 128:
  VAR_11 = VAR_6;
  break;
 case 134:
  VAR_11 = VAR_0;
  break;
 case 131:
  VAR_11 = VAR_3;
  break;
 case 133:
  VAR_11 = VAR_1;
  break;
 case 132:
  VAR_11 = VAR_2;
  break;
 default:
  for (VAR_12 = 0; VAR_12 <= VAR_8; ++VAR_12) {
   if (VAR_13 == FUNC_4(VAR_12)) {
    VAR_11 = FUNC_2(VAR_12);
    break;
   }
  }
  if (VAR_12 <= VAR_8)
   break;
  for (VAR_12 = 0; VAR_12 <= VAR_9; ++VAR_12) {
   if (VAR_13 ==
       FUNC_5(VAR_12)) {
    VAR_11 = FUNC_3(VAR_12);
    break;
   }
  }
  if (VAR_12 <= VAR_9)
   break;
  VAR_11 = 0;
  FUNC_0();
  break;
 }
 return FUNC_1(VAR_11);
}
