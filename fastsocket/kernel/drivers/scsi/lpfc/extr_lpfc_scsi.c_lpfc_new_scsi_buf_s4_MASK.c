
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct sli4_sge {int word2; void* sge_len; void* addr_lo; void* addr_hi; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_8__ {int bdeSize; int addrLow; int addrHigh; int bdeFlags; scalar_t__ ulpIoTag32; } ;
struct TYPE_9__ {TYPE_2__ bdl; } ;
struct TYPE_10__ {TYPE_3__ fcpi64; } ;
struct TYPE_11__ {int ulpBdeCount; int ulpLe; int ulpClass; TYPE_4__ un; } ;
struct TYPE_12__ {struct lpfc_scsi_buf* context1; TYPE_5__ iocb; int iocb_flag; int sli4_xritag; scalar_t__ sli4_lxritag; } ;
struct lpfc_scsi_buf {int list; scalar_t__ dma_phys_bpl; TYPE_6__ cur_iocbq; scalar_t__ dma_handle; scalar_t__ fcp_bpl; scalar_t__ fcp_cmnd; struct fcp_rsp* fcp_rsp; scalar_t__ data; } ;
struct TYPE_7__ {int scsi_xri_cnt; int * xri_ids; } ;
struct lpfc_hba {int cfg_sg_dma_buf_size; int scsi_buf_list_get_lock; TYPE_1__ sli4_hba; int lpfc_scsi_dma_buf_pool; scalar_t__ cfg_enable_bg; } ;
struct fcp_rsp {int dummy; } ;
struct fcp_cmnd {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
typedef TYPE_5__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,struct sli4_sge*,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct lpfc_scsi_buf*) ;
 struct lpfc_scsi_buf* FUNC_4 (int,int ) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct lpfc_hba*,int ,int ,char*,int,int) ;
 int FUNC_9 (struct lpfc_vport*,int ,int ,char*,int,int,int,int,int) ;
 scalar_t__ FUNC_10 (struct lpfc_hba*) ;
 int FUNC_11 (struct lpfc_hba*,int *,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_12 (struct lpfc_hba*,TYPE_6__*) ;
 int FUNC_13 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_14 (int ,int ,scalar_t__*) ;
 int FUNC_15 (int ,scalar_t__,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 int VAR_12 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int
FUNC_20(struct lpfc_vport *VAR_13, int VAR_14)
{
 struct lpfc_hba *VAR_15 = VAR_13->phba;
 struct lpfc_scsi_buf *VAR_16;
 struct sli4_sge *VAR_17;
 IOCB_t *VAR_18;
 dma_addr_t VAR_19;
 dma_addr_t VAR_20;
 dma_addr_t VAR_21;
 uint16_t VAR_22, VAR_23 = 0;
 int VAR_24, VAR_25, VAR_26;
 FUNC_0(VAR_11);
 FUNC_0(VAR_10);
 FUNC_0(VAR_12);

 VAR_26 = VAR_15->cfg_sg_dma_buf_size -
  (sizeof(struct fcp_cmnd) + sizeof(struct fcp_rsp));

 FUNC_9(VAR_13, VAR_3, VAR_5,
    "9068 ALLOC %d scsi_bufs: %d (%d + %d + %d)\n",
    VAR_14, VAR_15->cfg_sg_dma_buf_size, VAR_26,
    (int)sizeof(struct fcp_cmnd),
    (int)sizeof(struct fcp_rsp));

 for (VAR_24 = 0; VAR_24 < VAR_14; VAR_24++) {
  VAR_16 = FUNC_4(sizeof(struct lpfc_scsi_buf), VAR_2);
  if (!VAR_16)
   break;






  VAR_16->data = FUNC_14(VAR_15->lpfc_scsi_dma_buf_pool,
      VAR_2, &VAR_16->dma_handle);
  if (!VAR_16->data) {
   FUNC_3(VAR_16);
   break;
  }
  FUNC_13(VAR_16->data, 0, VAR_15->cfg_sg_dma_buf_size);





  if (VAR_15->cfg_enable_bg && (((unsigned long)(VAR_16->data) &
      (unsigned long)(VAR_8 - 1)) != 0)) {
   FUNC_15(VAR_15->lpfc_scsi_dma_buf_pool,
          VAR_16->data, VAR_16->dma_handle);
   FUNC_3(VAR_16);
   break;
  }


  VAR_22 = FUNC_12(VAR_15, &VAR_16->cur_iocbq);
  if (VAR_22 == 0) {
   FUNC_15(VAR_15->lpfc_scsi_dma_buf_pool,
    VAR_16->data, VAR_16->dma_handle);
   FUNC_3(VAR_16);
   break;
  }

  VAR_23 = FUNC_10(VAR_15);
  if (VAR_23 == VAR_7) {
   FUNC_15(VAR_15->lpfc_scsi_dma_buf_pool,
         VAR_16->data, VAR_16->dma_handle);
   FUNC_3(VAR_16);
   break;
  }
  VAR_16->cur_iocbq.sli4_lxritag = VAR_23;
  VAR_16->cur_iocbq.sli4_xritag = VAR_15->sli4_hba.xri_ids[VAR_23];
  VAR_16->cur_iocbq.iocb_flag |= VAR_6;
  VAR_16->fcp_bpl = VAR_16->data;
  VAR_16->fcp_cmnd = (VAR_16->data + VAR_26);
  VAR_16->fcp_rsp = (struct fcp_rsp *)((uint8_t *)VAR_16->fcp_cmnd +
     sizeof(struct fcp_cmnd));


  VAR_17 = (struct sli4_sge *)VAR_16->fcp_bpl;
  VAR_21 = VAR_16->dma_handle;
  VAR_19 = (VAR_16->dma_handle + VAR_26);
  VAR_20 = VAR_19 + sizeof(struct fcp_cmnd);






  VAR_17->addr_hi = FUNC_2(FUNC_16(VAR_19));
  VAR_17->addr_lo = FUNC_2(FUNC_17(VAR_19));
  VAR_17->word2 = FUNC_5(VAR_17->word2);
  FUNC_1(VAR_9, VAR_17, 0);
  VAR_17->word2 = FUNC_2(VAR_17->word2);
  VAR_17->sge_len = FUNC_2(sizeof(struct fcp_cmnd));
  VAR_17++;


  VAR_17->addr_hi = FUNC_2(FUNC_16(VAR_20));
  VAR_17->addr_lo = FUNC_2(FUNC_17(VAR_20));
  VAR_17->word2 = FUNC_5(VAR_17->word2);
  FUNC_1(VAR_9, VAR_17, 1);
  VAR_17->word2 = FUNC_2(VAR_17->word2);
  VAR_17->sge_len = FUNC_2(sizeof(struct fcp_rsp));





  VAR_18 = &VAR_16->cur_iocbq.iocb;
  VAR_18->un.fcpi64.bdl.ulpIoTag32 = 0;
  VAR_18->un.fcpi64.bdl.bdeFlags = VAR_0;




  VAR_18->un.fcpi64.bdl.bdeSize = sizeof(struct fcp_cmnd);
  VAR_18->un.fcpi64.bdl.addrLow = FUNC_17(VAR_19);
  VAR_18->un.fcpi64.bdl.addrHigh = FUNC_16(VAR_19);
  VAR_18->ulpBdeCount = 1;
  VAR_18->ulpLe = 1;
  VAR_18->ulpClass = VAR_1;
  VAR_16->cur_iocbq.context1 = VAR_16;
  VAR_16->dma_phys_bpl = VAR_21;


  FUNC_6(&VAR_16->list, &VAR_10);
  FUNC_18(&VAR_15->scsi_buf_list_get_lock);
  VAR_15->sli4_hba.scsi_xri_cnt++;
  FUNC_19(&VAR_15->scsi_buf_list_get_lock);
 }
 FUNC_8(VAR_15, VAR_3, VAR_4,
   "3021 Allocate %d out of %d requested new SCSI "
   "buffers\n", VAR_24, VAR_14);


 if (!FUNC_7(&VAR_10))
  VAR_25 = FUNC_11(VAR_15,
         &VAR_10, VAR_24);
 else
  VAR_25 = 0;

 return VAR_25;
}
