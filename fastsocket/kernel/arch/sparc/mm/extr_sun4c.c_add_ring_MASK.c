
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4c_mmu_entry {struct sun4c_mmu_entry* next; struct sun4c_mmu_entry* prev; } ;
struct sun4c_mmu_ring {int num_entries; struct sun4c_mmu_entry ringhd; } ;



__attribute__((used)) static void FUNC_0(struct sun4c_mmu_ring *VAR_0,
       struct sun4c_mmu_entry *VAR_1)
{
 struct sun4c_mmu_entry *VAR_2 = &VAR_0->ringhd;

 VAR_1->prev = VAR_2;
 (VAR_1->next = VAR_2->next)->prev = VAR_1;
 VAR_2->next = VAR_1;
 VAR_0->num_entries++;
}
