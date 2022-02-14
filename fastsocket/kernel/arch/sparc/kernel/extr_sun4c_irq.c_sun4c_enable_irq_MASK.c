
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 unsigned char FUNC_2 (int ) ;
 int FUNC_3 (unsigned char,int ) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_6)
{
 unsigned long VAR_7;
 unsigned char VAR_8, VAR_9;

 FUNC_1(VAR_7);
 VAR_6 &= (VAR_0 - 1);
 VAR_8 = FUNC_2(VAR_5);
 switch(VAR_6) {
 case 1:
  VAR_9 = ((VAR_8) | VAR_1);
  break;
 case 8:
  VAR_9 = ((VAR_8) | VAR_4);
  break;
 case 10:
  VAR_9 = ((VAR_8) | VAR_2);
  break;
 case 14:
  VAR_9 = ((VAR_8) | VAR_3);
  break;
 default:
  FUNC_0(VAR_7);
  return;
 }
 FUNC_3(VAR_9, VAR_5);
 FUNC_0(VAR_7);
}
