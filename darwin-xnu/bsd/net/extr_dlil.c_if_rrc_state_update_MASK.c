
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_event_data {int dummy; } ;
struct kev_dl_rrc_state {unsigned int rrc_state; } ;
struct TYPE_2__ {unsigned int rrc_state; int valid_bitmask; } ;
struct ifnet {TYPE_1__ if_interface_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kev_dl_rrc_state*,int) ;
 int FUNC_1 (struct ifnet*,int ,int ,struct net_event_data*,int) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_3, unsigned int VAR_4)
{
 struct kev_dl_rrc_state VAR_5;

 if (VAR_4 == VAR_3->if_interface_state.rrc_state &&
     (VAR_3->if_interface_state.valid_bitmask &
     VAR_0))
  return;

 VAR_3->if_interface_state.valid_bitmask |=
     VAR_0;

 VAR_3->if_interface_state.rrc_state = VAR_4;




 FUNC_2(VAR_3);

 FUNC_0(&VAR_5, sizeof(struct kev_dl_rrc_state));
 VAR_5.rrc_state = VAR_4;

 FUNC_1(VAR_3, VAR_2, VAR_1,
     (struct net_event_data *)&VAR_5, sizeof(struct kev_dl_rrc_state));

 FUNC_3(VAR_3);
}
