
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_17__ {scalar_t__ r_a_tov; } ;
struct TYPE_23__ {scalar_t__ fcphLow; scalar_t__ fcphHigh; int request_multiple_Nport; scalar_t__ virtual_fabric_support; TYPE_2__ w2; scalar_t__ e_d_tov; } ;
struct TYPE_22__ {int seqDelivery; scalar_t__ classValid; } ;
struct TYPE_21__ {int seqDelivery; scalar_t__ classValid; } ;
struct TYPE_18__ {scalar_t__ classValid; } ;
struct serv_parm {TYPE_8__ cmn; TYPE_7__ cls3; TYPE_6__ cls2; TYPE_3__ cls1; } ;
struct lpfc_vport {int fc_sparam; struct lpfc_hba* phba; } ;
struct lpfc_sli_ring {int dummy; } ;
struct lpfc_nodelist {int nlp_DID; } ;
struct TYPE_24__ {int fl; scalar_t__ myID; } ;
struct TYPE_13__ {TYPE_9__ elsreq64; } ;
struct TYPE_15__ {int ulpCt_h; int ulpCt_l; TYPE_10__ un; int ulpContext; } ;
struct lpfc_iocbq {int iocb_cmpl; TYPE_12__ iocb; scalar_t__ context2; } ;
struct TYPE_14__ {int elsXmitFLOGI; } ;
struct TYPE_20__ {int fcfi; } ;
struct TYPE_19__ {int sli_intf; } ;
struct TYPE_16__ {struct lpfc_sli_ring* ring; } ;
struct lpfc_hba {scalar_t__ sli_rev; int sli3_options; scalar_t__ fc_topology; TYPE_11__ fc_stat; int fc_ratov; TYPE_5__ fcf; TYPE_4__ sli4_hba; TYPE_1__ sli; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
typedef TYPE_12__ IOCB_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int VAR_11 ;
 int FUNC_1 (struct lpfc_vport*,int ,char*,int,int ,int ) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 struct lpfc_iocbq* FUNC_4 (struct lpfc_vport*,int,int,int ,struct lpfc_nodelist*,int ,int ) ;
 int FUNC_5 (struct lpfc_vport*) ;
 int VAR_12 ;
 int FUNC_6 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_7(struct lpfc_vport *VAR_13, struct lpfc_nodelist *VAR_14,
       uint8_t VAR_15)
{
 struct lpfc_hba *VAR_16 = VAR_13->phba;
 struct serv_parm *VAR_17;
 IOCB_t *VAR_18;
 struct lpfc_iocbq *VAR_19;
 struct lpfc_sli_ring *VAR_20;
 uint8_t *VAR_21;
 uint16_t VAR_22;
 uint32_t VAR_23;
 int VAR_24;

 VAR_20 = &VAR_16->sli.ring[VAR_5];

 VAR_22 = (sizeof(uint32_t) + sizeof(struct serv_parm));
 VAR_19 = FUNC_4(VAR_13, 1, VAR_22, VAR_15, VAR_14,
         VAR_14->nlp_DID, VAR_0);

 if (!VAR_19)
  return 1;

 VAR_18 = &VAR_19->iocb;
 VAR_21 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_19->context2)->virt);


 *((uint32_t *) (VAR_21)) = VAR_0;
 VAR_21 += sizeof(uint32_t);
 FUNC_6(VAR_21, &VAR_13->fc_sparam, sizeof(struct serv_parm));
 VAR_17 = (struct serv_parm *) VAR_21;


 VAR_17->cmn.e_d_tov = 0;
 VAR_17->cmn.w2.r_a_tov = 0;
 VAR_17->cmn.virtual_fabric_support = 0;
 VAR_17->cls1.classValid = 0;
 if (VAR_17->cmn.fcphLow < VAR_1)
  VAR_17->cmn.fcphLow = VAR_1;
 if (VAR_17->cmn.fcphHigh < VAR_1)
  VAR_17->cmn.fcphHigh = VAR_1;

 if (VAR_16->sli_rev == VAR_8) {
  if (FUNC_0(VAR_12, &VAR_16->sli4_hba.sli_intf) ==
      VAR_7) {
   VAR_19->iocb.ulpCt_h = ((VAR_10 >> 1) & 1);
   VAR_19->iocb.ulpCt_l = (VAR_10 & 1);


   VAR_19->iocb.ulpContext = VAR_16->fcf.fcfi;
  }

  VAR_17->cls2.classValid = 0;
  VAR_17->cls2.seqDelivery = 0;
 } else {

  VAR_17->cls2.seqDelivery = (VAR_17->cls2.classValid) ? 1 : 0;
  VAR_17->cls3.seqDelivery = (VAR_17->cls3.classValid) ? 1 : 0;
  if (VAR_16->sli3_options & VAR_6) {
   VAR_17->cmn.request_multiple_Nport = 1;

   VAR_18->ulpCt_h = 1;
   VAR_18->ulpCt_l = 0;
  } else
   VAR_17->cmn.request_multiple_Nport = 0;
 }

 if (VAR_16->fc_topology != VAR_9) {
  VAR_18->un.elsreq64.myID = 0;
  VAR_18->un.elsreq64.fl = 1;
 }

 VAR_23 = VAR_16->fc_ratov;
 VAR_16->fc_ratov = VAR_3;
 FUNC_5(VAR_13);
 VAR_16->fc_ratov = VAR_23;

 VAR_16->fc_stat.elsXmitFLOGI++;
 VAR_19->iocb_cmpl = VAR_11;

 FUNC_1(VAR_13, VAR_4,
  "Issue FLOGI:     opt:x%x",
  VAR_16->sli3_options, 0, 0);

 VAR_24 = FUNC_3(VAR_16, VAR_19);
 if (VAR_24 == VAR_2) {
  FUNC_2(VAR_16, VAR_19);
  return 1;
 }
 return 0;
}
