
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_1__* vm_map_entry_t ;
struct TYPE_6__ {scalar_t__ vme_start; struct TYPE_6__* vme_next; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,TYPE_1__**) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_7(
 vm_map_t VAR_0,
 vm_map_offset_t VAR_1,
 vm_map_offset_t VAR_2)
{
 vm_map_entry_t VAR_3;





 if (VAR_1 >= VAR_2) {

  return;
 }

 VAR_1 = FUNC_6(VAR_1,
      FUNC_0(VAR_0));
 VAR_2 = FUNC_3(VAR_2,
    FUNC_0(VAR_0));

 if (!FUNC_2(VAR_0, VAR_1, &VAR_3)) {

  if (VAR_3 == FUNC_5(VAR_0)) {

   VAR_3 = FUNC_1(VAR_0);
  } else {

   VAR_3 = VAR_3->vme_next;
  }
 }

 while (VAR_3 != FUNC_5(VAR_0) &&
        VAR_3->vme_start <= VAR_2) {

  FUNC_4(VAR_0, VAR_3);
  VAR_3 = VAR_3->vme_next;
 }
}
