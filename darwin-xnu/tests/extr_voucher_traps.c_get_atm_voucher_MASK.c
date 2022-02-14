
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int r ;
struct TYPE_2__ {int command; int key; } ;
typedef TYPE_1__ mach_voucher_attr_recipe_data_t ;
typedef int mach_voucher_attr_raw_recipe_array_t ;
typedef scalar_t__ mach_port_t ;
typedef int kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,int ,int,scalar_t__*) ;
 int FUNC_2 () ;

__attribute__((used)) static mach_port_t FUNC_3(void)
{
 mach_voucher_attr_recipe_data_t VAR_3 = {
  .key = VAR_2,
  .command = VAR_1
 };
 mach_port_t VAR_4 = VAR_0;
 kern_return_t VAR_5 = FUNC_1(FUNC_2(),
                                             (mach_voucher_attr_raw_recipe_array_t)&VAR_3,
                                             sizeof(VAR_3), &VAR_4);
 FUNC_0(VAR_5, "Create ATM voucher: 0x%x", (unsigned int)VAR_4);

 return VAR_4;
}
