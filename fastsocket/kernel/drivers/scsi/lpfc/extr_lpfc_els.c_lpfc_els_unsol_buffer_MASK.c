
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct TYPE_10__ {void* lsRjtRsnCodeExp; void* lsRjtRsnCode; } ;
struct TYPE_11__ {int lsRjtError; TYPE_3__ b; } ;
struct ls_rjt {TYPE_4__ un; } ;
struct lpfc_vport {int load_flag; int fc_flag; int port_state; int fc_prevDID; int fc_myDID; } ;
struct lpfc_sli_ring {int dummy; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; int nlp_flag; int nlp_type; } ;
struct TYPE_8__ {int remoteID; int parmRo; } ;
struct TYPE_12__ {int* ulpWord; TYPE_1__ rcvels; } ;
struct TYPE_14__ {int ulpStatus; int ulpTimeout; TYPE_5__ un; } ;
struct lpfc_iocbq {struct lpfc_nodelist* context1; TYPE_7__ iocb; struct lpfc_vport* vport; scalar_t__ context2; } ;
struct TYPE_13__ {int elsRcvDrop; int elsRcvECHO; int elsRcvRRQ; int elsRcvRTV; int elsRcvRNID; int elsRcvRPL; int elsRcvRPS; int elsRcvRLS; int elsRcvLIRR; int elsRcvPRLI; int elsRcvFAN; int elsRcvFARP; int elsRcvFARPR; int elsRcvPDISC; int elsRcvADISC; int elsRcvRSCN; int elsRcvPRLO; int elsRcvLOGO; int elsRcvFLOGI; int elsRcvPLOGI; int elsRcvFrame; } ;
struct lpfc_hba {int sli3_options; TYPE_6__ fc_stat; int fc_topology_changed; int sli_rev; TYPE_2__* pport; int nlp_mem_pool; } ;
struct lpfc_dmabuf {int* virt; } ;
struct Scsi_Host {int host_lock; } ;
typedef int stat ;
struct TYPE_9__ {int fc_flag; } ;
typedef TYPE_7__ IOCB_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (struct lpfc_vport*,int ,char*,int,int,int) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,struct lpfc_iocbq*,int ) ;
 scalar_t__ FUNC_3 (struct lpfc_vport*) ;
 int FUNC_4 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_6 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_7 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_8 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_9 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_10 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_11 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_12 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_13 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_14 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_15 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_16 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_17 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 struct lpfc_nodelist* FUNC_18 (struct lpfc_vport*,struct lpfc_nodelist*,scalar_t__) ;
 struct lpfc_nodelist* FUNC_19 (struct lpfc_vport*,int) ;
 int FUNC_20 (struct lpfc_vport*) ;
 void* FUNC_21 (struct lpfc_nodelist*) ;
 int FUNC_22 (struct lpfc_vport*,struct lpfc_nodelist*,int) ;
 int FUNC_23 (struct lpfc_nodelist*) ;
 int FUNC_24 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct lpfc_nodelist* FUNC_25 (struct lpfc_hba*,int*,struct lpfc_nodelist*) ;
 int FUNC_26 (struct lpfc_hba*,struct lpfc_sli_ring*,int) ;
 int FUNC_27 (struct lpfc_vport*,int ,int ,char*,int,int,...) ;
 int FUNC_28 (struct lpfc_vport*,struct lpfc_nodelist*,int*) ;
 struct Scsi_Host* FUNC_29 (struct lpfc_vport*) ;
 int FUNC_30 (struct lpfc_hba*) ;
 struct lpfc_nodelist* FUNC_31 (int ,int ) ;
 int FUNC_32 (struct ls_rjt*,int ,int) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (int ) ;

__attribute__((used)) static void
FUNC_35(struct lpfc_hba *VAR_29, struct lpfc_sli_ring *VAR_30,
        struct lpfc_vport *VAR_31, struct lpfc_iocbq *VAR_32)
{
 struct Scsi_Host *VAR_33;
 struct lpfc_nodelist *VAR_34;
 struct ls_rjt VAR_35;
 uint32_t *VAR_36;
 uint32_t VAR_37, VAR_38, VAR_39;
 uint8_t VAR_40, VAR_41 = 0;
 IOCB_t *VAR_42 = &VAR_32->iocb;

 if (!VAR_31 || !(VAR_32->context2))
  goto dropit;

 VAR_39 = 0;
 VAR_36 = ((struct lpfc_dmabuf *)VAR_32->context2)->virt;
 VAR_37 = *VAR_36;
 if ((VAR_29->sli3_options & VAR_13) == 0)
  FUNC_26(VAR_29, VAR_30, 1);

