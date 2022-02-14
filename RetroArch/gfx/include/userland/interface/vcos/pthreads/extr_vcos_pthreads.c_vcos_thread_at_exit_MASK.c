
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* at_exit; } ;
typedef TYPE_2__ VCOS_THREAD_T ;
typedef int VCOS_STATUS_T ;
struct TYPE_4__ {void (* pfn ) (void*) ;void* cxt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 () ;

extern VCOS_STATUS_T FUNC_2(void (*VAR_4)(void*), void *VAR_5)
{
   int VAR_6;
   VCOS_THREAD_T *VAR_7 = FUNC_1();
   if (!VAR_7)
   {
      FUNC_0(0);
      return VAR_0;
   }
   for (VAR_6=0; VAR_6<VAR_2; VAR_6++)
   {
      if (VAR_7->at_exit[VAR_6].pfn == ((void*)0))
      {
         VAR_7->at_exit[VAR_6].pfn = VAR_4;
         VAR_7->at_exit[VAR_6].cxt = VAR_5;
         return VAR_3;
      }
   }
   return VAR_1;
}
