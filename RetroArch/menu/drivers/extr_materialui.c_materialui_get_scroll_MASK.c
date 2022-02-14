
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float entry_height; } ;
typedef TYPE_1__ materialui_node_t ;
struct TYPE_5__ {unsigned int nav_bar_layout_height; } ;
typedef TYPE_2__ materialui_handle_t ;
typedef int file_list_t ;


 scalar_t__ FUNC_0 (int *,size_t) ;
 unsigned int FUNC_1 () ;
 int * FUNC_2 (int ) ;
 size_t FUNC_3 () ;
 int FUNC_4 (unsigned int*,unsigned int*) ;

__attribute__((used)) static float FUNC_5(materialui_handle_t *VAR_0)
{
   file_list_t *VAR_1 = FUNC_2(0);
   materialui_node_t *VAR_2 = ((void*)0);
   size_t VAR_3 = FUNC_3();
   unsigned VAR_4 = FUNC_1();
   unsigned VAR_5 = 0;
   unsigned VAR_6 = 0;
   float VAR_7 = 0.0f;
   float VAR_8 = 0.0f;
   size_t VAR_9;

   if (!VAR_0 || !VAR_1)
      return 0;


   FUNC_4(&VAR_5, &VAR_6);




   VAR_7 =
         (float)(VAR_6 - VAR_4 - VAR_0->nav_bar_layout_height) / 2.0f;





   for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
   {
      VAR_2 = (materialui_node_t*)FUNC_0(VAR_1, VAR_9);



      if (!VAR_2)
         continue;

      VAR_8 += VAR_2->entry_height;
   }


   VAR_2 = (materialui_node_t*)FUNC_0(VAR_1, VAR_3);
   if (VAR_2)
      VAR_8 += VAR_2->entry_height / 2.0f;





   if (VAR_8 < VAR_7)
      return 0.0f;




   return VAR_8 - VAR_7;
}
