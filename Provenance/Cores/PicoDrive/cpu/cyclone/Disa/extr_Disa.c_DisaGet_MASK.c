
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*,scalar_t__*) ;

int FUNC_3()
{
  int VAR_3=0;
  if (&FUNC_0==((void*)0)) return 1;

  VAR_0[0]=0;
  VAR_2[0]=0;

  VAR_3=FUNC_0(VAR_1)&0xffff; VAR_1+=2;
  FUNC_1(VAR_3);
  FUNC_2(VAR_2,VAR_0);


  return 0;
}
