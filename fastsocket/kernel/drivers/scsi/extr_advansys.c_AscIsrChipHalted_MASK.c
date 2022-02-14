
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ushort ;
typedef size_t uchar ;
struct asc_board {size_t* sdtr_data; int queue_full; size_t* queue_full_cnt; } ;
struct TYPE_13__ {int pci_fix_asyn_xfer; scalar_t__* sdtr_period_tbl; size_t min_sdtr_index; size_t max_sdtr_index; int init_sdtr; int sdtr_done; int pci_fix_asyn_xfer_always; scalar_t__* cur_dvc_qng; int queue_full_or_busy; size_t* max_dvc_qng; int iop_base; struct asc_board* drv_ptr; } ;
struct TYPE_12__ {int remain_sg_entry_cnt; size_t next_sg_index; TYPE_3__* sg_head; } ;
struct TYPE_11__ {int queue_cnt; int * sg_list; } ;
struct TYPE_10__ {size_t sg_head_qp; int cntl; int seq_no; size_t q_no; scalar_t__ sg_cur_list_cnt; scalar_t__ sg_list_cnt; } ;
struct TYPE_9__ {scalar_t__ msg_type; scalar_t__ msg_req; scalar_t__ msg_len; scalar_t__ req_ack_offset; scalar_t__ xfer_period; scalar_t__ wdtr_width; } ;
typedef int PortAddr ;
typedef TYPE_1__ EXT_MSG ;
typedef TYPE_2__ ASC_SG_LIST_Q ;
typedef TYPE_3__ ASC_SG_HEAD ;
typedef TYPE_4__ ASC_SCSI_Q ;
typedef int ASC_SCSI_BIT_ID_TYPE ;
typedef TYPE_5__ ASC_DVC_VAR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 scalar_t__ VAR_16 ;
 size_t VAR_17 ;
 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 scalar_t__ FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t) ;
 int FUNC_4 (int ) ;
 size_t VAR_33 ;
 size_t FUNC_5 (TYPE_5__*,scalar_t__,scalar_t__) ;
 size_t FUNC_6 (int ,size_t) ;
 int FUNC_7 (int ,scalar_t__,size_t*,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__,size_t*,int) ;
 int FUNC_9 (int ,scalar_t__,size_t*,int) ;
 int FUNC_10 (TYPE_5__*,scalar_t__,size_t) ;
 void* FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int ,scalar_t__) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,size_t,size_t) ;
 int FUNC_15 (int ,scalar_t__,size_t) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int) ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 size_t VAR_44 ;
 size_t VAR_45 ;
 size_t VAR_46 ;
 size_t VAR_47 ;
 size_t VAR_48 ;
 int VAR_49 ;

