
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MUTEX_TYPE ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_4 (int) ;
 int * VAR_2 ;

int FUNC_5(void)
{
  int VAR_3;

  VAR_2 = FUNC_4(FUNC_0() * sizeof(MUTEX_TYPE));
  if(!VAR_2)
    return 0;
  for(VAR_3 = 0; VAR_3 < FUNC_0(); VAR_3++)
    FUNC_3(VAR_2[VAR_3]);
  FUNC_1(VAR_0);
  FUNC_2(VAR_1);
  return 1;
}
