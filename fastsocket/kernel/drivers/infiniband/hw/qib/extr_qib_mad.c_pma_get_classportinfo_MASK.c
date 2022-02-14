
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_devdata {int psxmitwait_supported; } ;
struct ib_smp {int dummy; } ;
struct TYPE_2__ {scalar_t__ attr_mod; int status; } ;
struct ib_pma_mad {TYPE_1__ mad_hdr; scalar_t__ data; } ;
struct ib_device {int dummy; } ;
struct ib_class_port_info {int base_version; int class_version; int* reserved; int resp_time_value; int capability_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct qib_devdata* FUNC_0 (struct ib_device*) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (struct ib_smp*) ;

__attribute__((used)) static int FUNC_3(struct ib_pma_mad *VAR_2,
     struct ib_device *VAR_3)
{
 struct ib_class_port_info *VAR_4 =
  (struct ib_class_port_info *)VAR_2->data;
 struct qib_devdata *VAR_5 = FUNC_0(VAR_3);

 FUNC_1(VAR_2->data, 0, sizeof(VAR_2->data));

 if (VAR_2->mad_hdr.attr_mod != 0)
  VAR_2->mad_hdr.status |= VAR_1;


 VAR_4->base_version = 1;
 VAR_4->class_version = 1;
 VAR_4->capability_mask = VAR_0;




 VAR_4->reserved[0] = VAR_5->psxmitwait_supported << 7;



 VAR_4->resp_time_value = 18;

 return FUNC_2((struct ib_smp *) VAR_2);
}
