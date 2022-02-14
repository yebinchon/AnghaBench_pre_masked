
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps3_vuart_port_priv {int interrupt_mask; } ;
struct ps3_system_bus_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ps3_system_bus_device*,int) ;
 struct ps3_vuart_port_priv* FUNC_1 (struct ps3_system_bus_device*) ;

int FUNC_2(struct ps3_system_bus_device *VAR_1)
{
 struct ps3_vuart_port_priv *VAR_2 = FUNC_1(VAR_1);

 return (VAR_2->interrupt_mask & VAR_0)
  ? FUNC_0(VAR_1, VAR_2->interrupt_mask
  & ~VAR_0) : 0;
}
