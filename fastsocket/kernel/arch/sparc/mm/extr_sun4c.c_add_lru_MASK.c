
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4c_mmu_entry {struct sun4c_mmu_entry* lru_prev; struct sun4c_mmu_entry* lru_next; } ;
struct sun4c_mmu_ring {struct sun4c_mmu_entry ringhd; } ;


 struct sun4c_mmu_ring VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct sun4c_mmu_entry *VAR_1)
{
 struct sun4c_mmu_ring *VAR_2 = &VAR_0;
 struct sun4c_mmu_entry *VAR_3 = &VAR_2->ringhd;

 VAR_1->lru_next = VAR_3;
 (VAR_1->lru_prev = VAR_3->lru_prev)->lru_next = VAR_1;
 VAR_3->lru_prev = VAR_1;
}
