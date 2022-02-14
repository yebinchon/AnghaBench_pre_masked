
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {float alpha; float label_alpha; float zoom; int x; void* y; } ;
typedef TYPE_1__ stripes_node_t ;
struct TYPE_8__ {float items_passive_alpha; float items_passive_zoom; float items_active_alpha; int depth; int icon_size; int * selection_buf_old; scalar_t__ selection_ptr_old; } ;
typedef TYPE_2__ stripes_handle_t ;
typedef int file_list_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 size_t FUNC_4 () ;
 void* FUNC_5 (TYPE_2__*,unsigned int,unsigned int) ;
 int FUNC_6 (TYPE_2__*,unsigned int,unsigned int) ;
 int FUNC_7 (TYPE_2__*,unsigned int) ;
 int FUNC_8 (unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_9(stripes_handle_t *VAR_0)
{
   unsigned VAR_1, VAR_2, VAR_3, VAR_4, VAR_5;
   file_list_t *VAR_6 = FUNC_2(0);
   size_t VAR_7 = FUNC_4();

   FUNC_8(&VAR_1, &VAR_2);


   if (VAR_1 > 320 && VAR_2 > 240)
      FUNC_6(VAR_0, VAR_1, VAR_2);
   else
      FUNC_7(VAR_0, VAR_1);

   VAR_4 = (unsigned)VAR_7;
   VAR_5 = (unsigned)FUNC_3();

   for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++)
   {
      float VAR_8 = VAR_0->items_passive_alpha;
      float VAR_9 = VAR_0->items_passive_zoom;
      stripes_node_t *VAR_10 = (stripes_node_t*)FUNC_1(
            VAR_6, VAR_3);

      if (!VAR_10)
         continue;

      if (VAR_3 == VAR_4)
      {
         VAR_8 = VAR_0->items_active_alpha;
         VAR_9 = VAR_0->items_active_alpha;
      }

      VAR_10->alpha = VAR_8;
      VAR_10->label_alpha = VAR_8;
      VAR_10->zoom = VAR_9;
      VAR_10->y = FUNC_5(VAR_0, VAR_3, VAR_4);
   }

   if (VAR_0->depth <= 1)
      return;

   VAR_4 = (unsigned)VAR_0->selection_ptr_old;
   VAR_5 = (unsigned)FUNC_0(VAR_0->selection_buf_old);

   for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++)
   {
      float VAR_11 = 0;
      float VAR_12 = VAR_0->items_passive_zoom;
      stripes_node_t *VAR_13 = (stripes_node_t*)FUNC_1(
            VAR_0->selection_buf_old, VAR_3);

      if (!VAR_13)
         continue;

      if (VAR_3 == VAR_4)
      {
         VAR_11 = VAR_0->items_active_alpha;
         VAR_12 = VAR_0->items_active_alpha;
      }

      VAR_13->alpha = VAR_11;
      VAR_13->label_alpha = 0;
      VAR_13->zoom = VAR_12;
      VAR_13->y = FUNC_5(VAR_0, VAR_3, VAR_4);
      VAR_13->x = VAR_0->icon_size * 1 * -2;
   }
}