 VAR_38 = VAR_42->un.rcvels.remoteID;
 if (VAR_42->ulpStatus) {
  FUNC_1(VAR_31, VAR_12,
   "RCV Unsol ELS:  status:x%x/x%x did:x%x",
   VAR_42->ulpStatus, VAR_42->un.ulpWord[4], VAR_38);
  goto dropit;
 }


 if (FUNC_3(VAR_31))
  goto dropit;


 if (VAR_31->load_flag & VAR_4)
  goto dropit;


 if ((VAR_31->fc_flag & VAR_1) &&
   (VAR_37 != 138))
  goto dropit;

 VAR_34 = FUNC_19(VAR_31, VAR_38);
 if (!VAR_34) {

  VAR_34 = FUNC_31(VAR_29->nlp_mem_pool, VAR_7);
  if (!VAR_34)
   goto dropit;

  FUNC_22(VAR_31, VAR_34, VAR_38);
  FUNC_24(VAR_31, VAR_34, VAR_26);
  VAR_39 = 1;
  if ((VAR_38 & VAR_6) == VAR_6)
   VAR_34->nlp_type |= VAR_25;
 } else if (!FUNC_0(VAR_34)) {
  VAR_34 = FUNC_18(VAR_31, VAR_34,
     VAR_27);
  if (!VAR_34)
   goto dropit;
  FUNC_24(VAR_31, VAR_34, VAR_26);
  VAR_39 = 1;
  if ((VAR_38 & VAR_6) == VAR_6)
   VAR_34->nlp_type |= VAR_25;
 } else if (VAR_34->nlp_state == VAR_27) {

  VAR_34 = FUNC_21(VAR_34);
  if (!VAR_34)
   goto dropit;
  FUNC_24(VAR_31, VAR_34, VAR_26);
  VAR_39 = 1;
 }

 VAR_29->fc_stat.elsRcvFrame++;

 VAR_32->context1 = FUNC_21(VAR_34);
 VAR_32->vport = VAR_31;

 if ((VAR_37 & VAR_0) == 129) {
  VAR_37 &= VAR_0;
 }

