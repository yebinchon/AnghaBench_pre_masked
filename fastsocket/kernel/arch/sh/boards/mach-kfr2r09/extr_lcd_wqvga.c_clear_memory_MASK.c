
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_sys_bus_ops {int dummy; } ;


 int FUNC_0 (void*,struct sh_mobile_lcdc_sys_bus_ops*) ;
 int FUNC_1 (void*,struct sh_mobile_lcdc_sys_bus_ops*,int,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0,
    struct sh_mobile_lcdc_sys_bus_ops *VAR_1)
{
 int VAR_2;


 FUNC_0(VAR_0, VAR_1);


 for (VAR_2 = 0; VAR_2 < (240 * 400); VAR_2++)
  FUNC_1(VAR_0, VAR_1, 1, 0x00);
}
