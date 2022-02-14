
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mach_msg_header_t ;
typedef int boolean_t ;
struct TYPE_2__ {int (* voucher_mach_msg_set ) (int *) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;

boolean_t
FUNC_1(mach_msg_header_t *VAR_1)
{
 if (VAR_0->voucher_mach_msg_set) {
  return VAR_0->voucher_mach_msg_set(VAR_1);
 }
 return 0;
}
