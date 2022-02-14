
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_sys_bus_ops {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,struct sh_mobile_lcdc_sys_bus_ops*) ;
 int FUNC_2 (void*,struct sh_mobile_lcdc_sys_bus_ops*,int,int) ;

__attribute__((used)) static unsigned long FUNC_3(void *VAR_0,
          struct sh_mobile_lcdc_sys_bus_ops *VAR_1)
{
 unsigned long VAR_2;


 FUNC_2(VAR_0, VAR_1, 0, 0xb0);
 FUNC_2(VAR_0, VAR_1, 1, 0x00);


 FUNC_2(VAR_0, VAR_1, 0, 0xb1);
 FUNC_2(VAR_0, VAR_1, 1, 0x00);


 FUNC_2(VAR_0, VAR_1, 0, 0xbf);
 FUNC_0(50);


 FUNC_1(VAR_0, VAR_1);


 VAR_2 = ((FUNC_1(VAR_0, VAR_1) & 0xff) << 24);
 VAR_2 |= ((FUNC_1(VAR_0, VAR_1) & 0xff) << 16);
 VAR_2 |= ((FUNC_1(VAR_0, VAR_1) & 0xff) << 8);
 VAR_2 |= (FUNC_1(VAR_0, VAR_1) & 0xff);

 return VAR_2;
}
