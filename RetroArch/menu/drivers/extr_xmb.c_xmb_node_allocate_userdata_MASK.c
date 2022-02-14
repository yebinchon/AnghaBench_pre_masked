
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zoom; int alpha; } ;
typedef TYPE_1__ xmb_node_t ;
struct TYPE_9__ {unsigned int system_tab_end; unsigned int categories_active_idx; int horizontal_list; int categories_active_zoom; int categories_active_alpha; int categories_passive_zoom; int categories_passive_alpha; } ;
typedef TYPE_2__ xmb_handle_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int,TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static xmb_node_t *FUNC_5(
      xmb_handle_t *VAR_0, unsigned VAR_1)
{
   xmb_node_t *VAR_2 = ((void*)0);
   xmb_node_t *VAR_3 = FUNC_3();

   if (!VAR_3)
   {
      FUNC_0("XMB node could not be allocated.\n");
      return ((void*)0);
   }

   VAR_3->alpha = VAR_0->categories_passive_alpha;
   VAR_3->zoom = VAR_0->categories_passive_zoom;

   if ((VAR_1 + VAR_0->system_tab_end) == VAR_0->categories_active_idx)
   {
      VAR_3->alpha = VAR_0->categories_active_alpha;
      VAR_3->zoom = VAR_0->categories_active_zoom;
   }

   VAR_2 = (xmb_node_t*)FUNC_1(
         VAR_0->horizontal_list, VAR_1);
   FUNC_4(VAR_2);

   FUNC_2(VAR_0->horizontal_list, VAR_1, VAR_3);

   return VAR_3;
}
