
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_queued_cmd {TYPE_1__* ap; } ;
struct ata_port {scalar_t__ qc_active; } ;
struct ata_host {struct ata_port** ports; } ;
struct TYPE_2__ {int port_no; struct ata_host* host; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_queued_cmd*) ;

__attribute__((used)) static int FUNC_1(struct ata_queued_cmd *VAR_1)
{
 struct ata_host *VAR_2 = VAR_1->ap->host;
 struct ata_port *VAR_3 = VAR_2->ports[1 ^ VAR_1->ap->port_no];
 int VAR_4;


 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 != 0)
  return VAR_4;



 if (VAR_3 && VAR_3->qc_active)
  return VAR_0;
 return 0;
}
