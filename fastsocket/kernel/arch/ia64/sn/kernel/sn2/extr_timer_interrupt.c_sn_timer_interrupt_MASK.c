
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hb_count; int* pio_shub_war_cam_addr; scalar_t__ sn_lb_int_war_ticks; int hb_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;

void FUNC_4(int VAR_4, void *VAR_5)
{

 if (!VAR_3->hb_count--) {
  VAR_3->hb_count = VAR_0 / 2;
  FUNC_2(VAR_3->hb_state ^=
        VAR_1, VAR_1);
 }

 if (FUNC_1()) {
  if (FUNC_0()) {

   if (VAR_3->pio_shub_war_cam_addr)
    *VAR_3->pio_shub_war_cam_addr = 0x8000000000000010UL;
  }
  if (VAR_3->sn_lb_int_war_ticks == 0)
   FUNC_3();
  VAR_3->sn_lb_int_war_ticks++;
  if (VAR_3->sn_lb_int_war_ticks >= VAR_2)
   VAR_3->sn_lb_int_war_ticks = 0;
 }
}
