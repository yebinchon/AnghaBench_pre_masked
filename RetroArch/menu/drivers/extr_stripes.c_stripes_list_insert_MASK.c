
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zoom; int label_alpha; int alpha; scalar_t__ x; int y; scalar_t__ fullpath; } ;
typedef TYPE_1__ stripes_node_t ;
struct TYPE_7__ {int items_active_alpha; int items_passive_zoom; int items_passive_alpha; } ;
typedef TYPE_2__ stripes_handle_t ;
typedef int file_list_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 size_t FUNC_4 () ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;
 TYPE_1__* FUNC_7 () ;
 int FUNC_8 (TYPE_2__*,int,int) ;

__attribute__((used)) static void FUNC_9(void *VAR_0,
      file_list_t *VAR_1,
      const char *VAR_2,
      const char *VAR_3,
      const char *VAR_4,
      size_t VAR_5,
      unsigned VAR_6)
{
   int VAR_7 = 0;
   int VAR_8 = (int)VAR_5;
   stripes_node_t *VAR_9 = ((void*)0);
   stripes_handle_t *VAR_10 = (stripes_handle_t*)VAR_0;
   size_t VAR_11 = FUNC_4();

   if (!VAR_10 || !VAR_1)
      return;

   VAR_9 = (stripes_node_t*)FUNC_1(VAR_1, VAR_8);

   if (!VAR_9)
      VAR_9 = FUNC_7();

   if (!VAR_9)
   {
      FUNC_0("XMB node could not be allocated.\n");
      return;
   }

   VAR_7 = (int)VAR_11;

   if (!FUNC_6(VAR_3))
   {
      if (VAR_9->fullpath)
         FUNC_3(VAR_9->fullpath);

      VAR_9->fullpath = FUNC_5(VAR_3);
   }

   VAR_9->alpha = VAR_10->items_passive_alpha;
   VAR_9->zoom = VAR_10->items_passive_zoom;
   VAR_9->label_alpha = VAR_9->alpha;
   VAR_9->y = FUNC_8(VAR_10, VAR_8, VAR_7);
   VAR_9->x = 0;

   if (VAR_8 == VAR_7)
   {
      VAR_9->alpha = VAR_10->items_active_alpha;
      VAR_9->label_alpha = VAR_10->items_active_alpha;
      VAR_9->zoom = VAR_10->items_active_alpha;
   }

   FUNC_2(VAR_1, VAR_8, VAR_9);
}
