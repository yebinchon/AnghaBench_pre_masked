
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct Scsi_Host {int dma_channel; scalar_t__ irq; } ;
typedef int gdth_msg_str ;
struct TYPE_5__ {scalar_t__ ccb_phys; int pdev; int msg_phys; scalar_t__ pmsg; int scratch_phys; scalar_t__ pscratch; int coal_stat_phys; scalar_t__ coal_stat; int * sdev; struct Scsi_Host* shost; } ;
typedef TYPE_1__ gdth_ha_str ;
typedef int gdth_coal_status ;
typedef int gdth_cmd_str ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int,scalar_t__,int ) ;
 int FUNC_5 (int ,scalar_t__,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct Scsi_Host*) ;
 int FUNC_8 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_9(gdth_ha_str *VAR_3)
{
 struct Scsi_Host *VAR_4 = VAR_3->shost;

 FUNC_0(("gdth_remove_one()\n"));

 FUNC_8(VAR_4);

 FUNC_3(VAR_3);

 if (VAR_3->sdev) {
  FUNC_6(VAR_3->sdev);
  VAR_3->sdev = ((void*)0);
 }

 if (VAR_4->irq)
  FUNC_2(VAR_4->irq,VAR_3);
 if (VAR_3->pscratch)
  FUNC_4(VAR_3->pdev, VAR_0,
   VAR_3->pscratch, VAR_3->scratch_phys);
 if (VAR_3->pmsg)
  FUNC_4(VAR_3->pdev, sizeof(gdth_msg_str),
   VAR_3->pmsg, VAR_3->msg_phys);
 if (VAR_3->ccb_phys)
  FUNC_5(VAR_3->pdev,VAR_3->ccb_phys,
   sizeof(gdth_cmd_str),VAR_2);

 FUNC_7(VAR_4);
}
