
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int low_slices_psize; int high_slices_psize; } ;
struct mm_struct {TYPE_1__ context; } ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct mm_struct*) ;

void FUNC_5(struct mm_struct *VAR_2, unsigned long VAR_3,
       unsigned int VAR_4)
{
 unsigned long VAR_5, VAR_6;
 u64 *VAR_7;

 FUNC_2(&VAR_1, VAR_6);
 if (VAR_3 < VAR_0) {
  VAR_5 = FUNC_1(VAR_3);
  VAR_7 = &VAR_2->context.low_slices_psize;
 } else {
  VAR_5 = FUNC_0(VAR_3);
  VAR_7 = &VAR_2->context.high_slices_psize;
 }
 *VAR_7 = (*VAR_7 & ~(0xful << (VAR_5 * 4))) | ((unsigned long) VAR_4 << (VAR_5 * 4));
 FUNC_3(&VAR_1, VAR_6);




}
