
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_queued_cmd {scalar_t__ dma_dir; struct ata_port* ap; } ;
struct TYPE_4__ {int data_addr; } ;
struct ata_port {TYPE_2__ ioaddr; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* sff_check_status ) (struct ata_port*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_port*,int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ata_port*) ;

void FUNC_3(struct ata_queued_cmd *VAR_3)
{
 int VAR_4;
 struct ata_port *VAR_5;


 if (VAR_3 == ((void*)0) || VAR_3->dma_dir == VAR_1)
  return;

 VAR_5 = VAR_3->ap;

 for (VAR_4 = 0; (VAR_5->ops->sff_check_status(VAR_5) & VAR_0)
      && VAR_4 < 32768; VAR_4++)
  FUNC_1(VAR_5->ioaddr.data_addr);


 if (VAR_4)
  FUNC_0(VAR_5, VAR_2,
   "drained %d bytes to clear DRQ.\n", VAR_4);

}
