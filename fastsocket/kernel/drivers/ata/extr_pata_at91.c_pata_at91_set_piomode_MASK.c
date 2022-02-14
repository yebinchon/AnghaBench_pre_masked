
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_timing {int dummy; } ;
struct ata_port {int dev; TYPE_1__* host; } ;
struct ata_device {int pio_mode; } ;
struct at91_ide_info {int dummy; } ;
struct TYPE_2__ {struct at91_ide_info* private_data; } ;


 int FUNC_0 (struct ata_device*,int ,struct ata_timing*,int,int ) ;
 int FUNC_1 (int ,char*,int) ;
 struct ata_timing VAR_0 ;
 int FUNC_2 (struct at91_ide_info*) ;
 int FUNC_3 (int ,struct at91_ide_info*,struct ata_timing*) ;

__attribute__((used)) static void FUNC_4(struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 struct at91_ide_info *VAR_3 = VAR_1->host->private_data;
 struct ata_timing VAR_4;
 int VAR_5;


 VAR_5 = FUNC_0(VAR_2, VAR_2->pio_mode, &VAR_4, 1000, 0);
 if (VAR_5) {
  FUNC_1(VAR_1->dev, "Failed to compute ATA timing %d, 				set PIO_0 timing\n", VAR_5);

  FUNC_3(VAR_1->dev, VAR_3, &VAR_0);
 } else {
  FUNC_3(VAR_1->dev, VAR_3, &VAR_4);
 }


 FUNC_2(VAR_3);

 return;
}
