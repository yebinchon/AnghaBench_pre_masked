
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 double VAR_4 ;
 scalar_t__ VAR_5 ;
 double FUNC_0 () ;
 int VAR_6 ;
 int FUNC_1 (double) ;
 double FUNC_2 () ;
 int FUNC_3 (double,double) ;

void FUNC_4(void)
{
 static double VAR_7 = 0;
 double VAR_8 = 1.0 / ((VAR_5 == VAR_2) ? VAR_1 : VAR_0);
 double VAR_9;
 VAR_7 += VAR_8;
 VAR_9 = FUNC_2();
 if (VAR_3)
  FUNC_3(VAR_9, VAR_7);
 FUNC_1(VAR_7 - VAR_9);
 VAR_9 = FUNC_2();

 if ((VAR_7 + VAR_8) < VAR_9)
  VAR_7 = VAR_9;
}
