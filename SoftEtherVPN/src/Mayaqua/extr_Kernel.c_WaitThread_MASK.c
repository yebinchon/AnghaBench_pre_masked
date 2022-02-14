
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_10__ {int ref; } ;
struct TYPE_9__ {int PoolWaitList; scalar_t__ PoolHalting; } ;
typedef TYPE_1__ THREAD ;
typedef TYPE_2__ EVENT ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;

bool FUNC_8(THREAD *VAR_0, UINT VAR_1)
{
 bool VAR_2 = 0;
 EVENT *VAR_3 = ((void*)0);

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 FUNC_3(VAR_0->PoolWaitList);
 {
  if (VAR_0->PoolHalting)
  {

   VAR_2 = 1;
  }
  else
  {

   VAR_3 = FUNC_4();
   FUNC_0(VAR_3->ref);
   FUNC_2(VAR_0->PoolWaitList, VAR_3);
  }
 }
 FUNC_6(VAR_0->PoolWaitList);

 if (VAR_3 != ((void*)0))
 {

  VAR_2 = FUNC_7(VAR_3, VAR_1);

  FUNC_3(VAR_0->PoolWaitList);
  {
   if (FUNC_1(VAR_0->PoolWaitList, VAR_3))
   {
    FUNC_5(VAR_3);
   }
  }
  FUNC_6(VAR_0->PoolWaitList);

  FUNC_5(VAR_3);
 }

 return VAR_2;
}
