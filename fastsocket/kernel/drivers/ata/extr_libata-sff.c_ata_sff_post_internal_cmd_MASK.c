
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_queued_cmd {struct ata_port* ap; } ;
struct TYPE_2__ {scalar_t__ bmdma_addr; } ;
struct ata_port {int lock; TYPE_1__ ioaddr; } ;


 int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

void FUNC_3(struct ata_queued_cmd *VAR_0)
{
 struct ata_port *VAR_1 = VAR_0->ap;
 unsigned long VAR_2;

 FUNC_1(VAR_1->lock, VAR_2);

 if (VAR_1->ioaddr.bmdma_addr)
  FUNC_0(VAR_0);

 FUNC_2(VAR_1->lock, VAR_2);
}
