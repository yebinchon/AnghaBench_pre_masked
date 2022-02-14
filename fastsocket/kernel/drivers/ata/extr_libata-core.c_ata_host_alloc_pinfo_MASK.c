
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct ata_port_info {int * port_ops; int link_flags; int flags; int udma_mask; int mwdma_mask; int pio_mask; } ;
struct TYPE_2__ {int flags; } ;
struct ata_port {int * ops; TYPE_1__ link; int flags; int udma_mask; int mwdma_mask; int pio_mask; } ;
struct ata_host {int n_ports; int * ops; struct ata_port** ports; } ;


 int VAR_0 ;
 struct ata_host* FUNC_0 (struct device*,int) ;

struct ata_host *FUNC_1(struct device *VAR_1,
          const struct ata_port_info * const * VAR_2,
          int VAR_3)
{
 const struct ata_port_info *VAR_4;
 struct ata_host *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_0(VAR_1, VAR_3);
 if (!VAR_5)
  return ((void*)0);

 for (VAR_6 = 0, VAR_7 = 0, VAR_4 = ((void*)0); VAR_6 < VAR_5->n_ports; VAR_6++) {
  struct ata_port *VAR_8 = VAR_5->ports[VAR_6];

  if (VAR_2[VAR_7])
   VAR_4 = VAR_2[VAR_7++];

  VAR_8->pio_mask = VAR_4->pio_mask;
  VAR_8->mwdma_mask = VAR_4->mwdma_mask;
  VAR_8->udma_mask = VAR_4->udma_mask;
  VAR_8->flags |= VAR_4->flags;
  VAR_8->link.flags |= VAR_4->link_flags;
  VAR_8->ops = VAR_4->port_ops;

  if (!VAR_5->ops && (VAR_4->port_ops != &VAR_0))
   VAR_5->ops = VAR_4->port_ops;
 }

 return VAR_5;
}
