
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ pthread_t ;
struct TYPE_2__ {scalar_t__ state; scalar_t__ cancelState; int cancelLock; } ;
typedef TYPE_1__ pte_thread_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;

void FUNC_4 (void)
{
   pthread_t VAR_4 = FUNC_3 ();
   pte_thread_t * VAR_5 = (pte_thread_t *) VAR_4;

   if (VAR_5 == ((void*)0))
      return;






   if (VAR_5->state != VAR_2)
      return;

   (void) FUNC_1 (&VAR_5->cancelLock);

   if (VAR_5->cancelState != VAR_1)
   {
      VAR_5->state = VAR_3;
      VAR_5->cancelState = VAR_1;

      (void) FUNC_2 (&VAR_5->cancelLock);
      FUNC_0 (VAR_0);
   }

   (void) FUNC_2 (&VAR_5->cancelLock);
}
