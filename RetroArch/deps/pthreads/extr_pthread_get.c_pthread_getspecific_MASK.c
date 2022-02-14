
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_key_t ;
struct TYPE_3__ {int key; } ;


 void* FUNC_0 (int ) ;

void *FUNC_1 (pthread_key_t VAR_0)
{
   if (VAR_0 == ((void*)0))
      return ((void*)0);

   return FUNC_0 (VAR_0->key);
}
