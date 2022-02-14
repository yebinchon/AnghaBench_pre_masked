
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (unsigned int) ;
 int VAR_6 ;
 int FUNC_2 (unsigned int) ;
 int VAR_7 ;






 unsigned int FUNC_3 (unsigned int) ;

 unsigned int FUNC_4 (unsigned int) ;

 unsigned int VAR_8 ;
 unsigned int VAR_9 ;

__attribute__((used)) static unsigned FUNC_5(unsigned
             VAR_10)
{
 unsigned VAR_11;

 switch (VAR_10) {
 case 128:
  return VAR_7;
  break;
 case 134:
  return VAR_1;
  break;
 case 129:
  return VAR_6;
  break;
 case 131:
  return VAR_4;
  break;
 case 135:
  return VAR_0;
  break;
 case 130:
  return VAR_5;
  break;
 case 133:
  return VAR_2;
  break;
 case 132:
  return VAR_3;
  break;
 default:
  for (VAR_11 = 0; VAR_11 <= VAR_9; ++VAR_11) {
   if (VAR_10 ==
       FUNC_4(VAR_11)) {
    return FUNC_2(VAR_11);
    break;
   }
  }
  if (VAR_11 <= VAR_9)
   break;
  for (VAR_11 = 0; VAR_11 <= VAR_8; ++VAR_11) {
   if (VAR_10 ==
       FUNC_3(VAR_11)) {
    return FUNC_1(VAR_11);
    break;
   }
  }
  if (VAR_11 <= VAR_8)
   break;
  FUNC_0();
  break;
 }
 return 0;
}
