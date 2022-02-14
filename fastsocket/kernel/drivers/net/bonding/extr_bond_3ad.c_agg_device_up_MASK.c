
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port {TYPE_1__* slave; } ;
struct aggregator {struct port* lag_ports; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const struct aggregator *VAR_0)
{
 struct port *VAR_1 = VAR_0->lag_ports;
 if (!VAR_1)
  return 0;
 return (FUNC_1(VAR_1->slave->dev) &&
  FUNC_0(VAR_1->slave->dev));
}
