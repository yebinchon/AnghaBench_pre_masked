
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qib_pportdata {int cc_shadow_lock; TYPE_1__* congestion_entries_shadow; } ;
struct qib_ibport {int dummy; } ;
struct ib_smp {int dummy; } ;
struct ib_device {int dummy; } ;
struct ib_cc_mad {scalar_t__ mgmt_data; } ;
struct ib_cc_congestion_setting_attr {TYPE_2__* entries; void* control_map; void* port_control; } ;
struct ib_cc_congestion_entry_shadow {int ccti_min; int trigger_threshold; int ccti_timer; int ccti_increase; } ;
struct TYPE_4__ {int ccti_min; int trigger_threshold; void* ccti_timer; int ccti_increase; } ;
struct TYPE_3__ {int control_map; int port_control; struct ib_cc_congestion_entry_shadow* entries; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 struct qib_pportdata* FUNC_2 (struct qib_ibport*) ;
 int FUNC_3 (struct ib_smp*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct qib_ibport* FUNC_6 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct ib_cc_mad *VAR_1,
    struct ib_device *VAR_2, u8 VAR_3)
{
 int VAR_4;
 struct ib_cc_congestion_setting_attr *VAR_5 =
  (struct ib_cc_congestion_setting_attr *)VAR_1->mgmt_data;
 struct qib_ibport *VAR_6 = FUNC_6(VAR_2, VAR_3);
 struct qib_pportdata *VAR_7 = FUNC_2(VAR_6);
 struct ib_cc_congestion_entry_shadow *VAR_8;

 FUNC_1(VAR_1->mgmt_data, 0, sizeof(VAR_1->mgmt_data));

 FUNC_4(&VAR_7->cc_shadow_lock);

 VAR_8 = VAR_7->congestion_entries_shadow->entries;
 VAR_5->port_control = FUNC_0(
  VAR_7->congestion_entries_shadow->port_control);
 VAR_5->control_map = FUNC_0(
  VAR_7->congestion_entries_shadow->control_map);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5->entries[VAR_4].ccti_increase = VAR_8[VAR_4].ccti_increase;
  VAR_5->entries[VAR_4].ccti_timer = FUNC_0(VAR_8[VAR_4].ccti_timer);
  VAR_5->entries[VAR_4].trigger_threshold = VAR_8[VAR_4].trigger_threshold;
  VAR_5->entries[VAR_4].ccti_min = VAR_8[VAR_4].ccti_min;
 }

 FUNC_5(&VAR_7->cc_shadow_lock);

 return FUNC_3((struct ib_smp *) VAR_1);
}
