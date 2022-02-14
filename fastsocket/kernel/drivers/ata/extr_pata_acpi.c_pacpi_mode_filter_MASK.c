
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pata_acpi {unsigned long* mask; } ;
struct ata_device {size_t devno; TYPE_2__* link; } ;
struct TYPE_4__ {TYPE_1__* ap; } ;
struct TYPE_3__ {struct pata_acpi* private_data; } ;


 unsigned long FUNC_0 (struct ata_device*,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(struct ata_device *VAR_0, unsigned long VAR_1)
{
 struct pata_acpi *VAR_2 = VAR_0->link->ap->private_data;
 return FUNC_0(VAR_0, VAR_1 & VAR_2->mask[VAR_0->devno]);
}
