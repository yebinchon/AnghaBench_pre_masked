
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_sys_bus_ops {unsigned long (* read_data ) (void*) ;int (* write_index ) (void*,int ) ;} ;


 int FUNC_0 (unsigned short) ;
 int FUNC_1 (void*,int ) ;
 unsigned long FUNC_2 (void*) ;

__attribute__((used)) static unsigned long FUNC_3(void *VAR_0,
    struct sh_mobile_lcdc_sys_bus_ops *VAR_1,
    unsigned short VAR_2)
{
 unsigned long VAR_3;

 VAR_1->write_index(VAR_0, FUNC_0(VAR_2));
 VAR_3 = VAR_1->read_data(VAR_0);
 return ((VAR_3 >> 1) & 0xff) | ((VAR_3 >> 2) & 0xff00);
}
