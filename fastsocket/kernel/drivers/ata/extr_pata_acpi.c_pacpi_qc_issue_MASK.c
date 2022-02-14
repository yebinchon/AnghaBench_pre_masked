
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct pata_acpi {struct ata_device* last; TYPE_1__ gtm; } ;
struct ata_queued_cmd {struct ata_device* dev; struct ata_port* ap; } ;
struct ata_port {struct pata_acpi* private_data; } ;
struct ata_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct ata_device*) ;
 unsigned int FUNC_1 (struct ata_queued_cmd*) ;
 int FUNC_2 (struct ata_port*,struct ata_device*) ;
 int FUNC_3 (struct ata_port*,struct ata_device*) ;

__attribute__((used)) static unsigned int FUNC_4(struct ata_queued_cmd *VAR_0)
{
 struct ata_port *VAR_1 = VAR_0->ap;
 struct ata_device *VAR_2 = VAR_0->dev;
 struct pata_acpi *VAR_3 = VAR_1->private_data;

 if (VAR_3->gtm.flags & 0x10)
  return FUNC_1(VAR_0);

 if (VAR_2 != VAR_3->last) {
  FUNC_3(VAR_1, VAR_2);
  if (FUNC_0(VAR_2))
   FUNC_2(VAR_1, VAR_2);
  VAR_3->last = VAR_2;
 }
 return FUNC_1(VAR_0);
}
