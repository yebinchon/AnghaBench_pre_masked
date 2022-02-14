
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {int * thread_proc; int ref; void* param; int init_finished_event; } ;
typedef int THREAD_PROC ;
typedef TYPE_1__ THREAD ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int) ;
 TYPE_1__* FUNC_6 (int) ;
 int FUNC_7 (char*) ;

THREAD *FUNC_8(THREAD_PROC *VAR_1, void *VAR_2)
{
 THREAD *VAR_3;
 UINT VAR_4 = 0;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_3 = FUNC_6(sizeof(THREAD));
 VAR_3->init_finished_event = FUNC_2();

 VAR_3->param = VAR_2;
 VAR_3->ref = FUNC_3();
 VAR_3->thread_proc = VAR_1;


 while (1)
 {
  if ((VAR_4++) > 60)
  {
   FUNC_7("\n\n*** error: new thread create failed.\n\n");
   FUNC_0();
  }
  if (FUNC_4(VAR_3))
  {
   break;
  }
  FUNC_5(500);
 }


 FUNC_1(VAR_0);

 return VAR_3;
}
