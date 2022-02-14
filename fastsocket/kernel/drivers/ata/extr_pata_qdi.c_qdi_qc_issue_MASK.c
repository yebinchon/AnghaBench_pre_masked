
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qdi_data {scalar_t__* clock; scalar_t__ last; int timing; } ;
struct ata_queued_cmd {struct ata_device* dev; struct ata_port* ap; } ;
struct ata_port {TYPE_1__* host; } ;
struct ata_device {size_t devno; scalar_t__ pio_mode; } ;
struct TYPE_2__ {struct qdi_data* private_data; } ;


 unsigned int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct ata_queued_cmd *VAR_0)
{
 struct ata_port *VAR_1 = VAR_0->ap;
 struct ata_device *VAR_2 = VAR_0->dev;
 struct qdi_data *VAR_3 = VAR_1->host->private_data;

 if (VAR_3->clock[VAR_2->devno] != VAR_3->last) {
  if (VAR_2->pio_mode) {
   VAR_3->last = VAR_3->clock[VAR_2->devno];
   FUNC_1(VAR_3->clock[VAR_2->devno], VAR_3->timing);
  }
 }
 return FUNC_0(VAR_0);
}
