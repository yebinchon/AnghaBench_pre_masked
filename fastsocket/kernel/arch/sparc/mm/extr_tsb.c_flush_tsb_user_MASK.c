
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmu_gather {struct mm_struct* mm; } ;
struct TYPE_4__ {int lock; TYPE_1__* tsb_block; } ;
struct mm_struct {TYPE_2__ context; } ;
struct TYPE_3__ {unsigned long tsb_nentries; scalar_t__ tsb; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mmu_gather*,int ,unsigned long,unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ VAR_6 ;

void FUNC_4(struct mmu_gather *VAR_7)
{
 struct mm_struct *VAR_8 = VAR_7->mm;
 unsigned long VAR_9, VAR_10, VAR_11;

 FUNC_2(&VAR_8->context.lock, VAR_11);

 VAR_10 = (unsigned long) VAR_8->context.tsb_block[VAR_1].tsb;
 VAR_9 = VAR_8->context.tsb_block[VAR_1].tsb_nentries;
 if (VAR_6 == VAR_4 || VAR_6 == VAR_5)
  VAR_10 = FUNC_1(VAR_10);
 FUNC_0(VAR_7, VAR_3, VAR_10, VAR_9);
 FUNC_3(&VAR_8->context.lock, VAR_11);
}
