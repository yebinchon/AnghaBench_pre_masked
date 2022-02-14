
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mm_struct {int unmap_area; int get_unmapped_area; scalar_t__ mmap_base; } ;
struct TYPE_6__ {int flags; int personality; TYPE_2__* signal; } ;
struct TYPE_5__ {TYPE_1__* rlim; } ;
struct TYPE_4__ {unsigned long rlim_cur; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_3__* VAR_12 ;
 unsigned long FUNC_1 () ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct mm_struct *VAR_14)
{
 unsigned long VAR_15 = 0UL;

 if (VAR_12->flags & VAR_2) {
  VAR_15 = FUNC_1();
  if (FUNC_2(VAR_7))
   VAR_15 &= ((1 * 1024 * 1024) - 1);
  else
   VAR_15 = ((VAR_15 << VAR_1) &
      0xffffffffUL);
 }





 if (!FUNC_2(VAR_7) ||
     (VAR_12->personality & VAR_0) ||
     VAR_12->signal->rlim[VAR_3].rlim_cur == VAR_4 ||
     VAR_13) {
  VAR_14->mmap_base = VAR_6 + VAR_15;
  VAR_14->get_unmapped_area = VAR_8;
  VAR_14->unmap_area = VAR_10;
 } else {

  unsigned long VAR_16 = VAR_5;
  unsigned long VAR_17;

  VAR_17 = VAR_12->signal->rlim[VAR_3].rlim_cur;
  if (VAR_17 < 128 * 1024 * 1024)
   VAR_17 = 128 * 1024 * 1024;
  if (VAR_17 > (VAR_16 / 6 * 5))
   VAR_17 = (VAR_16 / 6 * 5);

  VAR_14->mmap_base = FUNC_0(VAR_16 - VAR_17 - VAR_15);
  VAR_14->get_unmapped_area = VAR_9;
  VAR_14->unmap_area = VAR_11;
 }
}
