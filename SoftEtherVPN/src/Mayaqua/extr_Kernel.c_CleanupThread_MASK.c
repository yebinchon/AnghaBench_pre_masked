
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Name; int PoolWaitList; int release_event; int init_finished_event; } ;
typedef TYPE_1__ THREAD ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

void FUNC_3(THREAD *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_1->init_finished_event);
 FUNC_1(VAR_1->release_event);
 FUNC_2(VAR_1->PoolWaitList);

 if (VAR_1->Name != ((void*)0))
 {
  FUNC_0(VAR_1->Name);
 }

 FUNC_0(VAR_1);

 VAR_0--;

}
