
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pdc_port_priv {int pkt; int pkt_dma; } ;
struct device {int dummy; } ;
struct ata_port {struct pdc_port_priv* private_data; TYPE_1__* host; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_port*) ;
 struct pdc_port_priv* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct device*,int,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct ata_port *VAR_2)
{
 struct device *VAR_3 = VAR_2->host->dev;
 struct pdc_port_priv *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_1(VAR_3, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->pkt = FUNC_2(VAR_3, 128, &VAR_4->pkt_dma, VAR_1);
 if (!VAR_4->pkt)
  return -VAR_0;

 VAR_2->private_data = VAR_4;

 return 0;
}
