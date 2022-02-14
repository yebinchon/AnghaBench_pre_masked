
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_memory_slot {unsigned long base_gfn; TYPE_1__** lpage_info; } ;
typedef unsigned long gfn_t ;
struct TYPE_2__ {int write_count; } ;


 unsigned long FUNC_0 (int) ;

__attribute__((used)) static int *FUNC_1(gfn_t VAR_0,
          struct kvm_memory_slot *VAR_1,
          int VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = (VAR_0 / FUNC_0(VAR_2)) -
       (VAR_1->base_gfn / FUNC_0(VAR_2));
 return &VAR_1->lpage_info[VAR_2 - 2][VAR_3].write_count;
}
