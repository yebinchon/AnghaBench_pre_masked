
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_host_template {int dummy; } ;
struct TYPE_4__ {int desc; } ;
struct TYPE_3__ {TYPE_2__ eh_info; } ;
struct ata_port {scalar_t__ cbl; int flags; TYPE_1__ link; int udma_mask; int mwdma_mask; int pio_mask; TYPE_1__* slave_link; int print_id; } ;
struct ata_host {int flags; int n_ports; struct ata_port** ports; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (int ,struct ata_port*) ;
 int FUNC_2 (struct ata_host*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct ata_port*) ;
 int FUNC_7 (struct ata_port*,int ,char*,...) ;
 int VAR_8 ;
 int FUNC_8 (struct ata_host*,struct scsi_host_template*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,char*) ;
 int FUNC_11 (struct ata_port*) ;
 int FUNC_12 (TYPE_1__*) ;

int FUNC_13(struct ata_host *VAR_9, struct scsi_host_template *VAR_10)
{
 int VAR_11, VAR_12;


 if (!(VAR_9->flags & VAR_3)) {
  FUNC_10(VAR_5, VAR_9->dev,
      "BUG: trying to register unstarted host\n");
  FUNC_0(1);
  return -VAR_4;
 }





 for (VAR_11 = VAR_9->n_ports; VAR_9->ports[VAR_11]; VAR_11++)
  FUNC_11(VAR_9->ports[VAR_11]);


 for (VAR_11 = 0; VAR_11 < VAR_9->n_ports; VAR_11++)
  VAR_9->ports[VAR_11]->print_id = FUNC_9(&VAR_8);

 VAR_12 = FUNC_8(VAR_9, VAR_10);
 if (VAR_12)
  return VAR_12;


 FUNC_2(VAR_9);


 for (VAR_11 = 0; VAR_11 < VAR_9->n_ports; VAR_11++) {
  struct ata_port *VAR_13 = VAR_9->ports[VAR_11];
  unsigned long VAR_14;


  if (VAR_13->cbl == VAR_0 && (VAR_13->flags & VAR_2))
   VAR_13->cbl = VAR_1;


  FUNC_12(&VAR_13->link);
  if (VAR_13->slave_link)
   FUNC_12(VAR_13->slave_link);


  VAR_14 = FUNC_5(VAR_13->pio_mask, VAR_13->mwdma_mask,
           VAR_13->udma_mask);

  if (!FUNC_6(VAR_13)) {
   FUNC_7(VAR_13, VAR_6,
     "%cATA max %s %s\n",
     (VAR_13->flags & VAR_2) ? 'S' : 'P',
     FUNC_4(VAR_14),
     VAR_13->link.eh_info.desc);
   FUNC_3(&VAR_13->link.eh_info);
  } else
   FUNC_7(VAR_13, VAR_6, "DUMMY\n");
 }


 for (VAR_11 = 0; VAR_11 < VAR_9->n_ports; VAR_11++) {
  struct ata_port *VAR_15 = VAR_9->ports[VAR_11];
  FUNC_1(VAR_7, VAR_15);
 }

 return 0;
}
