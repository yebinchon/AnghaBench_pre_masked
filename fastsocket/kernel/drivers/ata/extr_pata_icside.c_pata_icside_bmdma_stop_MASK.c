
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pata_icside_state {int dma; } ;
struct ata_queued_cmd {struct ata_port* ap; } ;
struct ata_port {TYPE_1__* host; } ;
struct TYPE_2__ {struct pata_icside_state* private_data; } ;


 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ata_queued_cmd *VAR_0)
{
 struct ata_port *VAR_1 = VAR_0->ap;
 struct pata_icside_state *VAR_2 = VAR_1->host->private_data;

 FUNC_1(VAR_2->dma);


 FUNC_0(VAR_1);
}
