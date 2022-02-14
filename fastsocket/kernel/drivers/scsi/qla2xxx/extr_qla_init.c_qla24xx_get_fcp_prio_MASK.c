
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_9__ {int fcp_prio_enabled; } ;
struct qla_hw_data {TYPE_2__* fcp_prio_cfg; TYPE_1__ flags; } ;
struct qla_fcp_prio_entry {int flags; int src_pid; int dst_pid; int tag; int dst_wwpn; int src_wwpn; } ;
struct TYPE_11__ {int b24; } ;
struct TYPE_13__ {int port_name; TYPE_3__ d_id; struct qla_hw_data* hw; } ;
typedef TYPE_5__ scsi_qla_host_t ;
struct TYPE_12__ {int b24; } ;
struct TYPE_14__ {int port_name; TYPE_4__ d_id; } ;
typedef TYPE_6__ fc_port_t ;
struct TYPE_10__ {int num_entries; struct qla_fcp_prio_entry* entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(scsi_qla_host_t *VAR_7, fc_port_t *VAR_8)
{
 int VAR_9, VAR_10;
 uint8_t VAR_11, VAR_12;
 int VAR_13;
 uint32_t VAR_14, VAR_15;
 uint64_t VAR_16, VAR_17;
 struct qla_fcp_prio_entry *VAR_18;
 struct qla_hw_data *VAR_19 = VAR_7->hw;

 if (!VAR_19->fcp_prio_cfg || !VAR_19->flags.fcp_prio_enabled)
  return -1;

 VAR_13 = -1;
 VAR_10 = VAR_19->fcp_prio_cfg->num_entries;
 VAR_18 = &VAR_19->fcp_prio_cfg->entry[0];

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  VAR_11 = VAR_12 = 0;

  if (!(VAR_18->flags & VAR_5)) {
   VAR_18++;
   continue;
  }


  if (VAR_18->flags & VAR_2) {
   VAR_14 = VAR_18->src_pid & VAR_6;
   VAR_15 = VAR_7->d_id.b24 & VAR_6;
   if (VAR_14 == VAR_6)
    VAR_11++;
   else if (VAR_14 == VAR_15)
    VAR_11++;
  }


  if (VAR_18->flags & VAR_0) {
   VAR_14 = VAR_18->dst_pid & VAR_6;
   VAR_15 = VAR_8->d_id.b24 & VAR_6;
   if (VAR_14 == VAR_6)
    VAR_11++;
   else if (VAR_14 == VAR_15)
    VAR_11++;
  }


  if (VAR_18->flags & VAR_3) {
   VAR_16 = FUNC_0(VAR_7->port_name);
   VAR_17 = FUNC_0(VAR_18->src_wwpn);
   if (VAR_17 == (uint64_t)-1)
    VAR_12++;
   else if (VAR_16 == VAR_17)
    VAR_12++;
  }


  if (VAR_18->flags & VAR_1) {
   VAR_16 = FUNC_0(VAR_8->port_name);
   VAR_17 = FUNC_0(VAR_18->dst_wwpn);
   if (VAR_17 == (uint64_t)-1)
    VAR_12++;
   else if (VAR_16 == VAR_17)
    VAR_12++;
  }

  if (VAR_11 == 2 || VAR_12 == 2) {

   if (VAR_18->flags & VAR_4)
    VAR_13 = VAR_18->tag;
   break;
  }

  VAR_18++;
 }

 return VAR_13;
}
