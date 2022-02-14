
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct bitmap {TYPE_1__ counts; scalar_t__ allclean; } ;
typedef int sector_t ;
typedef int bitmap_counter_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int* FUNC_2 (TYPE_1__*,int,int*,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct bitmap *VAR_2, sector_t VAR_3, sector_t *VAR_4, int VAR_5)
{
 bitmap_counter_t *VAR_6;
 unsigned long VAR_7;

 if (VAR_2 == ((void*)0)) {
  *VAR_4 = 1024;
  return;
 }
 FUNC_4(&VAR_2->counts.lock, VAR_7);
 VAR_6 = FUNC_2(&VAR_2->counts, VAR_3, VAR_4, 0);
 if (VAR_6 == ((void*)0))
  goto unlock;

 if (FUNC_1(*VAR_6)) {
  *VAR_6 &= ~VAR_1;

  if (!FUNC_0(*VAR_6) && VAR_5)
   *VAR_6 |= VAR_0;
  else {
   if (*VAR_6 <= 2) {
    FUNC_3(&VAR_2->counts, VAR_3);
    VAR_2->allclean = 0;
   }
  }
 }
 unlock:
 FUNC_5(&VAR_2->counts.lock, VAR_7);
}
