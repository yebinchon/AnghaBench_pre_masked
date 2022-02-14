
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_lun {int dummy; } ;
struct scsi_device {int lun; } ;
struct fcp_cmnd {int fc_tm_flags; int fc_lun; } ;


 int FUNC_0 (int ,struct scsi_lun*) ;

__attribute__((used)) static inline
void FUNC_1(struct fcp_cmnd *VAR_0, struct scsi_device *VAR_1, u8 VAR_2)
{
 FUNC_0(VAR_1->lun, (struct scsi_lun *) &VAR_0->fc_lun);
 VAR_0->fc_tm_flags |= VAR_2;
}
