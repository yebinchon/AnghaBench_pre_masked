
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int secondary; int primary; } ;
struct TYPE_8__ {TYPE_1__ thumbnails; } ;
typedef TYPE_2__ materialui_node_t ;
struct TYPE_9__ {size_t size; } ;
typedef TYPE_3__ file_list_t ;


 int FUNC_0 (TYPE_3__*,size_t) ;
 scalar_t__ FUNC_1 (TYPE_3__*,size_t) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(file_list_t *VAR_0)
{
   size_t VAR_1;
   size_t VAR_2 = VAR_0 ? VAR_0->size : 0;



   FUNC_2();

   for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++)
   {
      materialui_node_t *VAR_3 = (materialui_node_t*)
            FUNC_1(VAR_0, VAR_1);

      if (!VAR_3)
         continue;

      FUNC_3(&VAR_3->thumbnails.primary);
      FUNC_3(&VAR_3->thumbnails.secondary);
      FUNC_0(VAR_0, VAR_1);
   }
}
