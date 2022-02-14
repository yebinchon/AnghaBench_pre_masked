
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int FUNC_6(char *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = 0, VAR_6;

 FUNC_4();
 FUNC_3(VAR_1);
 FUNC_0();


 if (VAR_3 > 2048) {
  FUNC_3(0x00);
  FUNC_0();
 }

 FUNC_4();
 FUNC_3(VAR_0);
 VAR_6 = FUNC_0();
 if (VAR_6 == -1)
  return VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  *VAR_2++ = FUNC_1();
  FUNC_2();
 }



 FUNC_5();
}
