
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_map_t ;
typedef int vm_map_offset_t ;
typedef TYPE_1__* vm_map_entry_t ;
struct TYPE_4__ {struct TYPE_4__* vme_next; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_1__**) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ) ;

void
FUNC_5(
 vm_map_t VAR_1,
 vm_map_offset_t VAR_2)
{
 vm_map_entry_t VAR_3;

 FUNC_1(VAR_1);
 if (FUNC_2(VAR_1, VAR_2, &VAR_3)) {
  FUNC_3(VAR_1, VAR_3);
  FUNC_3(VAR_1, VAR_3->vme_next);
 }
 FUNC_0(VAR_0++);
 FUNC_4(VAR_1);
}
