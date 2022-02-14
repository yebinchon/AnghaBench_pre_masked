
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_queued_cmd {struct ata_device* dev; struct ata_port* ap; } ;
struct ata_port {struct ata_device* private_data; } ;
struct ata_device {scalar_t__ dma_mode; scalar_t__ pio_mode; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (struct ata_port*,struct ata_device*) ;
 int FUNC_2 (struct ata_port*,struct ata_device*) ;

__attribute__((used)) static unsigned int FUNC_3(struct ata_queued_cmd *VAR_1)
{
 struct ata_port *VAR_2 = VAR_1->ap;
 struct ata_device *VAR_3 = VAR_1->dev;

 if (VAR_3 != VAR_2->private_data) {

  if (VAR_3->dma_mode < VAR_0) {
   if (VAR_3->dma_mode)
    FUNC_1(VAR_2, VAR_3);
   else if (VAR_3->pio_mode)
    FUNC_2(VAR_2, VAR_3);
  }
 }
 return FUNC_0(VAR_1);
}
