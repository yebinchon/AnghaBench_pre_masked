
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int valid_bitmask; int interface_availability; int lqm_state; int rrc_state; } ;
struct ifnet {TYPE_1__ if_interface_state; } ;
struct if_interface_state {int valid_bitmask; int interface_availability; int lqm_state; int rrc_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*) ;

void
FUNC_2(struct ifnet *VAR_3,
    struct if_interface_state *VAR_4)
{
 FUNC_1(VAR_3);

 VAR_4->valid_bitmask = 0;

 if (VAR_3->if_interface_state.valid_bitmask &
     VAR_2) {
  VAR_4->valid_bitmask |=
      VAR_2;
  VAR_4->rrc_state =
      VAR_3->if_interface_state.rrc_state;
 }
 if (VAR_3->if_interface_state.valid_bitmask &
     VAR_1) {
  VAR_4->valid_bitmask |=
      VAR_1;
  VAR_4->lqm_state =
      VAR_3->if_interface_state.lqm_state;
 }
 if (VAR_3->if_interface_state.valid_bitmask &
     VAR_0) {
  VAR_4->valid_bitmask |=
      VAR_0;
  VAR_4->interface_availability =
      VAR_3->if_interface_state.interface_availability;
 }

 FUNC_0(VAR_3);
}
