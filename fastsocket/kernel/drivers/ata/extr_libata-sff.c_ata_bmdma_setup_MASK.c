
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {unsigned int flags; } ;
struct ata_queued_cmd {TYPE_3__ tf; struct ata_port* ap; } ;
struct TYPE_4__ {scalar_t__ bmdma_addr; } ;
struct ata_port {TYPE_2__* ops; TYPE_1__ ioaddr; int prd_dma; } ;
struct TYPE_5__ {int (* sff_exec_command ) (struct ata_port*,TYPE_3__*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ata_port*,TYPE_3__*) ;

void FUNC_5(struct ata_queued_cmd *VAR_5)
{
 struct ata_port *VAR_6 = VAR_5->ap;
 unsigned int VAR_7 = (VAR_5->tf.flags & VAR_4);
 u8 VAR_8;


 FUNC_3();
 FUNC_1(VAR_6->prd_dma, VAR_6->ioaddr.bmdma_addr + VAR_2);


 VAR_8 = FUNC_0(VAR_6->ioaddr.bmdma_addr + VAR_0);
 VAR_8 &= ~(VAR_3 | VAR_1);
 if (!VAR_7)
  VAR_8 |= VAR_3;
 FUNC_2(VAR_8, VAR_6->ioaddr.bmdma_addr + VAR_0);


 VAR_6->ops->sff_exec_command(VAR_6, &VAR_5->tf);
}
