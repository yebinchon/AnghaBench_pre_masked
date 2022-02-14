
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_6__ {TYPE_1__* Cedar; int hostname; } ;
struct TYPE_5__ {int Server; } ;
typedef int PACK ;
typedef TYPE_2__ FARM_MEMBER ;


 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*,int,char*,char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (TYPE_2__*,int *) ;

PACK *FUNC_5(FARM_MEMBER *VAR_1, PACK *VAR_2, char *VAR_3)
{
 PACK *VAR_4;
 char VAR_5[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_2(VAR_2, "taskname", VAR_3);

 FUNC_0("Call Task [%s] (%s)\n", VAR_3, VAR_1->hostname);

 FUNC_1(VAR_5, sizeof(VAR_5), "CLUSTER_CALL: Entering Call [%s] to %s", VAR_3, VAR_1->hostname);
 FUNC_3(VAR_1->Cedar->Server, VAR_5);

 VAR_4 = FUNC_4(VAR_1, VAR_2);

 FUNC_1(VAR_5, sizeof(VAR_5), "CLUSTER_CALL: Leaving Call [%s] to %s", VAR_3, VAR_1->hostname);
 FUNC_3(VAR_1->Cedar->Server, VAR_5);

 return VAR_4;
}
