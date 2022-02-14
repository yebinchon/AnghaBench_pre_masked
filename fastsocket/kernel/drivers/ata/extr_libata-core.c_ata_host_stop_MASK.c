
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct ata_port {TYPE_1__* ops; } ;
struct ata_host {int flags; int n_ports; TYPE_2__* ops; struct ata_port** ports; } ;
struct TYPE_4__ {int (* host_stop ) (struct ata_host*) ;} ;
struct TYPE_3__ {int (* port_stop ) (struct ata_port*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct ata_host* FUNC_1 (struct device*) ;
 int FUNC_2 (struct ata_port*) ;
 int FUNC_3 (struct ata_host*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1, void *VAR_2)
{
 struct ata_host *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 FUNC_0(!(VAR_3->flags & VAR_0));

 for (VAR_4 = 0; VAR_4 < VAR_3->n_ports; VAR_4++) {
  struct ata_port *VAR_5 = VAR_3->ports[VAR_4];

  if (VAR_5->ops->port_stop)
   VAR_5->ops->port_stop(VAR_5);
 }

 if (VAR_3->ops->host_stop)
  VAR_3->ops->host_stop(VAR_3);
}