 FUNC_27(VAR_31, VAR_9, VAR_10,
    "0112 ELS command x%x received from NPORT x%x "
    "Data: x%x x%x x%x x%x\n",
   VAR_37, VAR_38, VAR_31->port_state, VAR_31->fc_flag,
   VAR_31->fc_myDID, VAR_31->fc_prevDID);
 switch (VAR_37) {
 case 138:
  FUNC_1(VAR_31, VAR_12,
   "RCV PLOGI:       did:x%x/ste:x%x flg:x%x",
   VAR_38, VAR_31->port_state, VAR_34->nlp_flag);

  VAR_29->fc_stat.elsRcvPLOGI++;
  VAR_34 = FUNC_25(VAR_29, VAR_36, VAR_34);
  if (VAR_29->sli_rev == VAR_14 &&
      (VAR_29->pport->fc_flag & VAR_2)) {
   VAR_31->fc_prevDID = VAR_31->fc_myDID;




   VAR_31->fc_myDID = VAR_32->iocb.un.rcvels.parmRo;
   FUNC_27(VAR_31, VAR_9, VAR_10,
      "3312 Remote port assigned DID x%x "
      "%x\n", VAR_31->fc_myDID,
      VAR_31->fc_prevDID);
  }

  FUNC_28(VAR_31, VAR_34, VAR_36);


  if (VAR_31->fc_flag & VAR_1) {
   VAR_41 = VAR_18;
   VAR_40 = VAR_16;
   break;
  }
  VAR_33 = FUNC_29(VAR_31);
  if (VAR_31->port_state < VAR_11) {
   if (!(VAR_29->pport->fc_flag & VAR_2) ||
    (VAR_29->pport->fc_flag & VAR_3)) {
    VAR_41 = VAR_18;
    VAR_40 = VAR_16;
    break;
   }




   if (VAR_29->sli_rev == VAR_14 &&
       (VAR_29->fc_topology_changed ||
        VAR_31->fc_myDID != VAR_31->fc_prevDID)) {
    FUNC_30(VAR_29);
    FUNC_33(VAR_33->host_lock);
    VAR_31->fc_flag &= ~VAR_5;
    FUNC_34(VAR_33->host_lock);
    VAR_29->fc_topology_changed = 0;
    FUNC_20(VAR_31);
   }
  }

  FUNC_33(VAR_33->host_lock);
  VAR_34->nlp_flag &= ~VAR_28;
  FUNC_34(VAR_33->host_lock);

  FUNC_2(VAR_31, VAR_34, VAR_32,
     VAR_22);

  break;
 case 142:
  FUNC_1(VAR_31, VAR_12,
   "RCV FLOGI:       did:x%x/ste:x%x flg:x%x",
   VAR_38, VAR_31->port_state, VAR_34->nlp_flag);

  VAR_29->fc_stat.elsRcvFLOGI++;
  FUNC_8(VAR_31, VAR_32, VAR_34);
  if (VAR_39)
   FUNC_23(VAR_34);
  break;
 case 140:
  FUNC_1(VAR_31, VAR_12,
   "RCV LOGO:        did:x%x/ste:x%x flg:x%x",
   VAR_38, VAR_31->port_state, VAR_34->nlp_flag);

  VAR_29->fc_stat.elsRcvLOGO++;
  FUNC_28(VAR_31, VAR_34, VAR_36);
  if (VAR_31->port_state < VAR_11) {
   VAR_41 = VAR_18;
   VAR_40 = VAR_16;
   break;
  }
  FUNC_2(VAR_31, VAR_34, VAR_32, VAR_20);
  break;
 case 136:
  FUNC_1(VAR_31, VAR_12,
   "RCV PRLO:        did:x%x/ste:x%x flg:x%x",
   VAR_38, VAR_31->port_state, VAR_34->nlp_flag);

  VAR_29->fc_stat.elsRcvPRLO++;
  FUNC_28(VAR_31, VAR_34, VAR_36);
  if (VAR_31->port_state < VAR_11) {
   VAR_41 = VAR_18;
   VAR_40 = VAR_16;
   break;
  }
  FUNC_2(VAR_31, VAR_34, VAR_32, VAR_24);
  break;
 case 129:
  VAR_29->fc_stat.elsRcvRSCN++;
  FUNC_15(VAR_31, VAR_32, VAR_34);
  if (VAR_39)
   FUNC_23(VAR_34);
  break;
 case 147:
  FUNC_1(VAR_31, VAR_12,
   "RCV ADISC:       did:x%x/ste:x%x flg:x%x",
   VAR_38, VAR_31->port_state, VAR_34->nlp_flag);

  FUNC_28(VAR_31, VAR_34, VAR_36);
  VAR_29->fc_stat.elsRcvADISC++;
  if (VAR_31->port_state < VAR_11) {
   VAR_41 = VAR_18;
   VAR_40 = VAR_16;
   break;
  }
  FUNC_2(VAR_31, VAR_34, VAR_32,
     VAR_19);
  break;
 case 139:
  FUNC_1(VAR_31, VAR_12,
   "RCV PDISC:       did:x%x/ste:x%x flg:x%x",
   VAR_38, VAR_31->port_state, VAR_34->nlp_flag);

  VAR_29->fc_stat.elsRcvPDISC++;
  if (VAR_31->port_state < VAR_11) {
   VAR_41 = VAR_18;
   VAR_40 = VAR_16;
   break;
  }
  FUNC_2(VAR_31, VAR_34, VAR_32,
     VAR_21);
  break;
 case 143:
  FUNC_1(VAR_31, VAR_12,
   "RCV FARPR:       did:x%x/ste:x%x flg:x%x",
   VAR_38, VAR_31->port_state, VAR_34->nlp_flag);

  VAR_29->fc_stat.elsRcvFARPR++;
  FUNC_7(VAR_31, VAR_32, VAR_34);
  break;
 case 144:
  FUNC_1(VAR_31, VAR_12,
   "RCV FARP:        did:x%x/ste:x%x flg:x%x",
   VAR_38, VAR_31->port_state, VAR_34->nlp_flag);

  VAR_29->fc_stat.elsRcvFARP++;
  FUNC_6(VAR_31, VAR_32, VAR_34);
  break;
 case 145:
  FUNC_1(VAR_31, VAR_12,
   "RCV FAN:         did:x%x/ste:x%x flg:x%x",
   VAR_38, VAR_31->port_state, VAR_34->nlp_flag);

  VAR_29->fc_stat.elsRcvFAN++;
  FUNC_5(VAR_31, VAR_32, VAR_34);
  break;
 case 137:
  FUNC_1(VAR_31, VAR_12,
   "RCV PRLI:        did:x%x/ste:x%x flg:x%x",
   VAR_38, VAR_31->port_state, VAR_34->nlp_flag);

  VAR_29->fc_stat.elsRcvPRLI++;
  if (VAR_31->port_state < VAR_11) {
   VAR_41 = VAR_18;
   VAR_40 = VAR_16;
   break;
  }
  FUNC_2(VAR_31, VAR_34, VAR_32, VAR_23);
  break;
 case 141:
  FUNC_1(VAR_31, VAR_12,
   "RCV LIRR:        did:x%x/ste:x%x flg:x%x",
   VAR_38, VAR_31->port_state, VAR_34->nlp_flag);

  VAR_29->fc_stat.elsRcvLIRR++;
  FUNC_9(VAR_31, VAR_32, VAR_34);
  if (VAR_39)
   FUNC_23(VAR_34);
  break;
 case 134:
  FUNC_1(VAR_31, VAR_12,
   "RCV RLS:         did:x%x/ste:x%x flg:x%x",
   VAR_38, VAR_31->port_state, VAR_34->nlp_flag);

  VAR_29->fc_stat.elsRcvRLS++;
  FUNC_10(VAR_31, VAR_32, VAR_34);
  if (VAR_39)
   FUNC_23(VAR_34);
  break;
 case 131:
  FUNC_1(VAR_31, VAR_12,
   "RCV RPS:         did:x%x/ste:x%x flg:x%x",
   VAR_38, VAR_31->port_state, VAR_34->nlp_flag);

  VAR_29->fc_stat.elsRcvRPS++;
  FUNC_13(VAR_31, VAR_32, VAR_34);
  if (VAR_39)
   FUNC_23(VAR_34);
  break;
 case 132:
  FUNC_1(VAR_31, VAR_12,
   "RCV RPL:         did:x%x/ste:x%x flg:x%x",
   VAR_38, VAR_31->port_state, VAR_34->nlp_flag);

  VAR_29->fc_stat.elsRcvRPL++;
  FUNC_12(VAR_31, VAR_32, VAR_34);
  if (VAR_39)
   FUNC_23(VAR_34);
  break;
 case 133:
  FUNC_1(VAR_31, VAR_12,
   "RCV RNID:        did:x%x/ste:x%x flg:x%x",
   VAR_38, VAR_31->port_state, VAR_34->nlp_flag);

  VAR_29->fc_stat.elsRcvRNID++;
  FUNC_11(VAR_31, VAR_32, VAR_34);
  if (VAR_39)
   FUNC_23(VAR_34);
  break;
 case 128:
  FUNC_1(VAR_31, VAR_12,
   "RCV RTV:        did:x%x/ste:x%x flg:x%x",
   VAR_38, VAR_31->port_state, VAR_34->nlp_flag);
  VAR_29->fc_stat.elsRcvRTV++;
  FUNC_16(VAR_31, VAR_32, VAR_34);
  if (VAR_39)
   FUNC_23(VAR_34);
  break;
 case 130:
  FUNC_1(VAR_31, VAR_12,
   "RCV RRQ:         did:x%x/ste:x%x flg:x%x",
   VAR_38, VAR_31->port_state, VAR_34->nlp_flag);

  VAR_29->fc_stat.elsRcvRRQ++;
  FUNC_14(VAR_31, VAR_32, VAR_34);
  if (VAR_39)
   FUNC_23(VAR_34);
  break;
 case 146:
  FUNC_1(VAR_31, VAR_12,
   "RCV ECHO:        did:x%x/ste:x%x flg:x%x",
   VAR_38, VAR_31->port_state, VAR_34->nlp_flag);

  VAR_29->fc_stat.elsRcvECHO++;
  FUNC_4(VAR_31, VAR_32, VAR_34);
  if (VAR_39)
   FUNC_23(VAR_34);
  break;
 case 135:

   VAR_41 = VAR_18;
   VAR_40 = VAR_15;
  break;
 default:
  FUNC_1(VAR_31, VAR_12,
   "RCV ELS cmd:     cmd:x%x did:x%x/ste:x%x",
   VAR_37, VAR_38, VAR_31->port_state);


  VAR_41 = VAR_17;
  VAR_40 = VAR_16;


  FUNC_27(VAR_31, VAR_8, VAR_10,
     "0115 Unknown ELS command x%x "
     "received from NPORT x%x\n", VAR_37, VAR_38);
  if (VAR_39)
   FUNC_23(VAR_34);
  break;
 }


 if (VAR_41) {
  FUNC_32(&VAR_35, 0, sizeof(VAR_35));
  VAR_35.un.b.lsRjtRsnCode = VAR_41;
  VAR_35.un.b.lsRjtRsnCodeExp = VAR_40;
  FUNC_17(VAR_31, VAR_35.un.lsRjtError, VAR_32, VAR_34,
   ((void*)0));
 }

 FUNC_23(VAR_32->context1);
 VAR_32->context1 = ((void*)0);
 return;

dropit:
 if (VAR_31 && !(VAR_31->load_flag & VAR_4))
  FUNC_27(VAR_31, VAR_8, VAR_10,
   "0111 Dropping received ELS cmd "
   "Data: x%x x%x x%x\n",
   VAR_42->ulpStatus, VAR_42->un.ulpWord[4], VAR_42->ulpTimeout);
 VAR_29->fc_stat.elsRcvDrop++;
}
