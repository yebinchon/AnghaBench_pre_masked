
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pdc_host_priv {unsigned int hdma_prod; int doing_hdma; TYPE_1__* hdma; } ;
struct ata_queued_cmd {struct ata_port* ap; } ;
struct ata_port {TYPE_2__* host; } ;
struct TYPE_4__ {struct pdc_host_priv* private_data; } ;
struct TYPE_3__ {unsigned int seq; int pkt_ofs; struct ata_queued_cmd* qc; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct ata_queued_cmd*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_1(struct ata_queued_cmd *VAR_1,
    unsigned int VAR_2,
    u32 VAR_3)
{
 struct ata_port *VAR_4 = VAR_1->ap;
 struct pdc_host_priv *VAR_5 = VAR_4->host->private_data;
 unsigned int VAR_6 = VAR_5->hdma_prod & VAR_0;

 if (!VAR_5->doing_hdma) {
  FUNC_0(VAR_1, VAR_2, VAR_3);
  VAR_5->doing_hdma = 1;
  return;
 }

 VAR_5->hdma[VAR_6].qc = VAR_1;
 VAR_5->hdma[VAR_6].seq = VAR_2;
 VAR_5->hdma[VAR_6].pkt_ofs = VAR_3;
 VAR_5->hdma_prod++;
}
