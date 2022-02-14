
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4c_mmu_ring {int num_entries; } ;
struct sun4c_mmu_entry {TYPE_1__* prev; struct sun4c_mmu_entry* next; } ;
struct TYPE_2__ {struct sun4c_mmu_entry* next; } ;



__attribute__((used)) static inline void FUNC_0(struct sun4c_mmu_ring *VAR_0,
       struct sun4c_mmu_entry *VAR_1)
{
 struct sun4c_mmu_entry *VAR_2 = VAR_1->next;

 (VAR_2->prev = VAR_1->prev)->next = VAR_2;
 VAR_0->num_entries--;
}
