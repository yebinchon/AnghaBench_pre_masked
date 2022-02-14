
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_event_data {int dummy; } ;
struct kev_dl_link_quality_metric_data {int link_quality_metric; } ;
struct TYPE_4__ {int lqm_state; int valid_bitmask; } ;
struct ifnet {TYPE_1__ if_interface_state; } ;
typedef int ev_lqm_data ;
struct TYPE_5__ {int ipi_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct kev_dl_link_quality_metric_data*,int) ;
 int FUNC_3 (struct ifnet*,int ,int ,struct net_event_data*,int) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 TYPE_2__ VAR_11 ;

void
FUNC_7(struct ifnet *VAR_12, int VAR_13, int VAR_14)
{
 struct kev_dl_link_quality_metric_data VAR_15;

 FUNC_0(VAR_13 >= VAR_1 && VAR_13 <= VAR_0);


 if (VAR_13 >= 0 && VAR_13 <= VAR_2) {
  VAR_13 = VAR_2;
  FUNC_1(&VAR_11.ipi_flags,
      VAR_7);
  FUNC_6(&VAR_11, VAR_8);
 } else if (VAR_13 > VAR_2 &&
     VAR_13 <= VAR_4) {
  VAR_13 = VAR_4;
 } else if (VAR_13 > VAR_4 &&
     VAR_13 <= VAR_5) {
  VAR_13 = VAR_5;
 } else if (VAR_13 > VAR_5 &&
     VAR_13 <= VAR_3) {
  VAR_13 = VAR_3;
 }




 if (!VAR_14)
  FUNC_5(VAR_12);

 if (VAR_13 == VAR_12->if_interface_state.lqm_state &&
     (VAR_12->if_interface_state.valid_bitmask &
     VAR_6)) {



  if (!VAR_14)
   FUNC_4(VAR_12);
  return;
 }
 VAR_12->if_interface_state.valid_bitmask |=
      VAR_6;
 VAR_12->if_interface_state.lqm_state = VAR_13;




 FUNC_4(VAR_12);

 FUNC_2(&VAR_15, sizeof (VAR_15));
 VAR_15.link_quality_metric = VAR_13;

 FUNC_3(VAR_12, VAR_10, VAR_9,
     (struct net_event_data *)&VAR_15, sizeof (VAR_15));




 if (VAR_14)
  FUNC_5(VAR_12);
}
