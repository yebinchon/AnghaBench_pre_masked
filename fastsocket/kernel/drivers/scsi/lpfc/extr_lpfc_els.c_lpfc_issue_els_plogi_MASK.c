
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int altBbCredit; scalar_t__ fcphLow; scalar_t__ fcphHigh; } ;
struct serv_parm {TYPE_1__ cmn; } ;
struct lpfc_vport {int fc_flag; int fc_sparam; struct lpfc_hba* phba; } ;
struct lpfc_sli {int dummy; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_iocbq {int iocb_cmpl; scalar_t__ context2; int iocb; } ;
struct TYPE_4__ {int elsXmitPLOGI; } ;
struct lpfc_hba {TYPE_2__ fc_stat; struct lpfc_sli sli; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
typedef int IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_8 ;
 int FUNC_1 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 struct lpfc_nodelist* FUNC_3 (struct lpfc_vport*,int ) ;
 struct lpfc_iocbq* FUNC_4 (struct lpfc_vport*,int,int,int ,struct lpfc_nodelist*,int ,int ) ;
 int FUNC_5 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_6 (int *,int *,int) ;

int
FUNC_7(struct lpfc_vport *VAR_9, uint32_t VAR_10, uint8_t VAR_11)
{
 struct lpfc_hba *VAR_12 = VAR_9->phba;
 struct serv_parm *VAR_13;
 IOCB_t *VAR_14;
 struct lpfc_nodelist *VAR_15;
 struct lpfc_iocbq *VAR_16;
 struct lpfc_sli *VAR_17;
 uint8_t *VAR_18;
 uint16_t VAR_19;
 int VAR_20;

 VAR_17 = &VAR_12->sli;

 VAR_15 = FUNC_3(VAR_9, VAR_10);
 if (VAR_15 && !FUNC_0(VAR_15))
  VAR_15 = ((void*)0);


 VAR_19 = (sizeof(uint32_t) + sizeof(struct serv_parm));
 VAR_16 = FUNC_4(VAR_9, 1, VAR_19, VAR_11, VAR_15, VAR_10,
         VAR_0);
 if (!VAR_16)
  return 1;

 VAR_14 = &VAR_16->iocb;
 VAR_18 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_16->context2)->virt);


 *((uint32_t *) (VAR_18)) = VAR_0;
 VAR_18 += sizeof(uint32_t);
 FUNC_6(VAR_18, &VAR_9->fc_sparam, sizeof(struct serv_parm));
 VAR_13 = (struct serv_parm *) VAR_18;





 if ((VAR_9->fc_flag & VAR_1) && !(VAR_9->fc_flag & VAR_4))
  VAR_13->cmn.altBbCredit = 1;

 if (VAR_13->cmn.fcphLow < VAR_3)
  VAR_13->cmn.fcphLow = VAR_3;

 if (VAR_13->cmn.fcphHigh < VAR_2)
  VAR_13->cmn.fcphHigh = VAR_2;

 FUNC_1(VAR_9, VAR_6,
  "Issue PLOGI:     did:x%x",
  VAR_10, 0, 0);

 VAR_12->fc_stat.elsXmitPLOGI++;
 VAR_16->iocb_cmpl = VAR_8;
 VAR_20 = FUNC_5(VAR_12, VAR_7, VAR_16, 0);

 if (VAR_20 == VAR_5) {
  FUNC_2(VAR_12, VAR_16);
  return 1;
 }
 return 0;
}
