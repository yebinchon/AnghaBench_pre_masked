
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int dummy; } ;
struct bnx2fc_cmd {TYPE_1__* bd_tbl; struct scsi_cmnd* sc_cmd; } ;
struct TYPE_2__ {scalar_t__ bd_valid; } ;


 int FUNC_0 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_1(struct bnx2fc_cmd *VAR_0)
{
 struct scsi_cmnd *VAR_1 = VAR_0->sc_cmd;

 if (VAR_0->bd_tbl->bd_valid && VAR_1) {
  FUNC_0(VAR_1);
  VAR_0->bd_tbl->bd_valid = 0;
 }
}
