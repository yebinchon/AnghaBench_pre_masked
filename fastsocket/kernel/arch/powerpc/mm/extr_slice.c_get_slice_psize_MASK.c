
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int low_slices_psize; int high_slices_psize; } ;
struct mm_struct {TYPE_1__ context; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 unsigned long VAR_0 ;

unsigned int FUNC_2(struct mm_struct *VAR_1, unsigned long VAR_2)
{
 u64 VAR_3;
 int VAR_4;

 if (VAR_2 < VAR_0) {
  VAR_3 = VAR_1->context.low_slices_psize;
  VAR_4 = FUNC_1(VAR_2);
 } else {
  VAR_3 = VAR_1->context.high_slices_psize;
  VAR_4 = FUNC_0(VAR_2);
 }

 return (VAR_3 >> (VAR_4 * 4)) & 0xf;
}
