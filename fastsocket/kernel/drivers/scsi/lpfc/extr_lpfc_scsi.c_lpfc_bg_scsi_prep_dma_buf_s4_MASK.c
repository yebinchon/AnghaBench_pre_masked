
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct sli4_sge {int word2; } ;
struct scsi_cmnd {int sc_data_direction; } ;
struct TYPE_7__ {int fcpi_parm; } ;
struct TYPE_8__ {TYPE_2__ fcpi; } ;
struct TYPE_10__ {TYPE_3__ un; } ;
struct TYPE_6__ {int iocb_flag; TYPE_5__ iocb; } ;
struct lpfc_scsi_buf {int seg_cnt; int prot_seg_cnt; TYPE_1__ cur_iocbq; scalar_t__ fcp_bpl; struct fcp_cmnd* fcp_cmnd; struct scsi_cmnd* pCmd; } ;
struct lpfc_hba {int cfg_sg_seg_cnt; int cfg_total_seg_cnt; TYPE_4__* pcidev; } ;
struct fcp_cmnd {int fcpDl; } ;
struct TYPE_9__ {int dev; } ;
typedef TYPE_5__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct sli4_sge*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,scalar_t__,int) ;
 int FUNC_4 (int *,int ,scalar_t__,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct lpfc_hba*,struct lpfc_scsi_buf*) ;
 int FUNC_7 (struct lpfc_hba*,struct scsi_cmnd*,struct sli4_sge*,int) ;
 int FUNC_8 (struct lpfc_hba*,struct scsi_cmnd*,struct sli4_sge*,int,int) ;
 int FUNC_9 (struct lpfc_hba*,int ,int ,char*,int,...) ;
 int FUNC_10 (struct lpfc_hba*,struct scsi_cmnd*) ;
 int VAR_5 ;
 int FUNC_11 (struct scsi_cmnd*) ;
 int FUNC_12 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_13 (struct scsi_cmnd*) ;
 int FUNC_14 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_15 (struct scsi_cmnd*) ;
 int FUNC_16 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int
FUNC_18(struct lpfc_hba *VAR_6,
  struct lpfc_scsi_buf *VAR_7)
{
 struct scsi_cmnd *VAR_8 = VAR_7->pCmd;
 struct fcp_cmnd *VAR_9 = VAR_7->fcp_cmnd;
 struct sli4_sge *VAR_10 = (struct sli4_sge *)(VAR_7->fcp_bpl);
 IOCB_t *VAR_11 = &VAR_7->cur_iocbq.iocb;
 uint32_t VAR_12 = 0;
 int VAR_13, VAR_14, VAR_15 = VAR_8->sc_data_direction;
 int VAR_16 = 0;
 int VAR_17;





 if (FUNC_15(VAR_8)) {






  VAR_13 = FUNC_3(&VAR_6->pcidev->dev,
     FUNC_16(VAR_8),
     FUNC_15(VAR_8), VAR_15);
  if (FUNC_17(!VAR_13))
   return 1;

  VAR_10 += 1;

  VAR_10->word2 = FUNC_5(VAR_10->word2);
  FUNC_1(VAR_5, VAR_10, 0);
  VAR_10->word2 = FUNC_2(VAR_10->word2);

  VAR_10 += 1;
  VAR_7->seg_cnt = VAR_13;


  if (VAR_7->seg_cnt > VAR_6->cfg_sg_seg_cnt)
   goto err;

  VAR_16 = FUNC_10(VAR_6, VAR_8);

  switch (VAR_16) {
  case 134:

   if ((VAR_7->seg_cnt + 1) > VAR_6->cfg_total_seg_cnt)
    goto err;

   VAR_12 = FUNC_7(VAR_6, VAR_8, VAR_10,
     VAR_13);


   if (VAR_12 < 2)
    goto err;
   break;

  case 136:





   VAR_14 = FUNC_3(&VAR_6->pcidev->dev,
     FUNC_14(VAR_8),
     FUNC_13(VAR_8), VAR_15);
   if (FUNC_17(!VAR_14)) {
    FUNC_11(VAR_8);
    return 1;
   }

   VAR_7->prot_seg_cnt = VAR_14;




   if ((VAR_7->prot_seg_cnt * 3) >
       (VAR_6->cfg_total_seg_cnt - 2))
    goto err;

   VAR_12 = FUNC_8(VAR_6, VAR_8, VAR_10,
     VAR_13, VAR_14);


   if ((VAR_12 < 3) ||
       (VAR_12 > VAR_6->cfg_total_seg_cnt))
    goto err;
   break;

  case 135:
  default:
   FUNC_11(VAR_8);
   VAR_7->seg_cnt = 0;

   FUNC_9(VAR_6, VAR_0, VAR_1,
     "9083 Unexpected protection group %i\n",
     VAR_16);
   return 1;
  }
 }

 switch (FUNC_12(VAR_8)) {
 case 128:
 case 131:
  VAR_7->cur_iocbq.iocb_flag |= VAR_4;
  break;
 case 130:
 case 133:
  VAR_7->cur_iocbq.iocb_flag |= VAR_2;
  break;
 case 129:
 case 132:
  VAR_7->cur_iocbq.iocb_flag |= VAR_3;
  break;
 }

 VAR_17 = FUNC_6(VAR_6, VAR_7);
 VAR_9->fcpDl = FUNC_0(VAR_17);





 VAR_11->un.fcpi.fcpi_parm = VAR_17;

 return 0;
err:
 if (VAR_7->seg_cnt)
  FUNC_11(VAR_8);
 if (VAR_7->prot_seg_cnt)
  FUNC_4(&VAR_6->pcidev->dev, FUNC_14(VAR_8),
        FUNC_13(VAR_8),
        VAR_8->sc_data_direction);

 FUNC_9(VAR_6, VAR_0, VAR_1,
   "9084 Cannot setup S/G List for HBA"
   "IO segs %d/%d SGL %d SCSI %d: %d %d\n",
   VAR_7->seg_cnt, VAR_7->prot_seg_cnt,
   VAR_6->cfg_total_seg_cnt, VAR_6->cfg_sg_seg_cnt,
   VAR_16, VAR_12);

 VAR_7->seg_cnt = 0;
 VAR_7->prot_seg_cnt = 0;
 return 1;
}
