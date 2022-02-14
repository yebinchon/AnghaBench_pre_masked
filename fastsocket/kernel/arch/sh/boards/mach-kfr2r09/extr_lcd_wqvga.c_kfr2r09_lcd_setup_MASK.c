
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_sys_bus_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,struct sh_mobile_lcdc_sys_bus_ops*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (void*,struct sh_mobile_lcdc_sys_bus_ops*) ;
 int FUNC_5 (int) ;

int FUNC_6(void *VAR_3, void *VAR_4,
        struct sh_mobile_lcdc_sys_bus_ops *VAR_5)
{

 FUNC_1(VAR_2, 0);
 FUNC_1(VAR_1, 0);
 FUNC_1(VAR_2, 1);
 FUNC_5(1100);
 FUNC_1(VAR_1, 1);
 FUNC_5(10);
 FUNC_1(VAR_2, 0);
 FUNC_2(20);

 if (FUNC_4(VAR_4, VAR_5) != 0x01221517)
  return -VAR_0;

 FUNC_3("KFR2R09 WQVGA LCD Module detected.\n");

 FUNC_0(VAR_4, VAR_5);
 return 0;
}
