
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef size_t uint16_t ;
struct TYPE_2__ {size_t index; size_t mode; scalar_t__ runtime; scalar_t__ timer_start; } ;
struct tcpcb {scalar_t__* t_timer; TYPE_1__ tentry; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void
FUNC_2(struct tcpcb *VAR_2)
{
 uint16_t VAR_3, VAR_4 = VAR_0, VAR_5 = 0;
 uint32_t VAR_6 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  if (VAR_2->t_timer[VAR_3] != 0) {
   FUNC_0(VAR_5, VAR_3);
   if (VAR_6 == 0 || VAR_2->t_timer[VAR_3] < VAR_6) {
    VAR_6 = VAR_2->t_timer[VAR_3];
    VAR_4 = VAR_3;
   }
  }
 }
 VAR_2->tentry.index = VAR_4;
 VAR_2->tentry.mode = VAR_5;
 FUNC_1(VAR_2->tentry.index == VAR_0 || VAR_2->tentry.mode > 0);

 if (VAR_2->tentry.index != VAR_0) {
  VAR_2->tentry.runtime = VAR_2->tentry.timer_start
      + VAR_2->t_timer[VAR_2->tentry.index];
  if (VAR_2->tentry.runtime == 0)
   VAR_2->tentry.runtime++;
 }
}
