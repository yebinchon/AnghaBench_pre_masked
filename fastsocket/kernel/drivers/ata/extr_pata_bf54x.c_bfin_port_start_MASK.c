
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int dev; scalar_t__ mwdma_mask; scalar_t__ udma_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct ata_port *VAR_2)
{
 FUNC_0(VAR_2->dev, "in atapi port start\n");
 if (!(VAR_2->udma_mask || VAR_2->mwdma_mask))
  return 0;

 if (FUNC_3(VAR_0, "BFIN ATAPI RX DMA") >= 0) {
  if (FUNC_3(VAR_1,
   "BFIN ATAPI TX DMA") >= 0)
   return 0;

  FUNC_2(VAR_0);
 }

 VAR_2->udma_mask = 0;
 VAR_2->mwdma_mask = 0;
 FUNC_1(VAR_2->dev, "Unable to request ATAPI DMA!"
  " Continue in PIO mode.\n");

 return 0;
}
