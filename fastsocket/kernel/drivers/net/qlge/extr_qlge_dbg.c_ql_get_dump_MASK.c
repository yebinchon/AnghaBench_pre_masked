
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int ndev; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_1 (struct ql_adapter*,void*) ;
 int FUNC_2 (struct ql_adapter*,void*) ;
 int FUNC_3 (struct ql_adapter*) ;
 int FUNC_4 (struct ql_adapter*) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct ql_adapter *VAR_2, void *VAR_3)
{
 if (!FUNC_5(VAR_0, &VAR_2->flags)) {
  if(!FUNC_1(VAR_2, VAR_3))
   FUNC_4(VAR_2);
  else
   FUNC_0(VAR_2, VAR_1, VAR_2->ndev,"coredump failed!\n");
 } else {
  FUNC_2(VAR_2, VAR_3);
  FUNC_3(VAR_2);
 }
}
