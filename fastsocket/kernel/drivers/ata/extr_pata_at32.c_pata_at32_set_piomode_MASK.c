
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_timing {int dummy; } ;
struct ata_port {int dev; TYPE_1__* host; } ;
struct ata_device {int pio_mode; } ;
struct at32_ide_info {int dummy; } ;
struct TYPE_2__ {struct at32_ide_info* private_data; } ;


 int FUNC_0 (struct ata_device*,int ,struct ata_timing*,int,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,struct at32_ide_info*,struct ata_timing*) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_0, struct ata_device *VAR_1)
{
 struct ata_timing VAR_2;
 struct at32_ide_info *VAR_3 = VAR_0->host->private_data;

 int VAR_4;


 VAR_4 = FUNC_0(VAR_1, VAR_1->pio_mode, &VAR_2, 1000, 0);
 if (VAR_4) {
  FUNC_1(VAR_0->dev, "Failed to compute ATA timing %d\n", VAR_4);
  return;
 }


 VAR_4 = FUNC_2(VAR_0->dev, VAR_3, &VAR_2);
 if (VAR_4) {
  FUNC_1(VAR_0->dev, "Failed to setup ATA timing %d\n", VAR_4);
  return;
 }
}
