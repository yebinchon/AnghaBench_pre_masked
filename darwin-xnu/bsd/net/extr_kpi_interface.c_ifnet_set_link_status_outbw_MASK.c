
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ eff_bw; scalar_t__ max_bw; } ;
struct ifnet {TYPE_5__ if_output_bw; TYPE_4__* if_link_status; } ;
struct if_wifi_status_v1 {scalar_t__ ul_effective_bandwidth; scalar_t__ ul_max_bandwidth; int valid_bitmask; } ;
struct TYPE_6__ {struct if_wifi_status_v1 if_status_v1; } ;
struct TYPE_7__ {TYPE_1__ if_wifi_u; } ;
struct TYPE_8__ {TYPE_2__ ifsr_wifi; } ;
struct TYPE_9__ {TYPE_3__ ifsr_u; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct ifnet *VAR_2)
{
 struct if_wifi_status_v1 *VAR_3;
 VAR_3 = &VAR_2->if_link_status->ifsr_u.ifsr_wifi.if_wifi_u.if_status_v1;
 if (VAR_2->if_output_bw.eff_bw != 0) {
  VAR_3->valid_bitmask |=
      VAR_0;
  VAR_3->ul_effective_bandwidth =
      VAR_2->if_output_bw.eff_bw;
 }
 if (VAR_2->if_output_bw.max_bw != 0) {
  VAR_3->valid_bitmask |=
      VAR_1;
  VAR_3->ul_max_bandwidth =
      VAR_2->if_output_bw.max_bw;
 }
}
