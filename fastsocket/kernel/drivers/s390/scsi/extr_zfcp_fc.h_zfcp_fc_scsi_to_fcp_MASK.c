
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_lun {int dummy; } ;
struct scsi_cmnd {scalar_t__ sc_data_direction; TYPE_1__* device; int cmd_len; int cmnd; } ;
struct fcp_cmnd {int fc_dl; int fc_cdb; int fc_flags; int fc_pri_ta; int fc_lun; } ;
struct TYPE_2__ {int sector_size; int lun; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,struct scsi_lun*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_3 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_4 (struct scsi_cmnd*,char*) ;

__attribute__((used)) static inline
void FUNC_5(struct fcp_cmnd *VAR_7, struct scsi_cmnd *VAR_8)
{
 char VAR_9[2];

 FUNC_0(VAR_8->device->lun, (struct scsi_lun *) &VAR_7->fc_lun);

 if (FUNC_4(VAR_8, VAR_9)) {
  switch (VAR_9[0]) {
  case 129:
   VAR_7->fc_pri_ta |= VAR_4;
   break;
  case 128:
   VAR_7->fc_pri_ta |= VAR_5;
   break;
  };
 } else
  VAR_7->fc_pri_ta = VAR_5;

 if (VAR_8->sc_data_direction == VAR_0)
  VAR_7->fc_flags |= VAR_2;
 if (VAR_8->sc_data_direction == VAR_1)
  VAR_7->fc_flags |= VAR_3;

 FUNC_1(VAR_7->fc_cdb, VAR_8->cmnd, VAR_8->cmd_len);

 VAR_7->fc_dl = FUNC_2(VAR_8);

 if (FUNC_3(VAR_8) == VAR_6)
  VAR_7->fc_dl += VAR_7->fc_dl / VAR_8->device->sector_size * 8;
}
