
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;
typedef int quarantine_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

void
FUNC_5(tsd_t *VAR_1)
{
 quarantine_t *VAR_2;

 if (!VAR_0)
  return;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 != ((void*)0)) {
  FUNC_1(VAR_1, VAR_2, 0);
  FUNC_0(VAR_1, VAR_2, FUNC_2(VAR_1, 0), 1);
  FUNC_4(VAR_1, ((void*)0));
 }
}
