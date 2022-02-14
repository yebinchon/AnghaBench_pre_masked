
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct scsi_lun {int dummy; } ;
struct scsi_cmnd {int cmd_len; scalar_t__ cmnd; TYPE_1__* device; } ;
struct TYPE_6__ {scalar_t__ cdb; void** lun; } ;
struct bnx2i_cmd {TYPE_3__ req; TYPE_2__* scsi_cmd; } ;
typedef int dword ;
struct TYPE_5__ {int cmd_len; } ;
struct TYPE_4__ {int lun; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct scsi_lun*) ;
 int FUNC_3 (int*,void const*,int) ;

__attribute__((used)) static void FUNC_4(struct scsi_cmnd *VAR_0, struct bnx2i_cmd *VAR_1)
{
 u32 VAR_2;
 int VAR_3;
 u8 *VAR_4;
 u32 *VAR_5;
 u32 VAR_6[2];

 FUNC_2(VAR_0->device->lun, (struct scsi_lun *) VAR_6);
 VAR_1->req.lun[0] = FUNC_0(VAR_6[0]);
 VAR_1->req.lun[1] = FUNC_0(VAR_6[1]);

 VAR_3 = VAR_1->scsi_cmd->cmd_len / sizeof(VAR_2);
 VAR_4 = (u8 *) VAR_0->cmnd;
 VAR_5 = (u32 *) VAR_1->req.cdb;
 while (VAR_3--) {
  FUNC_3(&VAR_2, (const void *) VAR_4, 4);
  *VAR_5 = FUNC_1(VAR_2);
  VAR_4 += 4;
  VAR_5++;
 }
 if (VAR_0->cmd_len & 0x3) {
  VAR_2 = (u32) VAR_4[0] | ((u32) VAR_4[1] << 8);
  *VAR_5 = FUNC_1(VAR_2);
 }
}
