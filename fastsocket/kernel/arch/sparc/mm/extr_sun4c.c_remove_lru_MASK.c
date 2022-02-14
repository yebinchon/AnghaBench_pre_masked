
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4c_mmu_entry {TYPE_1__* lru_prev; struct sun4c_mmu_entry* lru_next; } ;
struct TYPE_2__ {struct sun4c_mmu_entry* lru_next; } ;



__attribute__((used)) static void FUNC_0(struct sun4c_mmu_entry *VAR_0)
{
 struct sun4c_mmu_entry *VAR_1 = VAR_0->lru_next;

 (VAR_1->lru_prev = VAR_0->lru_prev)->lru_next = VAR_1;
}
