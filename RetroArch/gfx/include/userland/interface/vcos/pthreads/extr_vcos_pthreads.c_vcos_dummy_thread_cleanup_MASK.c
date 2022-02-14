
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* at_exit; scalar_t__ dummy; } ;
typedef TYPE_2__ VCOS_THREAD_T ;
struct TYPE_5__ {int cxt; int (* pfn ) (int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
   VCOS_THREAD_T *VAR_1 = VAR_0;
   if (VAR_1->dummy)
   {
      int VAR_2;

      for (VAR_2=0; VAR_1->at_exit[VAR_2].pfn != ((void*)0); VAR_2++)
      {
         VAR_1->at_exit[VAR_2].pfn(VAR_1->at_exit[VAR_2].cxt);
      }
      FUNC_2(VAR_1);
      FUNC_1(VAR_1);
   }
}
