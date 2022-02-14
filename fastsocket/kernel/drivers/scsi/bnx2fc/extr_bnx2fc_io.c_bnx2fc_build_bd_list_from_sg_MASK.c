
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int dummy; } ;
struct fcoe_bd_ctx {scalar_t__ flags; scalar_t__ buf_len; scalar_t__ buf_addr_hi; scalar_t__ buf_addr_lo; } ;
struct bnx2fc_cmd {TYPE_1__* bd_tbl; struct scsi_cmnd* sc_cmd; } ;
struct TYPE_2__ {int bd_valid; struct fcoe_bd_ctx* bd_tbl; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2fc_cmd*) ;
 scalar_t__ FUNC_1 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_2(struct bnx2fc_cmd *VAR_1)
{
 struct scsi_cmnd *VAR_2 = VAR_1->sc_cmd;
 struct fcoe_bd_ctx *VAR_3 = VAR_1->bd_tbl->bd_tbl;
 int VAR_4;

 if (FUNC_1(VAR_2)) {
  VAR_4 = FUNC_0(VAR_1);
  if (VAR_4 == 0)
   return -VAR_0;
 } else {
  VAR_4 = 0;
  VAR_3[0].buf_addr_lo = VAR_3[0].buf_addr_hi = 0;
  VAR_3[0].buf_len = VAR_3[0].flags = 0;
 }
 VAR_1->bd_tbl->bd_valid = VAR_4;

 return 0;
}
