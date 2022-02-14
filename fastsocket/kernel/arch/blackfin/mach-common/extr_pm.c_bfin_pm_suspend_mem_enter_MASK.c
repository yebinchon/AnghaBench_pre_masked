
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 (unsigned char*) ;
 unsigned char* FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (unsigned long) ;
 int FUNC_16 (unsigned long) ;
 int FUNC_17 (char*) ;
 int VAR_10 ;

int FUNC_18(void)
{
 unsigned long VAR_11;
 int VAR_12, VAR_13;

 unsigned char *VAR_14 = FUNC_14(VAR_4 + VAR_5
      + VAR_6 + VAR_7,
       VAR_2);

 if (VAR_14 == ((void*)0)) {
  FUNC_17("bf53x_suspend_l1_mem malloc failed");
  return -VAR_0;
 }

 VAR_12 = FUNC_8() & ~VAR_1;
 VAR_12 |= VAR_9;
 FUNC_16(VAR_11);

 VAR_13 = FUNC_10();

 if (VAR_13) {
  FUNC_15(VAR_11);
  FUNC_13(VAR_14);
  return VAR_13;
 }

 FUNC_7();




 FUNC_0();
 FUNC_1();
 FUNC_5(VAR_14);

 FUNC_11(VAR_12 | VAR_10);

 FUNC_4(VAR_14);

 FUNC_3();
 FUNC_2();

 FUNC_6();
 FUNC_9();

 FUNC_15(VAR_11);
 FUNC_13(VAR_14);

 return 0;
}
