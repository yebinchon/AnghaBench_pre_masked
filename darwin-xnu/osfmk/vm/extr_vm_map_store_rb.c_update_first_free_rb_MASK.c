
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_2__* vm_map_entry_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_11__ {int vme_start; } ;
struct TYPE_10__ {scalar_t__ max_offset; scalar_t__ holelistenabled; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

void
FUNC_4(vm_map_t VAR_1, vm_map_entry_t VAR_2, boolean_t VAR_3)
{

 if (VAR_1->holelistenabled) {




  vm_map_offset_t VAR_4 = (VAR_1->max_offset > VAR_0) ? VAR_1->max_offset : VAR_0;





  if (VAR_2 == ((void*)0)) {
   return;
  }





  if (FUNC_3(VAR_2->vme_start, FUNC_0(VAR_1)) >= VAR_4) {
   return;
  }
  if (VAR_3) {

   FUNC_1(VAR_1, VAR_2);
  } else {

   FUNC_2(VAR_1, VAR_2);
  }
 }
}
