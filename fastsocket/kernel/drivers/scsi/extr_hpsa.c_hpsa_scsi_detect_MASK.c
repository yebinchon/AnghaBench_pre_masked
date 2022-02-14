
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctlr_info {size_t intr_mode; int ctlr; TYPE_1__* pdev; int * intr; struct Scsi_Host* scsi_host; int maxsgentries; int nr_cmds; } ;
struct Scsi_Host {int this_id; int max_channel; unsigned long* hostdata; int irq; int unique_id; int sg_tablesize; int cmd_per_lun; int can_queue; void* max_id; void* max_lun; int max_cmd_len; scalar_t__ n_io_port; scalar_t__ io_port; } ;
typedef int h ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct Scsi_Host*,int *) ;
 struct Scsi_Host* FUNC_2 (int *,int) ;
 int FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_5(struct ctlr_info *VAR_4)
{
 struct Scsi_Host *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(&VAR_3, sizeof(VAR_4));
 if (VAR_5 == ((void*)0))
  goto fail;

 VAR_5->io_port = 0;
 VAR_5->n_io_port = 0;
 VAR_5->this_id = -1;
 VAR_5->max_channel = 3;
 VAR_5->max_cmd_len = VAR_2;
 VAR_5->max_lun = VAR_1;
 VAR_5->max_id = VAR_1;
 VAR_5->can_queue = VAR_4->nr_cmds;
 VAR_5->cmd_per_lun = VAR_4->nr_cmds;
 VAR_5->sg_tablesize = VAR_4->maxsgentries;
 VAR_4->scsi_host = VAR_5;
 VAR_5->hostdata[0] = (unsigned long) VAR_4;
 VAR_5->irq = VAR_4->intr[VAR_4->intr_mode];
 VAR_5->unique_id = VAR_5->irq;
 VAR_6 = FUNC_1(VAR_5, &VAR_4->pdev->dev);
 if (VAR_6)
  goto fail_host_put;
 FUNC_4(VAR_5);
 return 0;

 fail_host_put:
 FUNC_0(&VAR_4->pdev->dev, "hpsa_scsi_detect: scsi_add_host"
  " failed for controller %d\n", VAR_4->ctlr);
 FUNC_3(VAR_5);
 return VAR_6;
 fail:
 FUNC_0(&VAR_4->pdev->dev, "hpsa_scsi_detect: scsi_host_alloc"
  " failed for controller %d\n", VAR_4->ctlr);
 return -VAR_0;
}
