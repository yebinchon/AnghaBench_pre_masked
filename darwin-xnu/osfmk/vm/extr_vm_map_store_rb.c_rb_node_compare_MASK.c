
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_map_entry_t ;
struct vm_map_store {int dummy; } ;
struct TYPE_3__ {scalar_t__ vme_start; scalar_t__ vme_end; } ;


 TYPE_1__* FUNC_0 (struct vm_map_store*) ;

int FUNC_1(struct vm_map_store *VAR_0, struct vm_map_store *VAR_1)
{
 vm_map_entry_t VAR_2;
 vm_map_entry_t VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_2->vme_start < VAR_3->vme_start)
  return -1;
 if (VAR_2->vme_start >= VAR_3->vme_end)
  return 1;
 return 0;
}
