
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ pthread_t ;
struct TYPE_5__ {void* exitStatus; int start_mark; int state; } ;
typedef TYPE_1__ pte_thread_t ;
struct TYPE_6__ {void* (* start ) (void*) ;void* arg; scalar_t__ tid; } ;
typedef TYPE_2__ ThreadParms ;




 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (void*) ;

int FUNC_5 (void *VAR_3)
{
   ThreadParms * VAR_4 = (ThreadParms *) VAR_3;
   void *(*VAR_5) (void *);
   void * VAR_6;


   int VAR_7;

   void * VAR_8 = (void *) 0;

   pthread_t VAR_9 = VAR_4->tid;
   pte_thread_t *VAR_10 = (pte_thread_t *) VAR_9;
   VAR_5 = VAR_4->start;
   VAR_6 = VAR_4->arg;





   FUNC_2 (VAR_2, VAR_10);

   VAR_10->state = VAR_1;

   VAR_7 = FUNC_3 (VAR_10->start_mark);





   if (0 == VAR_7)
      VAR_10->exitStatus = VAR_8 = (*VAR_5) (VAR_6);
   else
   {
      switch (VAR_7)
      {
         case 129:
            VAR_8 = VAR_10->exitStatus = VAR_0;
            break;
         case 128:
            VAR_8 = VAR_10->exitStatus;
            break;
         default:
            VAR_8 = VAR_10->exitStatus = VAR_0;
            break;
      }
   }
   (void) FUNC_1 ();







   return (unsigned) VAR_8;
}
