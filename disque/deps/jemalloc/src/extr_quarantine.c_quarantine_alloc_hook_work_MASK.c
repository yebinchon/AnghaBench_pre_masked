
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;
typedef int quarantine_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

void
FUNC_6(tsd_t *VAR_1)
{
 quarantine_t *VAR_2;

 if (!FUNC_3(VAR_1))
  return;

 VAR_2 = FUNC_1(VAR_1, VAR_0);




 if (FUNC_4(VAR_1) == ((void*)0))
  FUNC_5(VAR_1, VAR_2);
 else
  FUNC_0(VAR_1, VAR_2, FUNC_2(VAR_1, 0), 1);
}
