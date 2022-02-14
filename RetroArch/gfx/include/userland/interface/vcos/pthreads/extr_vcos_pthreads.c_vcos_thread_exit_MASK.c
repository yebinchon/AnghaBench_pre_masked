
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dummy; } ;
typedef TYPE_1__ VCOS_THREAD_T ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 TYPE_1__* FUNC_2 () ;

void FUNC_3(void *VAR_0)
{
   VCOS_THREAD_T *VAR_1 = FUNC_2();

   if ( VAR_1 && VAR_1->dummy )
   {
      FUNC_1 ( (void*) VAR_1 );
      VAR_1 = ((void*)0);
   }

   FUNC_0(VAR_0);
}
