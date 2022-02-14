
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int * pgd; } ;
typedef int pgd_t ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline pgd_t *FUNC_0(struct mm_struct * VAR_1, unsigned long VAR_2)
{ return VAR_1->pgd + (VAR_2 >> VAR_0); }
