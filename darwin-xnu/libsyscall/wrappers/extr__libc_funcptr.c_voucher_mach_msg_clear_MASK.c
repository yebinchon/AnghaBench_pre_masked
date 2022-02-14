
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mach_msg_header_t ;
struct TYPE_2__ {void (* voucher_mach_msg_clear ) (int *) ;} ;


 TYPE_1__* VAR_0 ;
 void FUNC_0 (int *) ;

void
FUNC_1(mach_msg_header_t *VAR_1)
{
 if (VAR_0->voucher_mach_msg_clear) {
  return VAR_0->voucher_mach_msg_clear(VAR_1);
 }
}
