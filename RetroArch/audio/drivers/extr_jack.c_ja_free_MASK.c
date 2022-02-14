
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int shutdown; scalar_t__ cond; scalar_t__ cond_lock; int ** buffer; int * client; } ;
typedef TYPE_1__ jack_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
   int VAR_1;
   jack_t *VAR_2 = (jack_t*)VAR_0;

   VAR_2->shutdown = 1;

   if (VAR_2->client != ((void*)0))
   {
      FUNC_2(VAR_2->client);
      FUNC_1(VAR_2->client);
   }

   for (VAR_1 = 0; VAR_1 < 2; VAR_1++)
      if (VAR_2->buffer[VAR_1] != ((void*)0))
         FUNC_3(VAR_2->buffer[VAR_1]);







   FUNC_0(VAR_2);
}
