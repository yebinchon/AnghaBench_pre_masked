
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct sts_entry_fx00 {size_t handle; int* data; int residual_len; int sense_len; int scsi_status; int comp_status; } ;
struct scsi_cmnd {unsigned int underflow; int * cmnd; TYPE_1__* device; int sense_buffer; } ;
struct rsp_que {int * status_srb; } ;
struct req_que {size_t num_outstanding_cmds; TYPE_2__** outstanding_cmds; } ;
struct qla_hw_data {struct req_que** req_q_map; } ;
struct TYPE_16__ {scalar_t__ type; int (* done ) (struct qla_hw_data*,TYPE_2__*,int) ;TYPE_4__* fcport; } ;
typedef TYPE_2__ srb_t ;
struct TYPE_17__ {int host_no; int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
typedef size_t int32_t ;
struct TYPE_18__ {int tgt_id; int vha; int state; } ;
typedef TYPE_4__ fc_port_t ;
struct TYPE_15__ {int lun; int id; } ;




 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct scsi_cmnd* FUNC_0 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_1 (struct qla_hw_data*) ;
 int FUNC_2 (struct qla_hw_data*) ;
 size_t FUNC_3 (size_t) ;
 size_t FUNC_4 (size_t) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (int ) ;
 size_t FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,TYPE_3__*,int,char*,...) ;
 int VAR_17 ;
 int FUNC_10 (int ,TYPE_4__*,int,int) ;
 int FUNC_11 (TYPE_3__*,struct req_que*,size_t) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_2__*,int*,size_t,size_t,struct rsp_que*,int) ;
 int FUNC_14 (TYPE_3__*,struct req_que*,void*,TYPE_2__*,size_t,size_t) ;
 size_t FUNC_15 (struct scsi_cmnd*) ;
 int FUNC_16 (struct scsi_cmnd*,size_t) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (struct qla_hw_data*,TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_19(scsi_qla_host_t *VAR_18, struct rsp_que *VAR_19, void *VAR_20)
{
 srb_t *VAR_21;
 fc_port_t *VAR_22;
 struct scsi_cmnd *VAR_23;
 struct sts_entry_fx00 *VAR_24;
 uint16_t VAR_25;
 uint16_t VAR_26;
 uint16_t VAR_27;
 uint8_t VAR_28;
 int32_t VAR_29;
 uint32_t VAR_30, VAR_31, VAR_32, VAR_33,
     VAR_34;
 uint8_t *VAR_35 = ((void*)0), *VAR_36 = ((void*)0);
 struct qla_hw_data *VAR_37 = VAR_18->hw;
 uint32_t VAR_38, VAR_39;
 uint16_t VAR_40;
 struct req_que *VAR_41;
 int VAR_42 = 1;
 int VAR_43 = 0;

 VAR_24 = (struct sts_entry_fx00 *) VAR_20;

 VAR_25 = FUNC_6(VAR_24->comp_status);
 VAR_26 = FUNC_6(VAR_24->scsi_status) & VAR_12;
 VAR_38 = VAR_24->handle;
 VAR_39 = FUNC_3(VAR_38);

 VAR_40 = FUNC_4(VAR_38);
 VAR_41 = VAR_37->req_q_map[VAR_40];


 if (VAR_39 < VAR_41->num_outstanding_cmds)
  VAR_21 = VAR_41->outstanding_cmds[VAR_39];
 else
  VAR_21 = ((void*)0);

 if (VAR_21 == ((void*)0)) {
  FUNC_9(VAR_17, VAR_18, 0x3034,
      "Invalid status handle (0x%x).\n", VAR_39);

  FUNC_17(VAR_6, &VAR_18->dpc_flags);
  FUNC_12(VAR_18);
  return;
 }

 if (VAR_21->type == VAR_10) {
  VAR_41->outstanding_cmds[VAR_39] = ((void*)0);
  FUNC_14(VAR_18, VAR_41, VAR_20, VAR_21,
      VAR_26, VAR_25);
  return;
 }


 if (VAR_25 == 137 && VAR_26 == 0) {
  FUNC_11(VAR_18, VAR_41, VAR_39);
  return;
 }

 VAR_41->outstanding_cmds[VAR_39] = ((void*)0);
 VAR_23 = FUNC_0(VAR_21);
 if (VAR_23 == ((void*)0)) {
  FUNC_9(VAR_17, VAR_18, 0x3048,
      "Command already returned (0x%x/%p).\n",
      VAR_39, VAR_21);

  return;
 }

 VAR_28 = VAR_26 & VAR_16;

 VAR_22 = VAR_21->fcport;

 VAR_27 = 0;
 VAR_30 = VAR_31 = VAR_32 = VAR_33 =
  VAR_34 = 0;
 if (VAR_26 & VAR_15)
  VAR_30 = FUNC_7(VAR_24->sense_len);
 if (VAR_26 & (VAR_14 | VAR_13))
  VAR_33 = FUNC_7(VAR_24->residual_len);
 if (VAR_25 == 136)
  VAR_34 = FUNC_7(VAR_24->residual_len);
 VAR_35 = VAR_36 = VAR_24->data;
 VAR_31 = sizeof(VAR_24->data);


 if (VAR_25 == 137 &&
     VAR_26 & VAR_13)
  VAR_25 = VAR_0;




 switch (VAR_25) {
 case 137:
 case 130:
  if (VAR_26 == 0) {
   VAR_43 = VAR_2 << 16;
   break;
  }
  if (VAR_26 & (VAR_14 | VAR_13)) {
   VAR_29 = VAR_33;
   FUNC_16(VAR_23, VAR_29);

   if (!VAR_28 &&
       ((unsigned)(FUNC_15(VAR_23) - VAR_29) <
        VAR_23->underflow)) {
    FUNC_9(VAR_17, VAR_22->vha, 0x3050,
        "Mid-layer underflow "
        "detected (0x%x of 0x%x bytes).\n",
        VAR_29, FUNC_15(VAR_23));

    VAR_43 = VAR_1 << 16;
    break;
   }
  }
  VAR_43 = VAR_2 << 16 | VAR_28;

  if (VAR_28 == VAR_8) {
   FUNC_9(VAR_17, VAR_22->vha, 0x3051,
       "QUEUE FULL detected.\n");
   break;
  }
  VAR_42 = 0;
  if (VAR_28 != VAR_11)
   break;

  FUNC_8(VAR_23->sense_buffer, 0, VAR_9);
  if (!(VAR_26 & VAR_15))
   break;

  FUNC_13(VAR_21, VAR_36, VAR_31, VAR_30,
      VAR_19, VAR_43);
  break;

 case 136:

  if (FUNC_1(VAR_37) || FUNC_2(VAR_37))
   VAR_29 = VAR_34;
  else
   VAR_29 = VAR_33;
  FUNC_16(VAR_23, VAR_29);
  if (VAR_26 & VAR_14) {
   if ((FUNC_1(VAR_37) || FUNC_2(VAR_37))
       && VAR_34 != VAR_33) {
    FUNC_9(VAR_17, VAR_22->vha, 0x3052,
        "Dropped frame(s) detected "
        "(0x%x of 0x%x bytes).\n",
        VAR_29, FUNC_15(VAR_23));

    VAR_43 = VAR_1 << 16 | VAR_28;
    goto check_scsi_status;
   }

   if (!VAR_28 &&
       ((unsigned)(FUNC_15(VAR_23) - VAR_29) <
       VAR_23->underflow)) {
    FUNC_9(VAR_17, VAR_22->vha, 0x3053,
        "Mid-layer underflow "
        "detected (0x%x of 0x%x bytes, "
        "cp->underflow: 0x%x).\n",
        VAR_29, FUNC_15(VAR_23), VAR_23->underflow);

    VAR_43 = VAR_1 << 16;
    break;
   }
  } else if (VAR_28 != VAR_8 &&
       VAR_28 != VAR_7) {





   FUNC_9(VAR_17, VAR_22->vha, 0x3054,
       "Dropped frame(s) detected (0x%x "
       "of 0x%x bytes).\n", VAR_29,
       FUNC_15(VAR_23));

   VAR_43 = VAR_1 << 16 | VAR_28;
   goto check_scsi_status;
  } else {
   FUNC_9(VAR_17, VAR_22->vha, 0x3055,
       "scsi_status: 0x%x, lscsi_status: 0x%x\n",
       VAR_26, VAR_28);
  }

  VAR_43 = VAR_2 << 16 | VAR_28;
  VAR_42 = 0;

check_scsi_status:




  if (VAR_28 != 0) {
   if (VAR_28 == VAR_8) {
    FUNC_9(VAR_17, VAR_22->vha, 0x3056,
        "QUEUE FULL detected.\n");
    VAR_42 = 1;
    break;
   }
   if (VAR_28 != VAR_11)
    break;

   FUNC_8(VAR_23->sense_buffer, 0, VAR_9);
   if (!(VAR_26 & VAR_15))
    break;

   FUNC_13(VAR_21, VAR_36, VAR_31,
       VAR_30, VAR_19, VAR_43);
  }
  break;

 case 132:
 case 133:
 case 134:
 case 135:
 case 131:
 case 128:
 case 129:






  VAR_43 = VAR_4 << 16;

  FUNC_9(VAR_17, VAR_22->vha, 0x3057,
      "Port down status: port-state=0x%x.\n",
      FUNC_5(&VAR_22->state));

  if (FUNC_5(&VAR_22->state) == VAR_5)
   FUNC_10(VAR_22->vha, VAR_22, 1, 1);
  break;

 case 138:
  VAR_43 = VAR_3 << 16;
  break;

 default:
  VAR_43 = VAR_1 << 16;
  break;
 }

 if (VAR_42)
  FUNC_9(VAR_17, VAR_22->vha, 0x3058,
      "FCP command status: 0x%x-0x%x (0x%x) "
      "nexus=%ld:%d:%d tgt_id: 0x%x lscsi_status: 0x%x"
      "cdb=%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x len=0x%x "
      "rsp_info=0x%x resid=0x%x fw_resid=0x%x "
      "sense_len=0x%x, par_sense_len=0x%x, rsp_info_len=0x%x\n",
      VAR_25, VAR_26, VAR_43, VAR_18->host_no,
      VAR_23->device->id, VAR_23->device->lun, VAR_22->tgt_id,
      VAR_28, VAR_23->cmnd[0], VAR_23->cmnd[1], VAR_23->cmnd[2],
      VAR_23->cmnd[3], VAR_23->cmnd[4], VAR_23->cmnd[5], VAR_23->cmnd[6],
      VAR_23->cmnd[7], VAR_23->cmnd[8], VAR_23->cmnd[9], FUNC_15(VAR_23),
      VAR_32, VAR_33, VAR_34, VAR_30,
      VAR_31, VAR_32);

 if (VAR_19->status_srb == ((void*)0))
  VAR_21->done(VAR_37, VAR_21, VAR_43);
}
