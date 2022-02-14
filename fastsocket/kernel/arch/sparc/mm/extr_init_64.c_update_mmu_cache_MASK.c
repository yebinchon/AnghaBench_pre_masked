
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct tsb {int dummy; } ;
struct TYPE_4__ {int lock; TYPE_1__* tsb_block; } ;
struct mm_struct {TYPE_2__ context; } ;
typedef int pte_t ;
struct TYPE_3__ {unsigned long tsb_nentries; struct tsb* tsb; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 size_t VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (struct tsb*,unsigned long,int) ;

void FUNC_7(struct vm_area_struct *VAR_10, unsigned long VAR_11, pte_t VAR_12)
{
 struct mm_struct *VAR_13;
 struct tsb *VAR_14;
 unsigned long VAR_15, VAR_16;
 unsigned long VAR_17, VAR_18;

 if (VAR_9 != VAR_8) {
  unsigned long VAR_19 = FUNC_2(VAR_12);

  if (FUNC_1(VAR_19))
   FUNC_0(VAR_19);
 }

 VAR_13 = VAR_10->vm_mm;

 VAR_17 = VAR_1;
 VAR_18 = VAR_3;

 FUNC_4(&VAR_13->context.lock, VAR_16);
 VAR_14 = VAR_13->context.tsb_block[VAR_17].tsb;
 VAR_14 += ((VAR_11 >> VAR_18) &
  (VAR_13->context.tsb_block[VAR_17].tsb_nentries - 1UL));
 VAR_15 = (VAR_11 >> 22UL);
 FUNC_6(VAR_14, VAR_15, FUNC_3(VAR_12));

 FUNC_5(&VAR_13->context.lock, VAR_16);
}
