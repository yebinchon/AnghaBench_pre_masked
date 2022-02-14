
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int event_lost_overflow; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 unsigned long* VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_3 (int *) ;

void FUNC_4(unsigned long VAR_7)
{




 if (!VAR_5) {
  FUNC_0(1);
  return;
 }

 if (VAR_0 == VAR_2) {
  FUNC_1(&VAR_6.event_lost_overflow);
  return;
 }

 VAR_5[VAR_0] = VAR_7;
 if (++VAR_0 == VAR_2 - VAR_4) {
  FUNC_2(&VAR_1, 1);
  FUNC_3(&VAR_3);
 }
}
