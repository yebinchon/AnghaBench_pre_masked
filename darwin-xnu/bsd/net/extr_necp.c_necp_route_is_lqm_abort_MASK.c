
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int valid_bitmask; scalar_t__ lqm_state; } ;
struct ifnet {TYPE_1__ if_interface_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_0(struct ifnet *VAR_2, struct ifnet *VAR_3)
{
 if (VAR_2 != ((void*)0) &&
  (VAR_2->if_interface_state.valid_bitmask & VAR_1) &&
  VAR_2->if_interface_state.lqm_state == VAR_0) {
  return 1;
 }
 if (VAR_3 != ((void*)0) &&
  (VAR_3->if_interface_state.valid_bitmask & VAR_1) &&
  VAR_3->if_interface_state.lqm_state == VAR_0) {
  return 1;
 }
 return 0;
}
