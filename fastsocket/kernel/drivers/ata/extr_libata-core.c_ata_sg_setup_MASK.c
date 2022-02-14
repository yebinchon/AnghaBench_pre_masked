
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_queued_cmd {unsigned int n_elem; unsigned int orig_n_elem; int flags; int dma_dir; int sg; struct ata_port* ap; } ;
struct ata_port {int dev; int print_id; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (char*,int ) ;
 unsigned int FUNC_2 (int ,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct ata_queued_cmd *VAR_1)
{
 struct ata_port *VAR_2 = VAR_1->ap;
 unsigned int VAR_3;

 FUNC_1("ENTER, ata%u\n", VAR_2->print_id);

 VAR_3 = FUNC_2(VAR_2->dev, VAR_1->sg, VAR_1->n_elem, VAR_1->dma_dir);
 if (VAR_3 < 1)
  return -1;

 FUNC_0("%d sg elements mapped\n", VAR_3);
 VAR_1->orig_n_elem = VAR_1->n_elem;
 VAR_1->n_elem = VAR_3;
 VAR_1->flags |= VAR_0;

 return 0;
}
