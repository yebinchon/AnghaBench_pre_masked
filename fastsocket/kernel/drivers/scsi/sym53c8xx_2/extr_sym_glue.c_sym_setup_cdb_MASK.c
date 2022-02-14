
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sym_hcb {int dummy; } ;
struct TYPE_3__ {int size; int addr; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;
struct sym_ccb {TYPE_2__ phys; int cdb_buf; } ;
struct scsi_cmnd {int cmd_len; int cmnd; } ;


 int FUNC_0 (struct sym_ccb*,int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_3(struct sym_hcb *VAR_1, struct scsi_cmnd *VAR_2, struct sym_ccb *VAR_3)
{
 FUNC_2(VAR_3->cdb_buf, VAR_2->cmnd, VAR_2->cmd_len);

 VAR_3->phys.cmd.addr = FUNC_0(VAR_3, VAR_0[0]);
 VAR_3->phys.cmd.size = FUNC_1(VAR_2->cmd_len);

 return 0;
}
