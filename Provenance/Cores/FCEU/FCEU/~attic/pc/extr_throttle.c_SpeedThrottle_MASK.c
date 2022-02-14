
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(void)
{
 static uint64 VAR_2,VAR_3=0;

 waiter:

 VAR_2=FUNC_0();

 if( (VAR_2-VAR_3) < (VAR_1/VAR_0) )
  goto waiter;
 if( (VAR_2-VAR_3) >= (VAR_1*4/VAR_0))
  VAR_3=VAR_2;
 else
  VAR_3+=VAR_1/VAR_0;
}
