
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {scalar_t__ udma_mask; scalar_t__ mwdma_mask; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_2)
{
 FUNC_0(VAR_2->dev, "in atapi port stop\n");
 if (VAR_2->udma_mask != 0 || VAR_2->mwdma_mask != 0) {
  FUNC_1(VAR_0);
  FUNC_1(VAR_1);
 }
}
