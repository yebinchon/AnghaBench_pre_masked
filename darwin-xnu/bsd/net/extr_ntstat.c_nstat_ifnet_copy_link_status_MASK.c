
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {int scan_duration; int valid_bitmask; int scan_count; int config_multicast_rate; int config_frequency; int dl_error_rate; int dl_max_latency; int dl_effective_latency; int dl_min_latency; int dl_max_bandwidth; int dl_effective_bandwidth; int ul_error_rate; int ul_bytes_lost; int ul_retxt_level; int ul_max_latency; int ul_effective_latency; int ul_min_latency; int ul_max_bandwidth; int ul_effective_bandwidth; int link_quality_metric; } ;
struct TYPE_18__ {int mss_recommended; int valid_bitmask; int config_backoff_time; int config_inactivity_time; int dl_max_bandwidth; int dl_effective_bandwidth; int ul_max_queue_size; int ul_avg_queue_size; int ul_min_queue_size; int ul_bytes_lost; int ul_retxt_level; int ul_max_latency; int ul_effective_latency; int ul_min_latency; int ul_max_bandwidth; int ul_effective_bandwidth; int link_quality_metric; } ;
struct TYPE_12__ {TYPE_7__ wifi; TYPE_9__ cellular; } ;
struct TYPE_17__ {int link_status_type; TYPE_3__ u; } ;
struct nstat_ifnet_descriptor {TYPE_8__ link_status; } ;
struct ifnet {scalar_t__ if_type; scalar_t__ if_subfamily; int if_link_status_lock; struct if_link_status* if_link_status; } ;
struct if_wifi_status_v1 {int valid_bitmask; scalar_t__ ul_retxt_level; scalar_t__ config_frequency; int scan_duration; int scan_count; int config_multicast_rate; int dl_error_rate; int dl_max_latency; int dl_effective_latency; int dl_min_latency; int dl_max_bandwidth; int dl_effective_bandwidth; int ul_error_rate; int ul_bytes_lost; int ul_max_latency; int ul_effective_latency; int ul_min_latency; int ul_max_bandwidth; int ul_effective_bandwidth; int link_quality_metric; } ;
struct TYPE_10__ {struct if_wifi_status_v1 if_status_v1; } ;
struct TYPE_11__ {TYPE_1__ if_wifi_u; } ;
struct if_cellular_status_v1 {int valid_bitmask; scalar_t__ ul_retxt_level; int mss_recommended; int config_backoff_time; int config_inactivity_time; int dl_max_bandwidth; int dl_effective_bandwidth; int ul_max_queue_size; int ul_avg_queue_size; int ul_min_queue_size; int ul_bytes_lost; int ul_max_latency; int ul_effective_latency; int ul_min_latency; int ul_max_bandwidth; int ul_effective_bandwidth; int link_quality_metric; } ;
struct TYPE_13__ {struct if_cellular_status_v1 if_status_v1; } ;
struct TYPE_14__ {TYPE_4__ if_cell_u; } ;
struct TYPE_15__ {TYPE_2__ ifsr_wifi; TYPE_5__ ifsr_cell; } ;
struct if_link_status {scalar_t__ ifsr_version; TYPE_6__ ifsr_u; } ;
typedef TYPE_7__ nstat_ifnet_desc_wifi_status ;
typedef TYPE_8__ nstat_ifnet_desc_link_status ;
typedef TYPE_9__ nstat_ifnet_desc_cellular_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(
 struct ifnet *VAR_97,
 struct nstat_ifnet_descriptor *VAR_98)
{
 struct if_link_status *VAR_99 = VAR_97->if_link_status;
 nstat_ifnet_desc_link_status *VAR_100 = &VAR_98->link_status;

 VAR_100->link_status_type = VAR_70;
 if (VAR_99 == ((void*)0))
  return;

 FUNC_1(&VAR_97->if_link_status_lock);

