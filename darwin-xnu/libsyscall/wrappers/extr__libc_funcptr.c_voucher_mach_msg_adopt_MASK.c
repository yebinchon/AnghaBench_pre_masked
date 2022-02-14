
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int voucher_mach_msg_state_t ;
typedef int mach_msg_header_t ;
struct TYPE_2__ {int (* voucher_mach_msg_adopt ) (int *) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *) ;

voucher_mach_msg_state_t
FUNC_1(mach_msg_header_t *VAR_2)
{
 if (VAR_1->voucher_mach_msg_adopt) {
  return VAR_1->voucher_mach_msg_adopt(VAR_2);
 }
 return VAR_0;
}
