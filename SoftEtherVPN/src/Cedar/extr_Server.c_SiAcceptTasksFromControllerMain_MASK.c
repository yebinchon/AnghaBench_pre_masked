
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int taskname ;
struct TYPE_6__ {int IsConnected; TYPE_1__* Server; } ;
struct TYPE_5__ {int TasksFromFarmControllerLock; } ;
typedef int SOCK ;
typedef int PACK ;
typedef TYPE_2__ FARM_CONTROLLER ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,char*,int) ;
 scalar_t__ FUNC_6 (int *,char*,char*,int) ;
 int * FUNC_7 (TYPE_2__*,int *,char*) ;
 int FUNC_8 (int ) ;

void FUNC_9(FARM_CONTROLLER *VAR_1, SOCK *VAR_2)
{
 PACK *VAR_3;
 PACK *VAR_4;
 char VAR_5[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_1->IsConnected = 1;

 while (1)
 {
  bool VAR_6;

  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3 == ((void*)0))
  {

   break;
  }

  VAR_4 = ((void*)0);


  if (FUNC_6(VAR_3, "taskname", VAR_5, sizeof(VAR_5)))
  {
   FUNC_3(VAR_1->Server->TasksFromFarmControllerLock);
   {
    VAR_4 = FUNC_7(VAR_1, VAR_3, VAR_5);
   }
   FUNC_8(VAR_1->Server->TasksFromFarmControllerLock);
  }

  FUNC_0(VAR_3);


  if (VAR_4 == ((void*)0))
  {
   VAR_4 = FUNC_4();
  }
  else
  {
   FUNC_5(VAR_4, "succeed", 1);
  }

  VAR_6 = FUNC_2(VAR_2, VAR_4);
  FUNC_0(VAR_4);

  if (VAR_6 == 0)
  {

   break;
  }
 }

 VAR_1->IsConnected = 0;
}
