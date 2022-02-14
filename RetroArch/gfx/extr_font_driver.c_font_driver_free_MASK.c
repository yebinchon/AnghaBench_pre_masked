
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * renderer_data; TYPE_1__* renderer; } ;
typedef TYPE_2__ font_data_t ;
struct TYPE_4__ {int (* free ) (int *,int) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int) ;
 int* FUNC_2 () ;

void FUNC_3(void *VAR_0)
{
   font_data_t *VAR_1 = (font_data_t*)VAR_0;

   if (VAR_1)
   {
      bool VAR_2 = 0;





      if (VAR_1->renderer && VAR_1->renderer->free)
         VAR_1->renderer->free(VAR_1->renderer_data, VAR_2);

      VAR_1->renderer = ((void*)0);
      VAR_1->renderer_data = ((void*)0);

      FUNC_0(VAR_1);
   }
}
