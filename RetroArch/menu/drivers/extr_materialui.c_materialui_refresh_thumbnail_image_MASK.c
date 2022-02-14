
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {float delay_timer; } ;
struct TYPE_6__ {TYPE_4__ secondary; TYPE_4__ primary; } ;
struct TYPE_7__ {TYPE_1__ thumbnails; } ;
typedef TYPE_2__ materialui_node_t ;
struct TYPE_8__ {scalar_t__ list_view_type; } ;
typedef TYPE_3__ materialui_handle_t ;
typedef int file_list_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,size_t) ;
 scalar_t__ FUNC_1 (TYPE_3__*,size_t) ;
 int * FUNC_2 (int ) ;
 float FUNC_3 () ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_5(void *VAR_2, unsigned VAR_3)
{
   materialui_handle_t *VAR_4 = (materialui_handle_t*)VAR_2;

   if (!VAR_4)
      return;



   if ((VAR_4->list_view_type == VAR_0) ||
       (VAR_4->list_view_type == VAR_1))
      return;



   if (FUNC_1(VAR_4, (size_t)VAR_3))
   {
      file_list_t *VAR_5 = FUNC_2(0);
      materialui_node_t *VAR_6 = ((void*)0);
      float VAR_7 = FUNC_3();

      if (!VAR_5)
         return;

      VAR_6 = (materialui_node_t*)FUNC_0(VAR_5, (size_t)VAR_3);

      if (!VAR_6)
         return;


      FUNC_4(&VAR_6->thumbnails.primary);
      FUNC_4(&VAR_6->thumbnails.secondary);





      VAR_6->thumbnails.primary.delay_timer = VAR_7;
      VAR_6->thumbnails.secondary.delay_timer = VAR_7;
   }
}
