
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct tcpcb {scalar_t__ t_maxopd; scalar_t__ t_maxseg; scalar_t__ t_cached_maxopd; } ;
struct ifnet {TYPE_4__* if_link_status; } ;
struct if_cellular_status_v1 {int valid_bitmask; scalar_t__ mss_recommended; } ;
struct TYPE_10__ {int tcps_mss_to_low; int tcps_mss_to_medium; int tcps_mss_to_default; } ;
struct TYPE_6__ {struct if_cellular_status_v1 if_status_v1; } ;
struct TYPE_7__ {TYPE_1__ if_cell_u; } ;
struct TYPE_8__ {TYPE_2__ ifsr_cell; } ;
struct TYPE_9__ {TYPE_3__ ifsr_u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_5__ VAR_6 ;

inline void
FUNC_0(struct tcpcb *VAR_7, struct ifnet *VAR_8)
{
 struct if_cellular_status_v1 *VAR_9;
 u_int32_t VAR_10;
 VAR_9 = &VAR_8->if_link_status->ifsr_u.ifsr_cell.if_cell_u.if_status_v1;
 if (VAR_9->valid_bitmask & VAR_3) {
  VAR_10 = VAR_7->t_maxopd - VAR_7->t_maxseg;

  if (VAR_9->mss_recommended ==
      VAR_2 &&
      VAR_7->t_cached_maxopd > 0 &&
      VAR_7->t_maxopd < VAR_7->t_cached_maxopd) {
   VAR_7->t_maxopd = VAR_7->t_cached_maxopd;
   VAR_6.tcps_mss_to_default++;
  } else if (VAR_9->mss_recommended ==
      VAR_1 &&
      VAR_7->t_maxopd > VAR_5) {
   VAR_7->t_cached_maxopd = VAR_7->t_maxopd;
   VAR_7->t_maxopd = VAR_5;
   VAR_6.tcps_mss_to_medium++;
  } else if (VAR_9->mss_recommended ==
      VAR_0 &&
      VAR_7->t_maxopd > VAR_4) {
   VAR_7->t_cached_maxopd = VAR_7->t_maxopd;
   VAR_7->t_maxopd = VAR_4;
   VAR_6.tcps_mss_to_low++;
  }
  VAR_7->t_maxseg = VAR_7->t_maxopd - VAR_10;




  if (VAR_7->t_maxopd == VAR_7->t_cached_maxopd)
   VAR_7->t_cached_maxopd = 0;
 }
}
