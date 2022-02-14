
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct TYPE_21__ {int* rsp_info; int* req_sense_data; int status_flags; int residual_length; int rsp_info_len; int req_sense_length; int handle; int scsi_status; int comp_status; } ;
typedef TYPE_4__ sts_entry_t ;
struct sts_entry_24xx {int* data; int ox_id; int residual_len; int rsp_residual_count; int rsp_data_len; int sense_len; int state_flags; int scsi_status; int comp_status; } ;
struct scsi_cmnd {unsigned int underflow; int result; int * cmnd; TYPE_1__* device; int sense_buffer; } ;
struct rsp_que {int * status_srb; } ;
struct req_que {size_t num_outstanding_cmds; TYPE_5__** outstanding_cmds; } ;
struct qla_hw_data {int max_req_queues; int req_qid_map; struct req_que** req_q_map; } ;
struct TYPE_22__ {scalar_t__ type; int (* done ) (struct qla_hw_data*,TYPE_5__*,int) ;TYPE_7__* fcport; } ;
typedef TYPE_5__ srb_t ;
struct TYPE_23__ {int host_no; int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_6__ scsi_qla_host_t ;
typedef size_t int32_t ;
struct TYPE_19__ {int al_pa; int area; int domain; } ;
struct TYPE_20__ {TYPE_2__ b; } ;
struct TYPE_24__ {TYPE_3__ d_id; int vha; int state; } ;
typedef TYPE_7__ fc_port_t ;
struct TYPE_18__ {int lun; int id; int vendor; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;


 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct scsi_cmnd* FUNC_0 (TYPE_5__*) ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 int FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 int FUNC_6 (int *) ;
 size_t FUNC_7 (int ,int ) ;
 int FUNC_8 (int*,int) ;
 size_t FUNC_9 (int ) ;
 size_t FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,TYPE_6__*,int,char*,...) ;
 int VAR_24 ;
 int FUNC_13 (TYPE_6__*,void*,struct req_que*,size_t) ;
 int FUNC_14 (TYPE_5__*,struct sts_entry_24xx*) ;
 int FUNC_15 (TYPE_5__*,int*,size_t,size_t,struct rsp_que*,int) ;
 int FUNC_16 (int ,TYPE_7__*,int,int) ;
 int FUNC_17 (TYPE_6__*,struct req_que*,size_t) ;
 int FUNC_18 (TYPE_6__*) ;
 int FUNC_19 (int ,struct scsi_cmnd*,char*,int ) ;
 size_t FUNC_20 (struct scsi_cmnd*) ;
 int FUNC_21 (struct scsi_cmnd*,size_t) ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 (struct qla_hw_data*,TYPE_5__*,int) ;
 scalar_t__ FUNC_24 (int) ;

__attribute__((used)) static void
FUNC_25(scsi_qla_host_t *VAR_25, struct rsp_que *VAR_26, void *VAR_27)
{
 srb_t *VAR_28;
 fc_port_t *VAR_29;
 struct scsi_cmnd *VAR_30;
 sts_entry_t *VAR_31;
 struct sts_entry_24xx *VAR_32;
 uint16_t VAR_33;
 uint16_t VAR_34;
 uint16_t VAR_35;
 uint8_t VAR_36;
 int32_t VAR_37;
 uint32_t VAR_38, VAR_39, VAR_40, VAR_41,
     VAR_42;
 uint8_t *VAR_43, *VAR_44;
 struct qla_hw_data *VAR_45 = VAR_25->hw;
 uint32_t VAR_46;
 uint16_t VAR_47;
 struct req_que *VAR_48;
 int VAR_49 = 1;
 int VAR_50 = 0;
 uint16_t VAR_51 = 0;

 VAR_31 = (sts_entry_t *) VAR_27;
 VAR_32 = (struct sts_entry_24xx *) VAR_27;
 if (FUNC_1(VAR_45)) {
  VAR_33 = FUNC_9(VAR_32->comp_status);
  VAR_34 = FUNC_9(VAR_32->scsi_status) & VAR_18;
  VAR_51 = FUNC_9(VAR_32->state_flags);
 } else {
  VAR_33 = FUNC_9(VAR_31->comp_status);
  VAR_34 = FUNC_9(VAR_31->scsi_status) & VAR_18;
 }
 VAR_46 = (uint32_t) FUNC_4(VAR_31->handle);
 VAR_47 = FUNC_5(VAR_31->handle);
 VAR_48 = VAR_45->req_q_map[VAR_47];


 if (VAR_48 == ((void*)0) ||
     VAR_47 >= FUNC_7(VAR_45->req_qid_map, VAR_45->max_req_queues)) {
  FUNC_12(VAR_24, VAR_25, 0x3059,
      "Invalid status handle (0x%x): Bad req pointer. req=%p, "
      "que=%u.\n", VAR_31->handle, VAR_48, VAR_47);
  return;
 }


 if (VAR_46 < VAR_48->num_outstanding_cmds)
  VAR_28 = VAR_48->outstanding_cmds[VAR_46];
 else
  VAR_28 = ((void*)0);

 if (VAR_28 == ((void*)0)) {
  FUNC_12(VAR_24, VAR_25, 0x3017,
      "Invalid status handle (0x%x).\n", VAR_31->handle);

  if (FUNC_3(VAR_45))
   FUNC_22(VAR_8, &VAR_25->dpc_flags);
  else
   FUNC_22(VAR_10, &VAR_25->dpc_flags);
  FUNC_18(VAR_25);
  return;
 }

 if (FUNC_24((VAR_51 & VAR_0) && (VAR_28->type == VAR_16))) {
  FUNC_13(VAR_25, VAR_27, VAR_48, VAR_46);
  return;
 }


 if (VAR_33 == 139 && VAR_34 == 0) {
  FUNC_17(VAR_25, VAR_48, VAR_46);

  return;
 }

 VAR_48->outstanding_cmds[VAR_46] = ((void*)0);
 VAR_30 = FUNC_0(VAR_28);
 if (VAR_30 == ((void*)0)) {
  FUNC_12(VAR_24, VAR_25, 0x3018,
      "Command already returned (0x%x/%p).\n",
      VAR_31->handle, VAR_28);

  return;
 }

 VAR_36 = VAR_34 & VAR_23;

 VAR_29 = VAR_28->fcport;

 VAR_35 = 0;
 VAR_38 = VAR_39 = VAR_40 = VAR_41 =
  VAR_42 = 0;
 if (FUNC_1(VAR_45)) {
  if (VAR_34 & VAR_22)
   VAR_38 = FUNC_10(VAR_32->sense_len);
  if (VAR_34 & VAR_21)
   VAR_40 = FUNC_10(VAR_32->rsp_data_len);
  if (VAR_34 & (VAR_20 | VAR_19))
   VAR_41 = FUNC_10(VAR_32->rsp_residual_count);
  if (VAR_33 == 138)
   VAR_42 = FUNC_10(VAR_32->residual_len);
  VAR_43 = VAR_32->data;
  VAR_44 = VAR_32->data;
  FUNC_8(VAR_32->data, sizeof(VAR_32->data));
  VAR_35 = FUNC_9(VAR_32->ox_id);
  VAR_39 = sizeof(VAR_32->data);
 } else {
  if (VAR_34 & VAR_22)
   VAR_38 = FUNC_9(VAR_31->req_sense_length);
  if (VAR_34 & VAR_21)
   VAR_40 = FUNC_9(VAR_31->rsp_info_len);
  VAR_41 = FUNC_10(VAR_31->residual_length);
  VAR_43 = VAR_31->rsp_info;
  VAR_44 = VAR_31->req_sense_data;
  VAR_39 = sizeof(VAR_31->req_sense_data);
 }


 if (VAR_34 & VAR_21) {

  if (FUNC_1(VAR_45)) {
   VAR_44 += VAR_40;
   VAR_39 -= VAR_40;
  }
  if (VAR_40 > 3 && VAR_43[3]) {
   FUNC_12(VAR_24, VAR_29->vha, 0x3019,
       "FCP I/O protocol failure (0x%x/0x%x).\n",
       VAR_40, VAR_43[3]);

   VAR_50 = VAR_3 << 16;
   goto out;
  }
 }


 if (FUNC_1(VAR_45) && VAR_33 == 139 &&
     VAR_34 & VAR_19)
  VAR_33 = VAR_2;




 switch (VAR_33) {
 case 139:
 case 131:
  if (VAR_34 == 0) {
   VAR_50 = VAR_5 << 16;
   break;
  }
  if (VAR_34 & (VAR_20 | VAR_19)) {
   VAR_37 = VAR_41;
   FUNC_21(VAR_30, VAR_37);

   if (!VAR_36 &&
       ((unsigned)(FUNC_20(VAR_30) - VAR_37) <
        VAR_30->underflow)) {
    FUNC_12(VAR_24, VAR_29->vha, 0x301a,
        "Mid-layer underflow "
        "detected (0x%x of 0x%x bytes).\n",
        VAR_37, FUNC_20(VAR_30));

    VAR_50 = VAR_4 << 16;
    break;
   }
  }
  VAR_50 = VAR_5 << 16 | VAR_36;

  if (VAR_36 == VAR_13) {
   FUNC_12(VAR_24, VAR_29->vha, 0x301b,
       "QUEUE FULL detected.\n");
   break;
  }
  VAR_49 = 0;
  if (VAR_36 != VAR_17)
   break;

  FUNC_11(VAR_30->sense_buffer, 0, VAR_14);
  if (!(VAR_34 & VAR_22))
   break;

  FUNC_15(VAR_28, VAR_44, VAR_39, VAR_38,
      VAR_26, VAR_50);
  break;

 case 138:

  VAR_37 = FUNC_1(VAR_45) ? VAR_42 : VAR_41;
  FUNC_21(VAR_30, VAR_37);
  if (VAR_34 & VAR_20) {
   if (FUNC_1(VAR_45) && VAR_42 != VAR_41) {
    FUNC_12(VAR_24, VAR_29->vha, 0x301d,
        "Dropped frame(s) detected "
        "(0x%x of 0x%x bytes).\n",
        VAR_37, FUNC_20(VAR_30));

    VAR_50 = VAR_4 << 16 | VAR_36;
    goto check_scsi_status;
   }

   if (!VAR_36 &&
       ((unsigned)(FUNC_20(VAR_30) - VAR_37) <
       VAR_30->underflow)) {
    FUNC_12(VAR_24, VAR_29->vha, 0x301e,
        "Mid-layer underflow "
        "detected (0x%x of 0x%x bytes).\n",
        VAR_37, FUNC_20(VAR_30));

    VAR_50 = VAR_4 << 16;
    break;
   }
  } else if (VAR_36 != VAR_13 &&
       VAR_36 != VAR_12) {





   FUNC_12(VAR_24, VAR_29->vha, 0x301f,
       "Dropped frame(s) detected (0x%x "
       "of 0x%x bytes).\n", VAR_37,
       FUNC_20(VAR_30));

   VAR_50 = VAR_4 << 16 | VAR_36;
   goto check_scsi_status;
  } else {
   FUNC_12(VAR_24, VAR_29->vha, 0x3030,
       "scsi_status: 0x%x, lscsi_status: 0x%x\n",
       VAR_34, VAR_36);
  }

  VAR_50 = VAR_5 << 16 | VAR_36;
  VAR_49 = 0;

check_scsi_status:




  if (VAR_36 != 0) {
   if (VAR_36 == VAR_13) {
    FUNC_12(VAR_24, VAR_29->vha, 0x3020,
        "QUEUE FULL detected.\n");
    VAR_49 = 1;
    break;
   }
   if (VAR_36 != VAR_17)
    break;

   FUNC_11(VAR_30->sense_buffer, 0, VAR_14);
   if (!(VAR_34 & VAR_22))
    break;

   FUNC_15(VAR_28, VAR_44, VAR_39,
       VAR_38, VAR_26, VAR_50);
  }
  break;

 case 133:
 case 134:
 case 135:
 case 136:
 case 132:
 case 129:
 case 130:






  VAR_50 = VAR_7 << 16;

  if (VAR_33 == 129) {
   if (FUNC_1(VAR_45))
    break;
   else if ((FUNC_9(VAR_31->status_flags) &
       VAR_15) == 0)
    break;
  }

  FUNC_12(VAR_24, VAR_29->vha, 0x3021,
      "Port down status: port-state=0x%x.\n",
      FUNC_6(&VAR_29->state));

  if (FUNC_6(&VAR_29->state) == VAR_9)
   FUNC_16(VAR_29->vha, VAR_29, 1, 1);
  break;

 case 140:
  VAR_50 = VAR_6 << 16;
  break;

 case 137:
  VAR_49 = FUNC_14(VAR_28, VAR_32);
  VAR_50 = VAR_30->result;
  break;

 case 128:
  VAR_50 = VAR_4 << 16;

  if (!FUNC_2(VAR_45))
   break;

  if (VAR_51 & VAR_1)
   FUNC_19(VAR_11, VAR_30,
       "Unsupported device '%s' found.\n",
       VAR_30->device->vendor);
  break;

 default:
  VAR_50 = VAR_4 << 16;
  break;
 }

out:
 if (VAR_49)
  FUNC_12(VAR_24, VAR_29->vha, 0x3022,
      "FCP command status: 0x%x-0x%x (0x%x) "
      "nexus=%ld:%d:%d portid=%02x%02x%02x oxid=0x%x "
      "cdb=%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x len=0x%x "
      "rsp_info=0x%x resid=0x%x fw_resid=0x%x.\n",
      VAR_33, VAR_34, VAR_50, VAR_25->host_no,
      VAR_30->device->id, VAR_30->device->lun, VAR_29->d_id.b.domain,
      VAR_29->d_id.b.area, VAR_29->d_id.b.al_pa, VAR_35,
      VAR_30->cmnd[0], VAR_30->cmnd[1], VAR_30->cmnd[2], VAR_30->cmnd[3],
      VAR_30->cmnd[4], VAR_30->cmnd[5], VAR_30->cmnd[6], VAR_30->cmnd[7],
      VAR_30->cmnd[8], VAR_30->cmnd[9], FUNC_20(VAR_30), VAR_40,
      VAR_41, VAR_42);

 if (VAR_26->status_srb == ((void*)0))
  VAR_28->done(VAR_45, VAR_28, VAR_50);
}
