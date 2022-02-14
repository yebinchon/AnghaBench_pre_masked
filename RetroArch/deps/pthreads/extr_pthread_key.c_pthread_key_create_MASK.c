
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* pthread_key_t ;
typedef scalar_t__ pte_osResult ;
struct TYPE_4__ {void (* destructor ) (void*) ;int keyLock; int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;

int
FUNC_3 (pthread_key_t * VAR_4, void (*VAR_5) (void *))
{
   int VAR_6 = 0;
   pthread_key_t VAR_7;

   if ((VAR_7 = (pthread_key_t) FUNC_0 (1, sizeof (*VAR_7))) == ((void*)0))
      VAR_6 = VAR_1;
   else
   {
      pte_osResult VAR_8 = FUNC_2(&(VAR_7->key));

      if (VAR_8 != VAR_2)
      {
         VAR_6 = VAR_0;

         FUNC_1 (VAR_7);
         VAR_7 = ((void*)0);
      }
      else if (VAR_5 != ((void*)0))
      {







         VAR_7->keyLock = VAR_3;
         VAR_7->destructor = VAR_5;
      }

   }

   *VAR_4 = VAR_7;

   return (VAR_6);
}
