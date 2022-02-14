
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; TYPE_1__* drive; } ;
struct pata_acpi {TYPE_2__ gtm; } ;
struct ata_timing {int cycle; int udma; } ;
struct ata_port {struct pata_acpi* private_data; } ;
struct ata_device {int devno; scalar_t__ dma_mode; } ;
struct TYPE_4__ {int dma; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ata_port*,TYPE_2__*) ;
 int FUNC_1 (struct ata_port*,TYPE_2__*) ;
 struct ata_timing* FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 int VAR_3 = VAR_2->devno;
 struct pata_acpi *VAR_4 = VAR_1->private_data;
 const struct ata_timing *VAR_5;

 if (!(VAR_4->gtm.flags & 0x10))
  VAR_3 = 0;


 VAR_5 = FUNC_2(VAR_2->dma_mode);
 if (VAR_2->dma_mode >= VAR_0) {
  VAR_4->gtm.drive[VAR_3].dma = VAR_5->udma;
  VAR_4->gtm.flags |= (1 << (2 * VAR_3));
 } else {
  VAR_4->gtm.drive[VAR_3].dma = VAR_5->cycle;
  VAR_4->gtm.flags &= ~(1 << (2 * VAR_3));
 }
 FUNC_1(VAR_1, &VAR_4->gtm);

 FUNC_0(VAR_1, &VAR_4->gtm);
}
