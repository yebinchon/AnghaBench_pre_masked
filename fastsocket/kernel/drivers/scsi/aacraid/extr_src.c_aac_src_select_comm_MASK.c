
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int adapter_deliver; int adapter_intr; int adapter_enable_int; } ;
struct aac_dev {TYPE_1__ a_ops; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct aac_dev *VAR_3, int VAR_4)
{
 switch (VAR_4) {
 case 128:
  VAR_3->a_ops.adapter_enable_int = VAR_1;
  VAR_3->a_ops.adapter_intr = VAR_2;
  VAR_3->a_ops.adapter_deliver = VAR_0;
  break;
 default:
  return 1;
 }
 return 0;
}
