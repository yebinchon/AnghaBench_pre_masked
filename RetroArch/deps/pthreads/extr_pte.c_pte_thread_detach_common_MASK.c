
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ detachState; int cancelLock; int state; } ;
typedef TYPE_1__ pte_thread_t ;
struct TYPE_8__ {int key; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8 (unsigned char VAR_4)
{
   if (VAR_2)
   {




      pte_thread_t * VAR_5 = (pte_thread_t *) FUNC_5 (VAR_3);

      if (VAR_5)
      {
         FUNC_0 (VAR_5);

         (void) FUNC_6 (&VAR_5->cancelLock);
         VAR_5->state = VAR_1;





         (void) FUNC_7 (&VAR_5->cancelLock);

         if (VAR_5->detachState == VAR_0)
         {
            if (VAR_4)
               FUNC_4 (VAR_5);
            else
               FUNC_3 (VAR_5);




         }
         else
         {
            if (VAR_4)
               FUNC_1();
         }
      }
   }

   return 1;
}
