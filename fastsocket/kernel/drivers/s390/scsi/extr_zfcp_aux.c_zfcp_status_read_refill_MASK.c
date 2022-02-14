
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int stat_miss; int qdio; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct zfcp_adapter*,int ,char*,int *) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(struct zfcp_adapter *VAR_0)
{
 while (FUNC_1(&VAR_0->stat_miss) > 0)
  if (FUNC_3(VAR_0->qdio)) {
   if (FUNC_1(&VAR_0->stat_miss) >= 16) {
    FUNC_2(VAR_0, 0, "axsref1",
       ((void*)0));
    return 1;
   }
   break;
  } else
   FUNC_0(&VAR_0->stat_miss);
 return 0;
}
