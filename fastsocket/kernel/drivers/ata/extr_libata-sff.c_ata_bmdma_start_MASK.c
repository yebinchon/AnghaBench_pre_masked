
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ata_queued_cmd {struct ata_port* ap; } ;
struct TYPE_2__ {scalar_t__ bmdma_addr; } ;
struct ata_port {TYPE_1__ ioaddr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct ata_queued_cmd *VAR_2)
{
 struct ata_port *VAR_3 = VAR_2->ap;
 u8 VAR_4;


 VAR_4 = FUNC_0(VAR_3->ioaddr.bmdma_addr + VAR_0);
 FUNC_1(VAR_4 | VAR_1, VAR_3->ioaddr.bmdma_addr + VAR_0);
}
