
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sun4c_mmu_entry {int dummy; } ;
struct TYPE_4__ {struct sun4c_mmu_entry* next; } ;
struct TYPE_5__ {TYPE_1__ ringhd; scalar_t__ num_entries; } ;


 int FUNC_0 (int *,struct sun4c_mmu_entry*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*,struct sun4c_mmu_entry*) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_2(void)
{
 struct sun4c_mmu_entry *VAR_4;


 if (VAR_3 >= VAR_0)
  return;

 if (VAR_2.num_entries) {
  VAR_4 = VAR_2.ringhd.next;
         FUNC_1(&VAR_2, VAR_4);
  FUNC_0(&VAR_1, VAR_4);
  VAR_3++;
 }
}
