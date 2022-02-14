
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_18__ {int type_code; int fbits; void* PortId; } ;
struct TYPE_30__ {void* port_id; } ;
struct TYPE_29__ {int symbname; int len; int wwnn; } ;
struct TYPE_28__ {int symbname; int len; void* PortId; } ;
struct TYPE_27__ {int wwnn; void* PortId; } ;
struct TYPE_26__ {int fcpReg; void* PortId; } ;
struct TYPE_25__ {void* PortId; } ;
struct TYPE_24__ {int Fc4Type; } ;
struct TYPE_19__ {TYPE_12__ rff; TYPE_9__ da_id; TYPE_8__ rsnn; TYPE_7__ rspn; TYPE_6__ rnn; TYPE_5__ rft; TYPE_4__ gff; TYPE_3__ gid; } ;
struct TYPE_16__ {void* CmdRsp; scalar_t__ Size; } ;
struct TYPE_17__ {TYPE_10__ bits; } ;
struct TYPE_22__ {scalar_t__ InId; int Revision; } ;
struct TYPE_23__ {TYPE_1__ bits; } ;
struct TYPE_21__ {scalar_t__ bdeSize; scalar_t__ bdeFlags; } ;
struct TYPE_20__ {void* w; TYPE_15__ f; } ;
struct ulp_bde64 {TYPE_13__ un; TYPE_11__ CommandResponse; int FsSubType; int FsType; TYPE_2__ RevisionId; TYPE_14__ tus; void* addrLow; void* addrHigh; } ;
struct lpfc_vport {int fc_myDID; int fc_rscn_id_cnt; int fc_flag; int ct_flags; int fc_nodename; int port_state; struct lpfc_hba* phba; } ;
struct lpfc_sli_ct_request {TYPE_13__ un; TYPE_11__ CommandResponse; int FsSubType; int FsType; TYPE_2__ RevisionId; TYPE_14__ tus; void* addrLow; void* addrHigh; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; int nlp_DID; } ;
struct lpfc_name {int dummy; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {int phys; void* virt; int list; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct lpfc_nodelist*) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 void* FUNC_2 (int const) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_5 (int,int ) ;
 void* FUNC_6 (void*) ;
 void FUNC_7 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 void FUNC_8 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 void FUNC_9 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 void FUNC_10 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 void FUNC_11 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 void FUNC_12 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 void FUNC_13 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 void FUNC_14 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 int FUNC_15 (struct lpfc_vport*,struct lpfc_dmabuf*,struct lpfc_dmabuf*,struct lpfc_nodelist*,void (*) (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*),int,int ) ;
 int FUNC_16 (struct lpfc_vport*,int ,char*,int,int ,int ) ;
 struct lpfc_nodelist* FUNC_17 (struct lpfc_vport*,int ) ;
 void* FUNC_18 (struct lpfc_hba*,int ,int *) ;
 int FUNC_19 (struct lpfc_hba*,void*,int ) ;
 int FUNC_20 (struct lpfc_nodelist*) ;
 int FUNC_21 (struct lpfc_vport*,int ,int ,char*,int,int,int ,...) ;
 int FUNC_22 (struct lpfc_vport*) ;
 int FUNC_23 (struct lpfc_vport*,int ,size_t) ;
 int FUNC_24 (struct lpfc_vport*,int ,size_t) ;
 int FUNC_25 (int ,int *,int) ;
 int FUNC_26 (struct ulp_bde64*,int ,int) ;
 void* FUNC_27 (int ) ;
 void* FUNC_28 (int ) ;

int
FUNC_29(struct lpfc_vport *VAR_29, int VAR_30,
     uint8_t VAR_31, uint32_t VAR_32)
{
 struct lpfc_nodelist * VAR_33;
 struct lpfc_hba *VAR_34 = VAR_29->phba;
 struct lpfc_dmabuf *VAR_35, *VAR_36;
 struct lpfc_sli_ct_request *VAR_37;
 struct ulp_bde64 *VAR_38;
 void (*VAR_39) (struct lpfc_hba *, struct lpfc_iocbq *,
        struct lpfc_iocbq *) = ((void*)0);
 uint32_t VAR_40 = 1024;
 size_t VAR_41;
 int VAR_42 = 0;

 VAR_33 = FUNC_17(VAR_29, VAR_19);
 if (!VAR_33 || !FUNC_1(VAR_33)
     || VAR_33->nlp_state != VAR_18) {
  VAR_42=1;
  goto ns_cmd_exit;
 }



 VAR_35 = FUNC_5(sizeof (struct lpfc_dmabuf), VAR_10);
 if (!VAR_35) {
  VAR_42=2;
  goto ns_cmd_exit;
 }

 FUNC_0(&VAR_35->list);
 VAR_35->virt = FUNC_18(VAR_34, VAR_17, &(VAR_35->phys));
 if (!VAR_35->virt) {
  VAR_42=3;
  goto ns_cmd_free_mp;
 }


 VAR_36 = FUNC_5(sizeof (struct lpfc_dmabuf), VAR_10);
 if (!VAR_36) {
  VAR_42=4;
  goto ns_cmd_free_mpvirt;
 }

 FUNC_0(&VAR_36->list);
 VAR_36->virt = FUNC_18(VAR_34, VAR_17, &(VAR_36->phys));
 if (!VAR_36->virt) {
  VAR_42=5;
  goto ns_cmd_free_bmp;
 }


 FUNC_21(VAR_29, VAR_13 ,VAR_14,
    "0236 NameServer Req Data: x%x x%x x%x\n",
    VAR_30, VAR_29->fc_flag, VAR_29->fc_rscn_id_cnt);

 VAR_38 = (struct ulp_bde64 *) VAR_36->virt;
 FUNC_26(VAR_38, 0, sizeof(struct ulp_bde64));
 VAR_38->addrHigh = FUNC_6(FUNC_27(VAR_35->phys) );
 VAR_38->addrLow = FUNC_6(FUNC_28(VAR_35->phys) );
 VAR_38->tus.f.bdeFlags = 0;
 if (VAR_30 == 133)
  VAR_38->tus.f.bdeSize = VAR_11;
 else if (VAR_30 == 134)
  VAR_38->tus.f.bdeSize = VAR_9;
 else if (VAR_30 == 131)
  VAR_38->tus.f.bdeSize = VAR_21;
 else if (VAR_30 == 130)
  VAR_38->tus.f.bdeSize = VAR_22;
 else if (VAR_30 == 128)
  VAR_38->tus.f.bdeSize = VAR_24;
 else if (VAR_30 == 129)
  VAR_38->tus.f.bdeSize = VAR_23;
 else if (VAR_30 == 135)
  VAR_38->tus.f.bdeSize = VAR_0;
 else if (VAR_30 == 132)
  VAR_38->tus.f.bdeSize = VAR_20;
 else
  VAR_38->tus.f.bdeSize = 0;
 VAR_38->tus.w = FUNC_6(VAR_38->tus.w);

 VAR_37 = (struct lpfc_sli_ct_request *) VAR_35->virt;
 FUNC_26(VAR_37, 0, sizeof (struct lpfc_sli_ct_request));
 VAR_37->RevisionId.bits.Revision = VAR_28;
 VAR_37->RevisionId.bits.InId = 0;
 VAR_37->FsType = VAR_27;
 VAR_37->FsSubType = VAR_26;
 VAR_37->CommandResponse.bits.Size = 0;
 switch (VAR_30) {
 case 133:
  VAR_37->CommandResponse.bits.CmdRsp =
      FUNC_2(133);
  VAR_37->un.gid.Fc4Type = VAR_25;
  if (VAR_29->port_state < VAR_16)
   VAR_29->port_state = VAR_16;
  FUNC_22(VAR_29);
  VAR_39 = FUNC_9;
  VAR_40 = VAR_7;
  break;

 case 134:
  VAR_37->CommandResponse.bits.CmdRsp =
   FUNC_2(134);
  VAR_37->un.gff.PortId = FUNC_3(VAR_32);
  VAR_39 = FUNC_8;
  break;

 case 131:
  VAR_29->ct_flags &= ~VAR_3;
  VAR_37->CommandResponse.bits.CmdRsp =
      FUNC_2(131);
  VAR_37->un.rft.PortId = FUNC_3(VAR_29->fc_myDID);
  VAR_37->un.rft.fcpReg = 1;
  VAR_39 = FUNC_11;
  break;

 case 130:
  VAR_29->ct_flags &= ~VAR_4;
  VAR_37->CommandResponse.bits.CmdRsp =
      FUNC_2(130);
  VAR_37->un.rnn.PortId = FUNC_3(VAR_29->fc_myDID);
  FUNC_25(VAR_37->un.rnn.wwnn, &VAR_29->fc_nodename,
         sizeof (struct lpfc_name));
  VAR_39 = FUNC_12;
  break;

 case 128:
  VAR_29->ct_flags &= ~VAR_6;
  VAR_37->CommandResponse.bits.CmdRsp =
      FUNC_2(128);
  VAR_37->un.rspn.PortId = FUNC_3(VAR_29->fc_myDID);
  VAR_41 = sizeof(VAR_37->un.rspn.symbname);
  VAR_37->un.rspn.len =
   FUNC_24(VAR_29,
   VAR_37->un.rspn.symbname, VAR_41);
  VAR_39 = FUNC_14;
  break;
 case 129:
  VAR_29->ct_flags &= ~VAR_5;
  VAR_37->CommandResponse.bits.CmdRsp =
      FUNC_2(129);
  FUNC_25(VAR_37->un.rsnn.wwnn, &VAR_29->fc_nodename,
         sizeof (struct lpfc_name));
  VAR_41 = sizeof(VAR_37->un.rsnn.symbname);
  VAR_37->un.rsnn.len =
   FUNC_23(VAR_29,
   VAR_37->un.rsnn.symbname, VAR_41);
  VAR_39 = FUNC_13;
  break;
 case 135:

  VAR_37->CommandResponse.bits.CmdRsp =
   FUNC_2(135);
  VAR_37->un.da_id.port_id = FUNC_3(VAR_29->fc_myDID);
  VAR_39 = FUNC_7;
  break;
 case 132:
  VAR_29->ct_flags &= ~VAR_2;
  VAR_37->CommandResponse.bits.CmdRsp =
      FUNC_2(132);
  VAR_37->un.rff.PortId = FUNC_3(VAR_29->fc_myDID);
  VAR_37->un.rff.fbits = VAR_1;
  VAR_37->un.rff.type_code = VAR_8;
  VAR_39 = FUNC_10;
  break;
 }



 if (!FUNC_15(VAR_29, VAR_35, VAR_36, VAR_33, VAR_39, VAR_40, VAR_31)) {

  FUNC_16(VAR_29, VAR_15,
   "Issue CT cmd:    cmd:x%x did:x%x",
   VAR_30, VAR_33->nlp_DID, 0);
  return 0;
 }
 VAR_42=6;




 FUNC_20(VAR_33);

 FUNC_19(VAR_34, VAR_36->virt, VAR_36->phys);
ns_cmd_free_bmp:
 FUNC_4(VAR_36);
ns_cmd_free_mpvirt:
 FUNC_19(VAR_34, VAR_35->virt, VAR_35->phys);
ns_cmd_free_mp:
 FUNC_4(VAR_35);
ns_cmd_exit:
 FUNC_21(VAR_29, VAR_12, VAR_14,
    "0266 Issue NameServer Req x%x err %d Data: x%x x%x\n",
    VAR_30, VAR_42, VAR_29->fc_flag, VAR_29->fc_rscn_id_cnt);
 return 1;
}
