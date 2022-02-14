
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (unsigned char,int ) ;
 int VAR_4 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;




void FUNC_5(unsigned char VAR_5, unsigned char VAR_6)
{
 unsigned char VAR_7;
 unsigned long VAR_8;
 FUNC_3(&VAR_2, VAR_8);
 switch(VAR_4) {
 case 130:
  VAR_7 = FUNC_1(VAR_3);
  FUNC_2(((VAR_7 | VAR_5) & ~VAR_6) | VAR_0,
   VAR_3);
  break;
 case 128:
  if(!VAR_3)
   break;
  VAR_7 = FUNC_1(VAR_3);
  FUNC_2(((VAR_7 | VAR_5) & ~VAR_6) | VAR_1,
   VAR_3);
  break;
 case 129:
  break;
 default:
  FUNC_0("Can't set AUXIO register on this machine.");
 };
 FUNC_4(&VAR_2, VAR_8);
}
