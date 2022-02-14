
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 unsigned int FUNC_1 (unsigned int) ;




 unsigned int FUNC_2 (unsigned int) ;

 int FUNC_3 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (unsigned int) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;

__attribute__((used)) static unsigned FUNC_5(unsigned
         VAR_7)
{
 unsigned VAR_8;

 switch (VAR_7) {
 case 128:
  return VAR_4;
  break;
 case 132:
  return VAR_0;
  break;
 case 129:
  return VAR_3;
  break;
 case 130:
  return VAR_2;
  break;
 case 131:
  return VAR_1;
  break;
 default:
  for (VAR_8 = 0; VAR_8 <= VAR_6; ++VAR_8) {
   if (VAR_7 == FUNC_2(VAR_8)) {
    return FUNC_4(VAR_8);
    break;
   }
  }
  if (VAR_8 <= VAR_6)
   break;
  for (VAR_8 = 0; VAR_8 <= VAR_5; ++VAR_8) {
   if (VAR_7 ==
       FUNC_1(VAR_8)) {
    return FUNC_3(VAR_8);
    break;
   }
  }
  if (VAR_8 <= VAR_5)
   break;
  FUNC_0();
  break;
 }
 return 0;
}
