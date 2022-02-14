
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct TYPE_2__ {int valid_bitmask; scalar_t__ interface_availability; } ;
struct ifnet {scalar_t__ if_type; scalar_t__ if_index; TYPE_1__ if_interface_state; } ;
struct if_interface_state {int valid_bitmask; scalar_t__ interface_availability; int rrc_state; int lqm_state; } ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ifnet*,int ,int) ;
 int FUNC_1 (struct ifnet*,int ) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (scalar_t__) ;

errno_t
FUNC_5(struct ifnet *VAR_11,
    struct if_interface_state *VAR_12)
{
 u_short VAR_13 = 0;

 FUNC_3(VAR_11);

 if ((VAR_11->if_type != VAR_4) &&
     (VAR_12->valid_bitmask &
     VAR_10)) {
  FUNC_2(VAR_11);
  return (VAR_1);
 }
 if ((VAR_12->valid_bitmask &
     VAR_7) &&
     (VAR_12->lqm_state < VAR_3 ||
     VAR_12->lqm_state > VAR_2)) {
  FUNC_2(VAR_11);
  return (VAR_0);
 }
 if ((VAR_12->valid_bitmask &
     VAR_10) &&
     VAR_12->rrc_state !=
     VAR_9 &&
     VAR_12->rrc_state !=
     VAR_8) {
  FUNC_2(VAR_11);
  return (VAR_0);
 }

 if (VAR_12->valid_bitmask &
     VAR_7) {
  FUNC_0(VAR_11, VAR_12->lqm_state, 1);
 }
 if (VAR_12->valid_bitmask &
     VAR_10) {
  FUNC_1(VAR_11, VAR_12->rrc_state);
 }
 if (VAR_12->valid_bitmask &
     VAR_5) {
  VAR_11->if_interface_state.valid_bitmask |=
      VAR_5;
  VAR_11->if_interface_state.interface_availability =
      VAR_12->interface_availability;

  if (VAR_11->if_interface_state.interface_availability ==
      VAR_6) {
   VAR_13 = VAR_11->if_index;
  }
 }
 FUNC_2(VAR_11);







 if (VAR_13 > 0)
  FUNC_4(VAR_13);

 return (0);
}
