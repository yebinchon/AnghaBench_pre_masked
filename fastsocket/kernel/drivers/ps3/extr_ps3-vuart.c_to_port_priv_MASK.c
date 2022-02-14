
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps3_vuart_port_priv {int dummy; } ;
struct ps3_system_bus_device {scalar_t__ driver_priv; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static struct ps3_vuart_port_priv *FUNC_1(
 struct ps3_system_bus_device *VAR_0)
{
 FUNC_0(!VAR_0);
 FUNC_0(!VAR_0->driver_priv);
 return (struct ps3_vuart_port_priv *)VAR_0->driver_priv;
}
