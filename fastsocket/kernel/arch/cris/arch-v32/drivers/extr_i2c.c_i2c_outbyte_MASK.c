
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void
FUNC_5(unsigned char VAR_6)
{
 int VAR_7;

 FUNC_4();

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  if (VAR_6 & 0x80) {
   FUNC_1(VAR_4);
  } else {
   FUNC_1(VAR_5);
  }

  FUNC_2(VAR_1/2);
  FUNC_0(VAR_2);
  FUNC_2(VAR_0);
  FUNC_0(VAR_3);
  FUNC_2(VAR_1/2);
  VAR_6 <<= 1;
 }
 FUNC_1(VAR_5);
 FUNC_2(VAR_1/2);




 FUNC_3();
}
