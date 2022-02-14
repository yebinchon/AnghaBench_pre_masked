
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct bfin_twi_iface {int result; scalar_t__ timeout_count; int lock; int complete; TYPE_1__ timeout_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct bfin_twi_iface*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_2)
{
 struct bfin_twi_iface *VAR_3 = (struct bfin_twi_iface *)VAR_2;
 unsigned long VAR_4;

 FUNC_3(&VAR_3->lock, VAR_4);
 FUNC_1(VAR_3);
 if (VAR_3->result == 0) {
  VAR_3->timeout_count--;
  if (VAR_3->timeout_count > 0) {
   VAR_3->timeout_timer.expires = VAR_1 + VAR_0;
   FUNC_0(&VAR_3->timeout_timer);
  } else {
   VAR_3->result = -1;
   FUNC_2(&VAR_3->complete);
  }
 }
 FUNC_4(&VAR_3->lock, VAR_4);
}
