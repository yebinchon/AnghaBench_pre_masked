
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int lock; } ;
struct ata_link {scalar_t__ sata_spd; int hw_sata_spd_limit; int sata_spd_limit; struct ata_port* ap; } ;
struct ata_device {void* udma_mask; void* mwdma_mask; void* pio_mask; scalar_t__ horkage; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 struct ata_link* FUNC_0 (struct ata_device*) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

void FUNC_4(struct ata_device *VAR_4)
{
 struct ata_link *VAR_5 = FUNC_0(VAR_4);
 struct ata_port *VAR_6 = VAR_5->ap;
 unsigned long VAR_7;


 VAR_5->sata_spd_limit = VAR_5->hw_sata_spd_limit;
 VAR_5->sata_spd = 0;





 FUNC_2(VAR_6->lock, VAR_7);
 VAR_4->flags &= ~VAR_2;
 VAR_4->horkage = 0;
 FUNC_3(VAR_6->lock, VAR_7);

 FUNC_1((void *)VAR_4 + VAR_0, 0,
        VAR_1 - VAR_0);
 VAR_4->pio_mask = VAR_3;
 VAR_4->mwdma_mask = VAR_3;
 VAR_4->udma_mask = VAR_3;
}
