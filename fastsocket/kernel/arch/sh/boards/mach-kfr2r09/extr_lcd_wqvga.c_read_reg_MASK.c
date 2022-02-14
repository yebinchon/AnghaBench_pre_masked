
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_sys_bus_ops {unsigned long (* read_data ) (void*) ;} ;


 unsigned long FUNC_0 (void*) ;

__attribute__((used)) static unsigned long FUNC_1(void *VAR_0,
         struct sh_mobile_lcdc_sys_bus_ops *VAR_1)
{
 return VAR_1->read_data(VAR_0);
}
