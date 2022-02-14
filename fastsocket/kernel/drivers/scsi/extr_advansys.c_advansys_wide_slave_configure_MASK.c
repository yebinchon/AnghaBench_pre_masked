
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_device {int id; scalar_t__ lun; TYPE_1__* host; scalar_t__ tagged_supported; scalar_t__ ppr; scalar_t__ sdtr; scalar_t__ wdtr; } ;
struct TYPE_6__ {unsigned short wdtr_able; unsigned short sdtr_able; scalar_t__ chip_type; unsigned short tagqng_able; int max_dvc_qng; int iop_base; } ;
struct TYPE_5__ {int cmd_per_lun; } ;
typedef int AdvPortAddr ;
typedef TYPE_2__ ADV_DVC_VAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned short) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int ,int ,unsigned short) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,int ,unsigned short) ;
 int FUNC_4 (int ,unsigned short) ;
 int FUNC_5 (int ,unsigned short) ;
 int FUNC_6 (struct scsi_device*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct scsi_device *VAR_4, ADV_DVC_VAR *VAR_5)
{
 AdvPortAddr VAR_6 = VAR_5->iop_base;
 unsigned short VAR_7 = 1 << VAR_4->id;

 if (VAR_4->lun == 0) {






  if ((VAR_5->wdtr_able & VAR_7) && VAR_4->wdtr)
   FUNC_5(VAR_6, VAR_7);
  if ((VAR_5->sdtr_able & VAR_7) && VAR_4->sdtr)
   FUNC_4(VAR_6, VAR_7);
  if (VAR_5->chip_type == VAR_0 && VAR_4->ppr)
   FUNC_3(VAR_5, VAR_6, VAR_7);







  if ((VAR_5->tagqng_able & VAR_7) &&
      VAR_4->tagged_supported) {
   unsigned short VAR_8;
   FUNC_0(VAR_6, VAR_2, VAR_8);
   VAR_8 |= VAR_7;
   FUNC_2(VAR_6, VAR_2,
      VAR_8);
   FUNC_1(VAR_6,
      VAR_1 + VAR_4->id,
      VAR_5->max_dvc_qng);
  }
 }

 if ((VAR_5->tagqng_able & VAR_7) && VAR_4->tagged_supported) {
  FUNC_6(VAR_4, VAR_3,
     VAR_5->max_dvc_qng);
 } else {
  FUNC_6(VAR_4, 0, VAR_4->host->cmd_per_lun);
 }
}
