
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_voucher_attr_recipe_size_t ;
typedef int mach_voucher_attr_raw_recipe_array_t ;
typedef int mach_port_name_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int *) ;

kern_return_t
FUNC_2(mach_port_name_t VAR_1,
                         mach_voucher_attr_raw_recipe_array_t VAR_2,
                         mach_voucher_attr_recipe_size_t VAR_3,
                         mach_port_name_t *VAR_4)
{
 kern_return_t VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);



 if (VAR_5 == ((1 << 24) | 70))
  VAR_5 = VAR_0;






 if (VAR_5 == VAR_0)
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

 return VAR_5;
}
