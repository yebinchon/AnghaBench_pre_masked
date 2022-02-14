
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sun4c_mmu_entry {int vaddr; } ;
struct TYPE_6__ {struct sun4c_mmu_entry* prev; } ;
struct TYPE_9__ {TYPE_1__ ringhd; } ;
struct TYPE_7__ {struct sun4c_mmu_entry* next; } ;
struct TYPE_8__ {TYPE_2__ ringhd; scalar_t__ num_entries; } ;


 int FUNC_0 (struct sun4c_mmu_entry*,TYPE_4__*) ;
 int FUNC_1 (int ) ;
 TYPE_4__ VAR_0 ;
 int FUNC_2 (struct sun4c_mmu_entry*) ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static struct sun4c_mmu_entry *FUNC_3(void)
{
 struct sun4c_mmu_entry *VAR_2;


 if (VAR_1.num_entries) {
  VAR_2 = VAR_1.ringhd.next;
  return VAR_2;
 }


 VAR_2 = VAR_0.ringhd.prev;
 FUNC_1(VAR_2->vaddr);
 FUNC_2(VAR_2);
 FUNC_0(VAR_2, &VAR_0);
 VAR_2 = VAR_1.ringhd.next;

 return VAR_2;
}
