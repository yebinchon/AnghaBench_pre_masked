
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int threadCopy ;
typedef scalar_t__ pthread_t ;
struct TYPE_4__ {scalar_t__ threadId; int threadLock; int cancelLock; } ;
typedef TYPE_1__ pte_thread_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5 (pthread_t VAR_0, unsigned char VAR_1)
{
   pte_thread_t VAR_2;
   pte_thread_t * VAR_3 = (pte_thread_t *) VAR_0;

   if (!VAR_3)
      return;




   FUNC_0 (&VAR_2, VAR_3, sizeof (VAR_2));





   FUNC_3 (VAR_0);

   (void) FUNC_4(&VAR_2.cancelLock);
   (void) FUNC_4(&VAR_2.threadLock);

   if (VAR_2.threadId != 0)
   {
      if (VAR_1)
         FUNC_2(VAR_2.threadId);
      else
         FUNC_1(VAR_2.threadId);
   }
}
