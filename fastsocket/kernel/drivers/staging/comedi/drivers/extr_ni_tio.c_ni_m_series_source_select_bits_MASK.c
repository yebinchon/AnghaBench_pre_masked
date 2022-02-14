
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (unsigned int) ;

 unsigned int VAR_0 ;



 unsigned int const FUNC_2 (unsigned int) ;


 unsigned int const FUNC_3 (unsigned int) ;



 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_4 (unsigned int) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_5 (unsigned int) ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_6 (char*,unsigned long) ;

__attribute__((used)) static unsigned FUNC_7(unsigned int VAR_12)
{
 unsigned VAR_13;
 unsigned VAR_14;
 const unsigned VAR_15 =
     VAR_12 & VAR_0;
 switch (VAR_15) {
 case 130:
  VAR_13 = VAR_7;
  break;
 case 129:
  VAR_13 = VAR_8;
  break;
 case 128:
  VAR_13 = VAR_9;
  break;
 case 135:
  VAR_13 = VAR_2;
  break;
 case 134:
  VAR_13 = VAR_3;
  break;
 case 133:
  VAR_13 = VAR_4;
  break;
 case 132:
  VAR_13 = VAR_5;
  break;
 case 131:
  VAR_13 = VAR_6;
  break;
 case 136:
  VAR_13 = VAR_1;
  break;
 default:
  for (VAR_14 = 0; VAR_14 <= VAR_11; ++VAR_14) {
   if (VAR_15 == FUNC_3(VAR_14)) {
    VAR_13 = FUNC_5(VAR_14);
    break;
   }
  }
  if (VAR_14 <= VAR_11)
   break;
  for (VAR_14 = 0; VAR_14 <= VAR_10; ++VAR_14) {
   if (VAR_15 == FUNC_2(VAR_14)) {
    VAR_13 = FUNC_4(VAR_14);
    break;
   }
  }
  if (VAR_14 <= VAR_10)
   break;
  FUNC_6("invalid clock source 0x%lx\n",
         (unsigned long)VAR_12);
  FUNC_0();
  VAR_13 = 0;
  break;
 }
 return FUNC_1(VAR_13);
}
