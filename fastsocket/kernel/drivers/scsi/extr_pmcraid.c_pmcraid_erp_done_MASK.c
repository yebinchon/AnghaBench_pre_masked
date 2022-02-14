
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;int sense_buffer; } ;
struct pmcraid_instance {int pdev; } ;
struct pmcraid_cmd {scalar_t__ sense_buffer_dma; int * sense_buffer; TYPE_3__* ioa_cb; struct pmcraid_instance* drv_inst; struct scsi_cmnd* scsi_cmd; } ;
struct TYPE_5__ {int * cdb; } ;
struct TYPE_4__ {int ioasc; } ;
struct TYPE_6__ {TYPE_2__ ioarcb; TYPE_1__ ioasa; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int ,int *,scalar_t__) ;
 int FUNC_4 (struct pmcraid_cmd*) ;
 int FUNC_5 (int ,struct scsi_cmnd*,char*,int ,int ) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_8(struct pmcraid_cmd *VAR_3)
{
 struct scsi_cmnd *VAR_4 = VAR_3->scsi_cmd;
 struct pmcraid_instance *VAR_5 = VAR_3->drv_inst;
 u32 VAR_6 = FUNC_1(VAR_3->ioa_cb->ioasa.ioasc);

 if (FUNC_0(VAR_6) > 0) {
  VAR_4->result |= (VAR_0 << 16);
  FUNC_5(VAR_1, VAR_4,
       "command CDB[0] = %x failed with IOASC: 0x%08X\n",
       VAR_3->ioa_cb->ioarcb.cdb[0], VAR_6);
 }




 if (VAR_3->sense_buffer != ((void*)0)) {
  FUNC_2(VAR_4->sense_buffer,
         VAR_3->sense_buffer,
         VAR_2);
  FUNC_3(VAR_5->pdev,
        VAR_2,
        VAR_3->sense_buffer, VAR_3->sense_buffer_dma);
  VAR_3->sense_buffer = ((void*)0);
  VAR_3->sense_buffer_dma = 0;
 }

 FUNC_6(VAR_4);
 FUNC_4(VAR_3);
 VAR_4->scsi_done(VAR_4);
}
