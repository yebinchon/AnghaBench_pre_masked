
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qib_pportdata {int total_cct_entry; int cc_supported_table_entries; int ccti_limit; int cc_shadow_lock; struct ib_cc_table_entry_shadow* congestion_entries; TYPE_3__* congestion_entries_shadow; int cc_sl_control_map; struct ib_cc_table_entry_shadow* ccti_entries; TYPE_2__* ccti_entries_shadow; } ;
struct qib_ibport {int dummy; } ;
struct ib_smp {int dummy; } ;
struct ib_device {int dummy; } ;
struct ib_cc_table_entry_shadow {int entry; } ;
struct ib_cc_table_entry {int dummy; } ;
struct ib_cc_table_attr {TYPE_1__* ccti_entries; int ccti_limit; } ;
struct ib_cc_mad {int attr_mod; scalar_t__ mgmt_data; } ;
struct ib_cc_congestion_entry {int dummy; } ;
struct TYPE_6__ {int entries; int control_map; int port_control; } ;
struct TYPE_5__ {int ccti_last_entry; int entries; } ;
struct TYPE_4__ {int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct ib_cc_table_entry_shadow*,int) ;
 struct qib_pportdata* FUNC_3 (struct qib_ibport*) ;
 int FUNC_4 (struct ib_smp*) ;
 int FUNC_5 (struct ib_smp*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct qib_ibport* FUNC_8 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_9(struct ib_cc_mad *VAR_4,
    struct ib_device *VAR_5, u8 VAR_6)
{
 struct ib_cc_table_attr *VAR_7 =
  (struct ib_cc_table_attr *)VAR_4->mgmt_data;
 struct qib_ibport *VAR_8 = FUNC_8(VAR_5, VAR_6);
 struct qib_pportdata *VAR_9 = FUNC_3(VAR_8);
 u32 VAR_10 = FUNC_1(VAR_4->attr_mod);
 u32 VAR_11;
 struct ib_cc_table_entry_shadow *VAR_12;
 int VAR_13;


 if (VAR_10 > VAR_3 - 1)
  goto bail;




 if (FUNC_0(VAR_7->ccti_limit) < VAR_0)
  VAR_9->total_cct_entry = 0;

 VAR_11 = (FUNC_0(VAR_7->ccti_limit))%VAR_0;


 VAR_9->total_cct_entry += (VAR_11 + 1);

 if (VAR_9->total_cct_entry > VAR_9->cc_supported_table_entries)
  goto bail;

 VAR_9->ccti_limit = FUNC_0(VAR_7->ccti_limit);

 VAR_12 = VAR_9->ccti_entries + (VAR_0 * VAR_10);

 for (VAR_13 = 0; VAR_13 <= VAR_11; VAR_13++)
  VAR_12[VAR_13].entry = FUNC_0(VAR_7->ccti_entries[VAR_13].entry);

 FUNC_6(&VAR_9->cc_shadow_lock);

 VAR_9->ccti_entries_shadow->ccti_last_entry = VAR_9->total_cct_entry - 1;
 FUNC_2(VAR_9->ccti_entries_shadow->entries, VAR_9->ccti_entries,
  (VAR_9->total_cct_entry * sizeof(struct ib_cc_table_entry)));

 VAR_9->congestion_entries_shadow->port_control = VAR_2;
 VAR_9->congestion_entries_shadow->control_map = VAR_9->cc_sl_control_map;
 FUNC_2(VAR_9->congestion_entries_shadow->entries, VAR_9->congestion_entries,
  VAR_1 * sizeof(struct ib_cc_congestion_entry));

 FUNC_7(&VAR_9->cc_shadow_lock);

 return FUNC_4((struct ib_smp *) VAR_4);

bail:
 return FUNC_5((struct ib_smp *) VAR_4);
}
