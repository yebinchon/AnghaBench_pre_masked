
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ushort ;
struct scsi_device {int id; scalar_t__ lun; TYPE_1__* host; scalar_t__ tagged_supported; scalar_t__ sdtr; } ;
struct TYPE_8__ {int use_tagged_qng; int init_sdtr; int* max_dvc_qng; int iop_base; TYPE_2__* cfg; } ;
struct TYPE_7__ {int sdtr_enable; int cmd_qng_enabled; int can_tagged_qng; int disc_enable; int* max_tag_qng; } ;
struct TYPE_6__ {int cmd_per_lun; } ;
typedef int ASC_SCSI_BIT_ID_TYPE ;
typedef TYPE_3__ ASC_DVC_VAR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,struct scsi_device*) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (struct scsi_device*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct scsi_device *VAR_5, ASC_DVC_VAR *VAR_6)
{
 ASC_SCSI_BIT_ID_TYPE VAR_7 = 1 << VAR_5->id;
 ASC_SCSI_BIT_ID_TYPE VAR_8 = VAR_6->use_tagged_qng;

 if (VAR_5->lun == 0) {
  ASC_SCSI_BIT_ID_TYPE VAR_9 = VAR_6->init_sdtr;
  if ((VAR_6->cfg->sdtr_enable & VAR_7) && VAR_5->sdtr) {
   VAR_6->init_sdtr |= VAR_7;
  } else {
   VAR_6->init_sdtr &= ~VAR_7;
  }

  if (VAR_9 != VAR_6->init_sdtr)
   FUNC_0(VAR_6, VAR_5);
 }

 if (VAR_5->tagged_supported) {
  if (VAR_6->cfg->cmd_qng_enabled & VAR_7) {
   if (VAR_5->lun == 0) {
    VAR_6->cfg->can_tagged_qng |= VAR_7;
    VAR_6->use_tagged_qng |= VAR_7;
   }
   FUNC_2(VAR_5, VAR_4,
      VAR_6->max_dvc_qng[VAR_5->id]);
  }
 } else {
  if (VAR_5->lun == 0) {
   VAR_6->cfg->can_tagged_qng &= ~VAR_7;
   VAR_6->use_tagged_qng &= ~VAR_7;
  }
  FUNC_2(VAR_5, 0, VAR_5->host->cmd_per_lun);
 }

 if ((VAR_5->lun == 0) &&
     (VAR_8 != VAR_6->use_tagged_qng)) {
  FUNC_1(VAR_6->iop_base, VAR_1,
     VAR_6->cfg->disc_enable);
  FUNC_1(VAR_6->iop_base, VAR_3,
     VAR_6->use_tagged_qng);
  FUNC_1(VAR_6->iop_base, VAR_0,
     VAR_6->cfg->can_tagged_qng);

  VAR_6->max_dvc_qng[VAR_5->id] =
     VAR_6->cfg->max_tag_qng[VAR_5->id];
  FUNC_1(VAR_6->iop_base,
     (ushort)(VAR_2 + VAR_5->id),
     VAR_6->max_dvc_qng[VAR_5->id]);
 }
}
