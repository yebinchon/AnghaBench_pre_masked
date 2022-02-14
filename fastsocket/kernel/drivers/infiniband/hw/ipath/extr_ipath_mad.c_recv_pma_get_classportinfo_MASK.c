
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_smp {int dummy; } ;
struct TYPE_2__ {scalar_t__ attr_mod; int status; } ;
struct ib_pma_mad {TYPE_1__ mad_hdr; scalar_t__ data; } ;
struct ib_class_port_info {int base_version; int class_version; int resp_time_value; int capability_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (struct ib_smp*) ;

__attribute__((used)) static int FUNC_3(struct ib_pma_mad *VAR_1)
{
 struct ib_class_port_info *VAR_2 =
  (struct ib_class_port_info *)VAR_1->data;

 FUNC_1(VAR_1->data, 0, sizeof(VAR_1->data));

 if (VAR_1->mad_hdr.attr_mod != 0)
  VAR_1->mad_hdr.status |= VAR_0;


 VAR_2->capability_mask = FUNC_0(1 << 8);
 VAR_2->base_version = 1;
 VAR_2->class_version = 1;




 VAR_2->resp_time_value = 18;

 return FUNC_2((struct ib_smp *) VAR_1);
}
