
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef TYPE_2__* vm_map_entry_t ;
typedef TYPE_3__* memory_object_t ;
typedef int * memory_object_pager_ops_t ;
struct TYPE_13__ {int * mo_pager_ops; } ;
struct TYPE_12__ {int is_sub_map; } ;
struct TYPE_11__ {TYPE_3__* pager; scalar_t__ alive; int terminating; scalar_t__ pager_ready; int internal; struct TYPE_11__* shadow; } ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;

vm_object_t
FUNC_3(
 vm_map_entry_t VAR_2
)
{
 vm_object_t VAR_3, VAR_4;
 memory_object_t VAR_5;
 memory_object_pager_ops_t VAR_6;

 if (!VAR_2->is_sub_map) {






  VAR_3 = FUNC_0(VAR_2);

  if (VAR_3) {
   FUNC_1(VAR_3);

   for (VAR_4 = VAR_3; VAR_4->shadow != VAR_0; VAR_4 = VAR_4->shadow) {
    FUNC_1(VAR_4->shadow);
    FUNC_2(VAR_4);
   }

   if (VAR_4 && !VAR_4->internal && VAR_4->pager_ready && !VAR_4->terminating &&
       VAR_4->alive) {
    VAR_5 = VAR_4->pager;
    VAR_6 = VAR_5->mo_pager_ops;







    if (VAR_6 == &VAR_1)
     return VAR_4;
   }

   FUNC_2(VAR_4);
  }

 }

 return(VAR_0);
}
