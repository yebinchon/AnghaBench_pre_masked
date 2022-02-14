
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int running; void (* func ) (void*) ;int * thd; void* arg; int * cond; int mutex; } ;
typedef int LPTHREAD_START_ROUTINE ;


 int * FUNC_0 (int *,int ,int ,int *) ;
 int * FUNC_1 (int *,int ,int ,TYPE_1__*,int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;

int FUNC_6(unsigned int VAR_6, void (*VAR_7)(void *), void *VAR_8)
{
   if (!VAR_2)
   {
      VAR_1=FUNC_3();
      VAR_2 = 1;
   }

   if (VAR_4[VAR_6].running)
   {
      FUNC_4(VAR_3, "YabThreadStart: thread %u is already started!\n", VAR_6);
      return -1;
   }


   FUNC_2(&VAR_4[VAR_6].mutex);
   if ((VAR_4[VAR_6].cond = FUNC_0(((void*)0), VAR_0, VAR_0, ((void*)0))) == ((void*)0))
   {
      FUNC_5("CreateEvent");
      return -1;
   }

   VAR_4[VAR_6].func = VAR_7;
   VAR_4[VAR_6].arg = VAR_8;

   if ((VAR_4[VAR_6].thd = FUNC_1(((void*)0), 0, (LPTHREAD_START_ROUTINE)VAR_5, &VAR_4[VAR_6], 0, ((void*)0))) == ((void*)0))
   {
      FUNC_5("CreateThread");
      return -1;
   }

   VAR_4[VAR_6].running = 1;

   return 0;
}
