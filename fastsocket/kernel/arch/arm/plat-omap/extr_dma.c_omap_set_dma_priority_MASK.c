
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;




 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int,unsigned long) ;

void FUNC_8(int VAR_4, int VAR_5, int VAR_6)
{
 unsigned long VAR_7;
 u32 VAR_8;

 if (FUNC_2()) {
  switch (VAR_5) {
  case 129:
   VAR_7 = VAR_2;
   break;
  case 128:
   VAR_7 = VAR_3;
   break;
  case 131:
   VAR_7 = VAR_0;
   break;
  case 130:
   VAR_7 = VAR_1;
   break;
  default:
   FUNC_0();
   return;
  }
  VAR_8 = FUNC_6(VAR_7);
  VAR_8 &= ~(0xf << 8);
  VAR_8 |= (VAR_6 & 0xf) << 8;
  FUNC_7(VAR_8, VAR_7);
 }

 if (FUNC_3()) {
  u32 VAR_9;

  VAR_9 = FUNC_4(FUNC_1(VAR_4));
  if (VAR_6)
   VAR_9 |= (1 << 6);
  else
   VAR_9 &= ~(1 << 6);
  FUNC_5(VAR_9, FUNC_1(VAR_4));
 }
}
