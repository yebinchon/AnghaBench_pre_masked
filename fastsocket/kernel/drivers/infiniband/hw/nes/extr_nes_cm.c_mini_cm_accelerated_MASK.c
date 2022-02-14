
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nes_cm_node {int accelerated; TYPE_1__* listener; scalar_t__ accept_pend; } ;
struct TYPE_5__ {scalar_t__ expires; } ;
struct nes_cm_core {TYPE_2__ tcp_timer; } ;
struct TYPE_4__ {int pend_accepts_cnt; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static inline int FUNC_5(struct nes_cm_core *VAR_2,
          struct nes_cm_node *VAR_3)
{
 u32 VAR_4;

 VAR_3->accelerated = 1;

 if (VAR_3->accept_pend) {
  FUNC_0(!VAR_3->listener);
  FUNC_2(&VAR_3->listener->pend_accepts_cnt);
  VAR_3->accept_pend = 0;
  FUNC_0(FUNC_3(&VAR_3->listener->pend_accepts_cnt) < 0);
 }

 VAR_4 = FUNC_4(&VAR_2->tcp_timer);
 if (!VAR_4) {
  VAR_2->tcp_timer.expires = VAR_1 + VAR_0;
  FUNC_1(&VAR_2->tcp_timer);
 }

 return 0;
}