 if (VAR_97->if_type == VAR_1) {

  nstat_ifnet_desc_cellular_status *VAR_101 = &VAR_100->u.cellular;
  struct if_cellular_status_v1 *VAR_102 =
   &VAR_99->ifsr_u.ifsr_cell.if_cell_u.if_status_v1;

  if (VAR_99->ifsr_version != VAR_2)
   goto done;

  VAR_100->link_status_type = VAR_69;

  if (VAR_102->valid_bitmask & VAR_7) {
   VAR_101->valid_bitmask |= VAR_53;
   VAR_101->link_quality_metric = VAR_102->link_quality_metric;
  }
  if (VAR_102->valid_bitmask & VAR_10) {
   VAR_101->valid_bitmask |= VAR_57;
   VAR_101->ul_effective_bandwidth = VAR_102->ul_effective_bandwidth;
  }
  if (VAR_102->valid_bitmask & VAR_12) {
   VAR_101->valid_bitmask |= VAR_59;
   VAR_101->ul_max_bandwidth = VAR_102->ul_max_bandwidth;
  }
  if (VAR_102->valid_bitmask & VAR_15) {
   VAR_101->valid_bitmask |= VAR_62;
   VAR_101->ul_min_latency = VAR_102->ul_min_latency;
  }
  if (VAR_102->valid_bitmask & VAR_11) {
   VAR_101->valid_bitmask |= VAR_58;
   VAR_101->ul_effective_latency = VAR_102->ul_effective_latency;
  }
  if (VAR_102->valid_bitmask & VAR_13) {
   VAR_101->valid_bitmask |= VAR_60;
   VAR_101->ul_max_latency = VAR_102->ul_max_latency;
  }
  if (VAR_102->valid_bitmask & VAR_22) {
   VAR_101->valid_bitmask |= VAR_68;
   if (VAR_102->ul_retxt_level == VAR_21)
    VAR_101->ul_retxt_level = VAR_67;
   else if (VAR_102->ul_retxt_level == VAR_19)
    VAR_101->ul_retxt_level = VAR_65;
   else if (VAR_102->ul_retxt_level == VAR_20)
    VAR_101->ul_retxt_level = VAR_66;
   else if (VAR_102->ul_retxt_level == VAR_18)
    VAR_101->ul_retxt_level = VAR_64;
   else
    VAR_101->valid_bitmask &= ~VAR_68;
  }
  if (VAR_102->valid_bitmask & VAR_9) {
   VAR_101->valid_bitmask |= VAR_56;
   VAR_101->ul_bytes_lost = VAR_102->ul_bytes_lost;
  }
  if (VAR_102->valid_bitmask & VAR_16) {
   VAR_101->valid_bitmask |= VAR_63;
   VAR_101->ul_min_queue_size = VAR_102->ul_min_queue_size;
  }
  if (VAR_102->valid_bitmask & VAR_8) {
   VAR_101->valid_bitmask |= VAR_55;
   VAR_101->ul_avg_queue_size = VAR_102->ul_avg_queue_size;
  }
  if (VAR_102->valid_bitmask & VAR_14) {
   VAR_101->valid_bitmask |= VAR_61;
   VAR_101->ul_max_queue_size = VAR_102->ul_max_queue_size;
  }
  if (VAR_102->valid_bitmask & VAR_5) {
   VAR_101->valid_bitmask |= VAR_51;
   VAR_101->dl_effective_bandwidth = VAR_102->dl_effective_bandwidth;
  }
  if (VAR_102->valid_bitmask & VAR_6) {
   VAR_101->valid_bitmask |= VAR_52;
   VAR_101->dl_max_bandwidth = VAR_102->dl_max_bandwidth;
  }
  if (VAR_102->valid_bitmask & VAR_4) {
   VAR_101->valid_bitmask |= VAR_50;
   VAR_101->config_inactivity_time = VAR_102->config_inactivity_time;
  }
  if (VAR_102->valid_bitmask & VAR_3) {
   VAR_101->valid_bitmask |= VAR_49;
   VAR_101->config_backoff_time = VAR_102->config_backoff_time;
  }
  if (VAR_102->valid_bitmask & VAR_17) {
   VAR_101->valid_bitmask |= VAR_54;
   VAR_101->mss_recommended = VAR_102->mss_recommended;
  }
 } else if (VAR_97->if_subfamily == VAR_0) {

  nstat_ifnet_desc_wifi_status *VAR_103 = &VAR_100->u.wifi;
  struct if_wifi_status_v1 *VAR_104 =
   &VAR_99->ifsr_u.ifsr_wifi.if_wifi_u.if_status_v1;

  if (VAR_99->ifsr_version != VAR_36)
   goto done;

  VAR_100->link_status_type = VAR_71;

  if (VAR_104->valid_bitmask & VAR_35) {
   VAR_103->valid_bitmask |= VAR_84;
   VAR_103->link_quality_metric = VAR_104->link_quality_metric;
  }
  if (VAR_104->valid_bitmask & VAR_38) {
   VAR_103->valid_bitmask |= VAR_86;
   VAR_103->ul_effective_bandwidth = VAR_104->ul_effective_bandwidth;
  }
  if (VAR_104->valid_bitmask & VAR_41) {
   VAR_103->valid_bitmask |= VAR_89;
   VAR_103->ul_max_bandwidth = VAR_104->ul_max_bandwidth;
  }
  if (VAR_104->valid_bitmask & VAR_43) {
   VAR_103->valid_bitmask |= VAR_91;
   VAR_103->ul_min_latency = VAR_104->ul_min_latency;
  }
  if (VAR_104->valid_bitmask & VAR_39) {
   VAR_103->valid_bitmask |= VAR_87;
   VAR_103->ul_effective_latency = VAR_104->ul_effective_latency;
  }
  if (VAR_104->valid_bitmask & VAR_42) {
   VAR_103->valid_bitmask |= VAR_90;
   VAR_103->ul_max_latency = VAR_104->ul_max_latency;
  }
  if (VAR_104->valid_bitmask & VAR_48) {
   VAR_103->valid_bitmask |= VAR_96;
   if (VAR_104->ul_retxt_level == VAR_47)
    VAR_103->ul_retxt_level = VAR_95;
   else if (VAR_104->ul_retxt_level == VAR_45)
    VAR_103->ul_retxt_level = VAR_93;
   else if (VAR_104->ul_retxt_level == VAR_46)
    VAR_103->ul_retxt_level = VAR_94;
   else if (VAR_104->ul_retxt_level == VAR_44)
    VAR_103->ul_retxt_level = VAR_92;
   else
    VAR_103->valid_bitmask &= ~VAR_96;
  }
  if (VAR_104->valid_bitmask & VAR_37) {
   VAR_103->valid_bitmask |= VAR_85;
   VAR_103->ul_bytes_lost = VAR_104->ul_bytes_lost;
  }
  if (VAR_104->valid_bitmask & VAR_40) {
   VAR_103->valid_bitmask |= VAR_88;
   VAR_103->ul_error_rate = VAR_104->ul_error_rate;
  }
  if (VAR_104->valid_bitmask & VAR_29) {
   VAR_103->valid_bitmask |= VAR_78;
   VAR_103->dl_effective_bandwidth = VAR_104->dl_effective_bandwidth;
  }
  if (VAR_104->valid_bitmask & VAR_32) {
   VAR_103->valid_bitmask |= VAR_81;
   VAR_103->dl_max_bandwidth = VAR_104->dl_max_bandwidth;
  }
  if (VAR_104->valid_bitmask & VAR_34) {
   VAR_103->valid_bitmask |= VAR_83;
   VAR_103->dl_min_latency = VAR_104->dl_min_latency;
  }
  if (VAR_104->valid_bitmask & VAR_30) {
   VAR_103->valid_bitmask |= VAR_79;
   VAR_103->dl_effective_latency = VAR_104->dl_effective_latency;
  }
  if (VAR_104->valid_bitmask & VAR_33) {
   VAR_103->valid_bitmask |= VAR_82;
   VAR_103->dl_max_latency = VAR_104->dl_max_latency;
  }
  if (VAR_104->valid_bitmask & VAR_31) {
   VAR_103->valid_bitmask |= VAR_80;
   VAR_103->dl_error_rate = VAR_104->dl_error_rate;
  }
  if (VAR_104->valid_bitmask & VAR_25) {
   VAR_103->valid_bitmask |= VAR_74;
   if (VAR_104->config_frequency == VAR_23)
    VAR_103->config_frequency = VAR_72;
   else if (VAR_104->config_frequency == VAR_24)
    VAR_103->config_frequency = VAR_73;
   else
    VAR_103->valid_bitmask &= ~VAR_74;
  }
  if (VAR_104->valid_bitmask & VAR_26) {
   VAR_103->valid_bitmask |= VAR_75;
   VAR_103->config_multicast_rate = VAR_104->config_multicast_rate;
  }
  if (VAR_104->valid_bitmask & VAR_27) {
   VAR_103->valid_bitmask |= VAR_76;
   VAR_103->scan_count = VAR_104->scan_count;
  }
  if (VAR_104->valid_bitmask & VAR_28) {
   VAR_103->valid_bitmask |= VAR_77;
   VAR_103->scan_duration = VAR_104->scan_duration;
  }
 }

done:
 FUNC_0(&VAR_97->if_link_status_lock);
}