__attribute__((used)) static int FUNC_18(ASC_DVC_VAR *VAR_50)
{
 EXT_MSG VAR_51;
 EXT_MSG VAR_52;
 ushort VAR_53;
 int VAR_54;
 ushort VAR_55;
 ASC_SCSI_BIT_ID_TYPE VAR_56;
 ASC_SCSI_BIT_ID_TYPE VAR_57;
 PortAddr VAR_58;
 uchar VAR_59;
 uchar VAR_60;
 uchar VAR_61;
 uchar VAR_62;
 uchar VAR_63;
 uchar VAR_64, VAR_65;
 uchar VAR_66;
 uchar VAR_67;
 uchar VAR_68;
 struct asc_board *VAR_69;

 FUNC_17(!VAR_50->drv_ptr);
 VAR_69 = VAR_50->drv_ptr;

 VAR_58 = VAR_50->iop_base;
 VAR_55 = FUNC_13(VAR_58, VAR_1);

 VAR_61 = FUNC_11(VAR_58, VAR_0);
 VAR_53 = FUNC_0(VAR_61);
 VAR_63 = FUNC_11(VAR_58,
        (ushort)(VAR_53 +
          (ushort)VAR_24));
 VAR_64 = FUNC_11(VAR_58,
       (ushort)(VAR_53 + (ushort)VAR_18));
 VAR_65 = FUNC_3(VAR_63);
 VAR_57 = (uchar)FUNC_2(VAR_65);
 if (VAR_50->pci_fix_asyn_xfer & VAR_57) {
  VAR_67 = VAR_33;
 } else {
  VAR_67 = 0;
 }
 if (VAR_55 == VAR_8) {
  if (VAR_50->pci_fix_asyn_xfer & VAR_57) {
   FUNC_14(VAR_58, 0, VAR_65);
   VAR_69->sdtr_data[VAR_65] = 0;
  }
  FUNC_16(VAR_58, VAR_1, 0);
  return (0);
 } else if (VAR_55 == VAR_9) {
  if (VAR_50->pci_fix_asyn_xfer & VAR_57) {
   FUNC_14(VAR_58, VAR_67, VAR_65);
   VAR_69->sdtr_data[VAR_65] = VAR_67;
  }
  FUNC_16(VAR_58, VAR_1, 0);
  return (0);
 } else if (VAR_55 == VAR_10) {
  FUNC_8(VAR_58,
       VAR_3,
       (uchar *)&VAR_51,
       sizeof(EXT_MSG) >> 1);

  if (VAR_51.msg_type == VAR_34 &&
      VAR_51.msg_req == VAR_35 &&
      VAR_51.msg_len == VAR_39) {
   VAR_54 = VAR_49;
   if ((VAR_51.req_ack_offset > VAR_30)) {

    VAR_54 = VAR_37;
    VAR_51.req_ack_offset = VAR_30;
   }
   if ((VAR_51.xfer_period <
        VAR_50->sdtr_period_tbl[VAR_50->min_sdtr_index])
       || (VAR_51.xfer_period >
    VAR_50->sdtr_period_tbl[VAR_50->
        max_sdtr_index])) {
    VAR_54 = VAR_37;
    VAR_51.xfer_period =
        VAR_50->sdtr_period_tbl[VAR_50->
            min_sdtr_index];
   }
   if (VAR_54) {
    VAR_62 =
        FUNC_5(VAR_50, VAR_51.xfer_period,
         VAR_51.req_ack_offset);
    if (VAR_62 == 0xFF) {

     VAR_64 |= VAR_44;
     VAR_50->init_sdtr &= ~VAR_57;
     VAR_50->sdtr_done &= ~VAR_57;
     FUNC_14(VAR_58, VAR_67,
             VAR_65);
     VAR_69->sdtr_data[VAR_65] = VAR_67;
    }
   }
   if (VAR_51.req_ack_offset == 0) {

    VAR_64 &= ~VAR_44;
    VAR_50->init_sdtr &= ~VAR_57;
    VAR_50->sdtr_done &= ~VAR_57;
    FUNC_14(VAR_58, VAR_67, VAR_65);
   } else {
    if (VAR_54 && (VAR_64 & VAR_44)) {
     VAR_64 &= ~VAR_44;
     VAR_50->sdtr_done |= VAR_57;
     VAR_50->init_sdtr |= VAR_57;
     VAR_50->pci_fix_asyn_xfer &=
         ~VAR_57;
     VAR_62 =
         FUNC_5(VAR_50,
          VAR_51.xfer_period,
          VAR_51.
          req_ack_offset);
     FUNC_14(VAR_58, VAR_62,
             VAR_65);
     VAR_69->sdtr_data[VAR_65] = VAR_62;
    } else {
     VAR_64 |= VAR_44;
     FUNC_10(VAR_50,
            VAR_51.xfer_period,
            VAR_51.req_ack_offset);
     VAR_50->pci_fix_asyn_xfer &=
         ~VAR_57;
     VAR_62 =
         FUNC_5(VAR_50,
          VAR_51.xfer_period,
          VAR_51.
          req_ack_offset);
     FUNC_14(VAR_58, VAR_62,
             VAR_65);
     VAR_69->sdtr_data[VAR_65] = VAR_62;
     VAR_50->sdtr_done |= VAR_57;
     VAR_50->init_sdtr |= VAR_57;
    }
   }

   FUNC_15(VAR_58,
      (ushort)(VAR_53 +
        (ushort)VAR_18),
      VAR_64);
   FUNC_16(VAR_58, VAR_1, 0);
   return (0);
  } else if (VAR_51.msg_type == VAR_34 &&
      VAR_51.msg_req == VAR_36 &&
      VAR_51.msg_len == VAR_40) {

   VAR_51.wdtr_width = 0;
   FUNC_9(VAR_58,
      VAR_4,
      (uchar *)&VAR_51,
      sizeof(EXT_MSG) >> 1);
   VAR_64 |= VAR_44;
   FUNC_15(VAR_58,
      (ushort)(VAR_53 +
        (ushort)VAR_18),
      VAR_64);
   FUNC_16(VAR_58, VAR_1, 0);
   return (0);
  } else {

   VAR_51.msg_type = VAR_38;
   FUNC_9(VAR_58,
      VAR_4,
      (uchar *)&VAR_51,
      sizeof(EXT_MSG) >> 1);
   VAR_64 |= VAR_44;
   FUNC_15(VAR_58,
      (ushort)(VAR_53 +
        (ushort)VAR_18),
      VAR_64);
   FUNC_16(VAR_58, VAR_1, 0);
   return (0);
  }
 } else if (VAR_55 == VAR_7) {

  VAR_64 |= VAR_45;

  if ((VAR_50->init_sdtr & VAR_57) != 0) {

   VAR_50->sdtr_done &= ~VAR_57;

   VAR_62 = FUNC_6(VAR_58, VAR_65);
   VAR_64 |= VAR_44;
   FUNC_10(VAR_50,
          VAR_50->
          sdtr_period_tbl[(VAR_62 >> 4) &
            (uchar)(VAR_50->
             max_sdtr_index -
             1)],
          (uchar)(VAR_62 & (uchar)
           VAR_30));
  }

  FUNC_15(VAR_58,
     (ushort)(VAR_53 +
       (ushort)VAR_18), VAR_64);

  VAR_59 = FUNC_11(VAR_58,
        (ushort)(VAR_53 + (ushort)
          VAR_23));
  VAR_59 &= 0xDC;
  if ((VAR_50->pci_fix_asyn_xfer & VAR_57)
      && !(VAR_50->pci_fix_asyn_xfer_always & VAR_57)
      ) {

   VAR_59 |= (VAR_32
         | VAR_31);

  }
  FUNC_15(VAR_58,
     (ushort)(VAR_53 +
       (ushort)VAR_23),
     VAR_59);

  VAR_60 = FUNC_11(VAR_58,
        (ushort)(VAR_53 + (ushort)
          VAR_22));
  VAR_60 |= (VAR_47 | VAR_46);
  FUNC_15(VAR_58,
     (ushort)(VAR_53 +
       (ushort)VAR_22),
     VAR_60);

  VAR_56 = FUNC_11(VAR_58, (ushort)VAR_6);
  VAR_56 &= ~VAR_57;
  FUNC_15(VAR_58, (ushort)VAR_6, VAR_56);

  FUNC_16(VAR_58, VAR_1, 0);
  return (0);
 } else if (VAR_55 == VAR_12) {

  FUNC_8(VAR_58,
       VAR_4,
       (uchar *)&VAR_52,
       sizeof(EXT_MSG) >> 1);

  if ((VAR_52.msg_type == VAR_34) &&
      (VAR_52.msg_len == VAR_39) &&
      (VAR_52.msg_req == VAR_35)) {

   VAR_50->init_sdtr &= ~VAR_57;
   VAR_50->sdtr_done &= ~VAR_57;
   FUNC_14(VAR_58, VAR_67, VAR_65);
   VAR_69->sdtr_data[VAR_65] = VAR_67;
  }
  VAR_64 &= ~VAR_44;
  FUNC_15(VAR_58,
     (ushort)(VAR_53 +
       (ushort)VAR_18), VAR_64);
  FUNC_16(VAR_58, VAR_1, 0);
  return (0);
 } else if (VAR_55 == VAR_13) {

  VAR_68 = FUNC_11(VAR_58,
           (ushort)((ushort)VAR_53 +
             (ushort)
             VAR_26));
  VAR_66 =
      FUNC_11(VAR_58,
        (ushort)((ushort)VAR_16 +
          (ushort)VAR_63));
  if ((VAR_66 > 0) && (VAR_50->cur_dvc_qng[VAR_65] > 0)) {

   VAR_56 = FUNC_11(VAR_58,
          (ushort)VAR_6);
   VAR_56 |= VAR_57;
   FUNC_15(VAR_58,
      (ushort)VAR_6, VAR_56);
   VAR_50->queue_full_or_busy |= VAR_57;

   if (VAR_68 == VAR_48) {
    if (VAR_66 > VAR_15) {
     VAR_66 -= 1;
     VAR_50->max_dvc_qng[VAR_65] =
         VAR_66;

     FUNC_15(VAR_58,
        (ushort)((ushort)
          VAR_2
          + (ushort)
          VAR_65),
        VAR_66);






     VAR_69->queue_full |= VAR_57;
     VAR_69->queue_full_cnt[VAR_65] =
         VAR_66;
    }
   }
  }
  FUNC_16(VAR_58, VAR_1, 0);
  return (0);
 }
 return (0);
}
