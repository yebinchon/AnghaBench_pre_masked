
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct ps3_vuart_port_driver {int (* work ) (struct ps3_system_bus_device*) ;} ;
struct ps3_system_bus_device {int dummy; } ;


 int FUNC_0 (int) ;
 struct ps3_vuart_port_driver* FUNC_1 (struct ps3_system_bus_device*) ;
 struct ps3_system_bus_device* FUNC_2 (struct work_struct*) ;
 int FUNC_3 (struct ps3_system_bus_device*) ;

__attribute__((used)) static void FUNC_4(struct work_struct *VAR_0)
{
 struct ps3_system_bus_device *VAR_1 =
  FUNC_2(VAR_0);
 struct ps3_vuart_port_driver *VAR_2 =
  FUNC_1(VAR_1);

 FUNC_0(!VAR_2);
 VAR_2->work(VAR_1);
}
