
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int dummy; } ;
struct TYPE_2__ {scalar_t__ bd_valid; } ;
struct bnx2i_cmd {TYPE_1__ io_tbl; struct scsi_cmnd* scsi_cmd; } ;


 int FUNC_0 (struct scsi_cmnd*) ;

void FUNC_1(struct bnx2i_cmd *VAR_0)
{
 struct scsi_cmnd *VAR_1 = VAR_0->scsi_cmd;

 if (VAR_0->io_tbl.bd_valid && VAR_1) {
  FUNC_0(VAR_1);
  VAR_0->io_tbl.bd_valid = 0;
 }
}
