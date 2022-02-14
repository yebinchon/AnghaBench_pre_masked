
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; TYPE_1__* drive; } ;
struct pata_acpi {TYPE_2__ gtm; } ;
struct ata_timing {int cycle; } ;
struct ata_port {struct pata_acpi* private_data; } ;
struct ata_device {int devno; int pio_mode; } ;
struct TYPE_4__ {int pio; } ;


 int FUNC_0 (struct ata_port*,TYPE_2__*) ;
 int FUNC_1 (struct ata_port*,TYPE_2__*) ;
 struct ata_timing* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_0, struct ata_device *VAR_1)
{
 int VAR_2 = VAR_1->devno;
 struct pata_acpi *VAR_3 = VAR_0->private_data;
 const struct ata_timing *VAR_4;

 if (!(VAR_3->gtm.flags & 0x10))
  VAR_2 = 0;


 VAR_4 = FUNC_2(VAR_1->pio_mode);
 VAR_3->gtm.drive[VAR_2].pio = VAR_4->cycle;
 FUNC_1(VAR_0, &VAR_3->gtm);

 FUNC_0(VAR_0, &VAR_3->gtm);
}
