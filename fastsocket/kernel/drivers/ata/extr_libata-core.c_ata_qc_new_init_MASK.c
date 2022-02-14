
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_queued_cmd {struct ata_device* dev; struct ata_port* ap; int * scsicmd; } ;
struct ata_port {int dummy; } ;
struct ata_device {TYPE_1__* link; } ;
struct TYPE_2__ {struct ata_port* ap; } ;


 struct ata_queued_cmd* FUNC_0 (struct ata_port*) ;
 int FUNC_1 (struct ata_queued_cmd*) ;

struct ata_queued_cmd *FUNC_2(struct ata_device *VAR_0)
{
 struct ata_port *VAR_1 = VAR_0->link->ap;
 struct ata_queued_cmd *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2) {
  VAR_2->scsicmd = ((void*)0);
  VAR_2->ap = VAR_1;
  VAR_2->dev = VAR_0;

  FUNC_1(VAR_2);
 }

 return VAR_2;
}
