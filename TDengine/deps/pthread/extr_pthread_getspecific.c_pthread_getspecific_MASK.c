
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_key_t ;
struct TYPE_3__ {int key; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

void *
FUNC_5 (pthread_key_t VAR_0)
{
  void * VAR_1;

  if (VAR_0 == ((void*)0))
    {
      VAR_1 = ((void*)0);
    }
  else
    {
      int VAR_2 = FUNC_0 ();



      VAR_1 = FUNC_2 (VAR_0->key);

      FUNC_1 (VAR_2);



    }

  return VAR_1;
}
