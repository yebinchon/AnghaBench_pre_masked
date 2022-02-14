
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_smp {int dummy; } ;
struct ib_device {int dummy; } ;
struct ib_cc_mad {scalar_t__ mgmt_data; } ;
struct ib_cc_classportinfo_attr {int base_version; int class_version; int resp_time_value; scalar_t__ cap_mask; } ;


 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (struct ib_smp*) ;

__attribute__((used)) static int FUNC_2(struct ib_cc_mad *VAR_0,
    struct ib_device *VAR_1)
{
 struct ib_cc_classportinfo_attr *VAR_2 =
  (struct ib_cc_classportinfo_attr *)VAR_0->mgmt_data;

 FUNC_0(VAR_0->mgmt_data, 0, sizeof(VAR_0->mgmt_data));

 VAR_2->base_version = 1;
 VAR_2->class_version = 1;
 VAR_2->cap_mask = 0;




 VAR_2->resp_time_value = 18;

 return FUNC_1((struct ib_smp *) VAR_0);
}
