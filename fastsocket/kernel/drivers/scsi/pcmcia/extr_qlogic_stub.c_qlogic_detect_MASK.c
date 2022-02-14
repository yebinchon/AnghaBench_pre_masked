
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_host_template {int this_id; int name; } ;
struct qlogicfas408_priv {int qlirq; int qbase; int qinitid; int qinfo; int int_type; struct Scsi_Host* shost; } ;
struct pcmcia_device {int dummy; } ;
struct Scsi_Host {int io_port; int n_io_port; int dma_channel; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct Scsi_Host*) ;
 struct qlogicfas408_priv* FUNC_1 (struct Scsi_Host*) ;
 int VAR_2 ;
 int FUNC_2 (int,int ) ;
 int VAR_3 ;
 int FUNC_3 (int,int,int ) ;
 scalar_t__ FUNC_4 (int,int ,int ,int ,struct Scsi_Host*) ;
 scalar_t__ FUNC_5 (struct Scsi_Host*,int *) ;
 struct Scsi_Host* FUNC_6 (struct scsi_host_template*,int) ;
 int FUNC_7 (struct Scsi_Host*) ;
 int FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (int ,char*,int,int,int,int) ;

__attribute__((used)) static struct Scsi_Host *FUNC_10(struct scsi_host_template *VAR_4,
    struct pcmcia_device *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9;
 struct Scsi_Host *VAR_10;
 struct qlogicfas408_priv *VAR_11;

 VAR_8 = FUNC_2(VAR_6, VAR_0);
 VAR_9 = VAR_4->this_id;
 if (VAR_9 < 0)
  VAR_9 = 7;

 FUNC_3(VAR_6, VAR_9, VAR_0);

 VAR_4->name = VAR_2;
 VAR_10 = FUNC_6(VAR_4, sizeof(struct qlogicfas408_priv));
 if (!VAR_10)
  goto err;
 VAR_10->io_port = VAR_6;
 VAR_10->n_io_port = 16;
 VAR_10->dma_channel = -1;
 if (VAR_7 != -1)
  VAR_10->irq = VAR_7;

 VAR_11 = FUNC_1(VAR_10);
 VAR_11->qlirq = VAR_7;
 VAR_11->qbase = VAR_6;
 VAR_11->qinitid = VAR_9;
 VAR_11->shost = VAR_10;
 VAR_11->int_type = VAR_0;

 if (FUNC_4(VAR_7, VAR_3, 0, VAR_2, VAR_10))
  goto free_scsi_host;

 FUNC_9(VAR_11->qinfo,
  "Qlogicfas Driver version 0.46, chip %02X at %03X, IRQ %d, TPdma:%d",
  VAR_8, VAR_6, VAR_7, VAR_1);

 if (FUNC_5(VAR_10, ((void*)0)))
  goto free_interrupt;

 FUNC_8(VAR_10);

 return VAR_10;

free_interrupt:
 FUNC_0(VAR_7, VAR_10);

free_scsi_host:
 FUNC_7(VAR_10);

err:
 return ((void*)0);
}
