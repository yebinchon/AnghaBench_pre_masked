
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 unsigned char FUNC_5 () ;

unsigned char
FUNC_6(void)
{
 unsigned char VAR_4 = 0;
 int VAR_5;


 FUNC_3();
 FUNC_2();
 FUNC_1(VAR_0/2);


 VAR_4 |= FUNC_5();


 FUNC_4();
 FUNC_1(VAR_1/2);

 for (VAR_5 = 1; VAR_5 < 8; VAR_5++) {
  VAR_4 <<= 1;

  FUNC_0(VAR_2);
  FUNC_1(VAR_0);
  FUNC_0(VAR_3);
  FUNC_1(VAR_1);


  FUNC_3();
  FUNC_2();
  FUNC_1(VAR_0/2);


  VAR_4 |= FUNC_5();


  FUNC_4();
  FUNC_1(VAR_1/2);
 }
 FUNC_0(VAR_2);
 FUNC_1(VAR_0);





        FUNC_0(VAR_3);
 return VAR_4;
}
