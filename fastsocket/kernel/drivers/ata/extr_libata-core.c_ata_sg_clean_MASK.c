
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct ata_queued_cmd {int dma_dir; struct scatterlist* sg; int flags; int orig_n_elem; scalar_t__ n_elem; struct ata_port* ap; } ;
struct ata_port {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct scatterlist*,int ,int) ;

void FUNC_3(struct ata_queued_cmd *VAR_1)
{
 struct ata_port *VAR_2 = VAR_1->ap;
 struct scatterlist *VAR_3 = VAR_1->sg;
 int VAR_4 = VAR_1->dma_dir;

 FUNC_1(VAR_3 == ((void*)0));

 FUNC_0("unmapping %u sg elements\n", VAR_1->n_elem);

 if (VAR_1->n_elem)
  FUNC_2(VAR_2->dev, VAR_3, VAR_1->orig_n_elem, VAR_4);

 VAR_1->flags &= ~VAR_0;
 VAR_1->sg = ((void*)0);
}
