
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qib_pportdata {int cc_max_table_entries; } ;
struct qib_ibport {int dummy; } ;
struct ib_smp {int dummy; } ;
struct ib_device {int dummy; } ;
struct ib_cc_mad {scalar_t__ mgmt_data; } ;
struct ib_cc_info_attr {int control_table_cap; scalar_t__ congestion_info; } ;


 int FUNC_0 (scalar_t__,int ,int) ;
 struct qib_pportdata* FUNC_1 (struct qib_ibport*) ;
 int FUNC_2 (struct ib_smp*) ;
 struct qib_ibport* FUNC_3 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct ib_cc_mad *VAR_0,
    struct ib_device *VAR_1, u8 VAR_2)
{
 struct ib_cc_info_attr *VAR_3 =
  (struct ib_cc_info_attr *)VAR_0->mgmt_data;
 struct qib_ibport *VAR_4 = FUNC_3(VAR_1, VAR_2);
 struct qib_pportdata *VAR_5 = FUNC_1(VAR_4);

 FUNC_0(VAR_0->mgmt_data, 0, sizeof(VAR_0->mgmt_data));

 VAR_3->congestion_info = 0;
 VAR_3->control_table_cap = VAR_5->cc_max_table_entries;

 return FUNC_2((struct ib_smp *) VAR_0);
}
