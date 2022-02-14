
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ssb_mipscore {int nr_serial_ports; int serial_ports; TYPE_1__* dev; } ;
struct TYPE_6__ {scalar_t__ dev; } ;
struct TYPE_5__ {scalar_t__ dev; } ;
struct ssb_bus {TYPE_3__ chipco; TYPE_2__ extif; } ;
struct TYPE_4__ {struct ssb_bus* bus; } ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2(struct ssb_mipscore *VAR_0)
{
 struct ssb_bus *VAR_1 = VAR_0->dev->bus;

 if (VAR_1->extif.dev)
  VAR_0->nr_serial_ports = FUNC_1(&VAR_1->extif, VAR_0->serial_ports);
 else if (VAR_1->chipco.dev)
  VAR_0->nr_serial_ports = FUNC_0(&VAR_1->chipco, VAR_0->serial_ports);
 else
  VAR_0->nr_serial_ports = 0;
}
