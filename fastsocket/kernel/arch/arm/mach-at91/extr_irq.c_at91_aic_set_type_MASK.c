
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;




 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static int FUNC_4(unsigned VAR_7, unsigned VAR_8)
{
 unsigned int VAR_9, VAR_10;

 switch (VAR_8) {
 case 129:
  VAR_10 = VAR_2;
  break;
 case 130:
  VAR_10 = VAR_4;
  break;
 case 128:
  if ((VAR_7 == VAR_5) || FUNC_3(VAR_7))
   VAR_10 = VAR_3;
  else
   return -VAR_6;
  break;
 case 131:
  if ((VAR_7 == VAR_5) || FUNC_3(VAR_7))
   VAR_10 = VAR_1;
  else
   return -VAR_6;
  break;
 default:
  return -VAR_6;
 }

 VAR_9 = FUNC_1(FUNC_0(VAR_7)) & ~VAR_0;
 FUNC_2(FUNC_0(VAR_7), VAR_9 | VAR_10);
 return 0;
}
