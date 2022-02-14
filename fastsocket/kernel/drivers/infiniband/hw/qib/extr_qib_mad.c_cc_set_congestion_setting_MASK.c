
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qib_pportdata {TYPE_1__* congestion_entries; void* cc_sl_control_map; } ;
struct qib_ibport {int dummy; } ;
struct ib_smp {int dummy; } ;
struct ib_device {int dummy; } ;
struct ib_cc_mad {scalar_t__ mgmt_data; } ;
struct ib_cc_congestion_setting_attr {TYPE_2__* entries; int control_map; } ;
struct TYPE_4__ {int ccti_min; int trigger_threshold; int ccti_timer; int ccti_increase; } ;
struct TYPE_3__ {int ccti_min; int trigger_threshold; void* ccti_timer; int ccti_increase; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 struct qib_pportdata* FUNC_1 (struct qib_ibport*) ;
 int FUNC_2 (struct ib_smp*) ;
 struct qib_ibport* FUNC_3 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct ib_cc_mad *VAR_1,
    struct ib_device *VAR_2, u8 VAR_3)
{
 struct ib_cc_congestion_setting_attr *VAR_4 =
  (struct ib_cc_congestion_setting_attr *)VAR_1->mgmt_data;
 struct qib_ibport *VAR_5 = FUNC_3(VAR_2, VAR_3);
 struct qib_pportdata *VAR_6 = FUNC_1(VAR_5);
 int VAR_7;

 VAR_6->cc_sl_control_map = FUNC_0(VAR_4->control_map);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6->congestion_entries[VAR_7].ccti_increase =
   VAR_4->entries[VAR_7].ccti_increase;

  VAR_6->congestion_entries[VAR_7].ccti_timer =
   FUNC_0(VAR_4->entries[VAR_7].ccti_timer);

  VAR_6->congestion_entries[VAR_7].trigger_threshold =
   VAR_4->entries[VAR_7].trigger_threshold;

  VAR_6->congestion_entries[VAR_7].ccti_min =
   VAR_4->entries[VAR_7].ccti_min;
 }

 return FUNC_2((struct ib_smp *) VAR_1);
}
