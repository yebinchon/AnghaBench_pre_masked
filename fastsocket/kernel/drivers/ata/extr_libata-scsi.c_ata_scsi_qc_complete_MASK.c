
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct scsi_cmnd {int* cmnd; int result; } ;
struct ata_queued_cmd {scalar_t__ err_mask; int (* scsidone ) (struct scsi_cmnd*) ;int result_tf; struct scsi_cmnd* scsicmd; struct ata_port* ap; } ;
struct ata_port {int print_id; TYPE_1__* ops; } ;
struct TYPE_2__ {int error_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ata_queued_cmd*) ;
 int FUNC_2 (struct ata_queued_cmd*) ;
 int FUNC_3 (struct ata_queued_cmd*) ;
 int FUNC_4 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_5(struct ata_queued_cmd *VAR_3)
{
 struct ata_port *VAR_4 = VAR_3->ap;
 struct scsi_cmnd *VAR_5 = VAR_3->scsicmd;
 u8 *VAR_6 = VAR_5->cmnd;
 int VAR_7 = (VAR_3->err_mask != 0);
 if (((VAR_6[0] == VAR_1) || (VAR_6[0] == VAR_0)) &&
     ((VAR_6[2] & 0x20) || VAR_7)) {
  FUNC_2(VAR_3);
 } else {
  if (!VAR_7) {
   VAR_5->result = VAR_2;
  } else {






   FUNC_1(VAR_3);
  }
 }

 if (VAR_7 && !VAR_4->ops->error_handler)
  FUNC_0(VAR_4->print_id, &VAR_3->result_tf);

 VAR_3->scsidone(VAR_5);

 FUNC_3(VAR_3);
}
