
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ alpha; int zoom; } ;
typedef TYPE_1__ xmb_node_t ;
struct TYPE_8__ {size_t system_tab_end; unsigned int categories_active_idx; int depth; scalar_t__ categories_passive_alpha; int categories_active_zoom; scalar_t__ categories_active_alpha; int categories_passive_zoom; } ;
typedef TYPE_2__ xmb_handle_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,unsigned int) ;
 size_t FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2(xmb_handle_t *VAR_1)
{
   unsigned VAR_2;
   size_t VAR_3 = FUNC_1(VAR_1, VAR_0)
      + VAR_1->system_tab_end;

   for (VAR_2 = 0; VAR_2 <= VAR_3; VAR_2++)
   {
      xmb_node_t *VAR_4 = FUNC_0(VAR_1, VAR_2);

      if (!VAR_4)
         continue;

      VAR_4->alpha = 0;
      VAR_4->zoom = VAR_1->categories_passive_zoom;

      if (VAR_2 == VAR_1->categories_active_idx)
      {
         VAR_4->alpha = VAR_1->categories_active_alpha;
         VAR_4->zoom = VAR_1->categories_active_zoom;
      }
      else if (VAR_1->depth <= 1)
         VAR_4->alpha = VAR_1->categories_passive_alpha;
   }
}
