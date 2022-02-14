
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ param; } ;
struct TYPE_7__ {int InitFinishEvent; int Event; int * ThreadProc; } ;
typedef TYPE_1__ THREAD_POOL_DATA ;
typedef TYPE_2__ THREAD ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_2__*) ;
 int * VAR_0 ;
 int VAR_1 ;

void FUNC_10()
{
 while (1)
 {
  if (FUNC_0(VAR_0) == 0)
  {
   break;
  }

  FUNC_8(25);
 }

 while (1)
 {
  THREAD_POOL_DATA *VAR_2;
  THREAD *VAR_3 = FUNC_3(VAR_1);

  if (VAR_3 == ((void*)0))
  {
   break;
  }

  VAR_2 = (THREAD_POOL_DATA *)VAR_3->param;

  VAR_2->ThreadProc = ((void*)0);
  FUNC_7(VAR_2->Event);

  FUNC_9(VAR_3);

  VAR_2 = (THREAD_POOL_DATA *)VAR_3->param;
  FUNC_4(VAR_2->Event);
  FUNC_4(VAR_2->InitFinishEvent);

  FUNC_6(VAR_3);

  FUNC_2(VAR_2);
 }

 FUNC_5(VAR_1);

 FUNC_1(VAR_0);
 VAR_0 = ((void*)0);
}
