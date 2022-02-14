
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ushort ;
typedef scalar_t__ uchar ;
struct TYPE_13__ {int queue_full_or_busy; scalar_t__* max_dvc_qng; scalar_t__ cur_total_qng; scalar_t__* cur_dvc_qng; int unit_not_ready; int start_motor; int max_dma_count; int iop_base; } ;
struct TYPE_11__ {scalar_t__ done_stat; scalar_t__ host_stat; } ;
struct TYPE_10__ {unsigned long srb_ptr; scalar_t__ target_ix; } ;
struct TYPE_12__ {scalar_t__ q_status; int cntl; scalar_t__ extra_bytes; TYPE_2__ d3; int remain_bytes; TYPE_1__ d2; } ;
typedef int PortAddr ;
typedef int ASC_SCSI_BIT_ID_TYPE ;
typedef TYPE_3__ ASC_QDONE_INFO ;
typedef TYPE_4__ ASC_DVC_VAR ;
typedef scalar_t__ ADV_DCNT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 void* FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 void* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 void* VAR_27 ;
 scalar_t__ FUNC_11 (int ,scalar_t__,TYPE_3__*,int ) ;
 int FUNC_12 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(ASC_DVC_VAR *VAR_28)
{
 uchar VAR_29;
 uchar VAR_30;
 uchar VAR_31;
 uchar VAR_32;
 uchar VAR_33;
 uchar VAR_34;
 uchar VAR_35;
 ASC_SCSI_BIT_ID_TYPE VAR_36;
 ASC_SCSI_BIT_ID_TYPE VAR_37;
 PortAddr VAR_38;
 ushort VAR_39;
 ushort VAR_40;
 uchar VAR_41;
 ASC_QDONE_INFO VAR_42;
 ASC_QDONE_INFO *VAR_43;
 int VAR_44;

 VAR_38 = VAR_28->iop_base;
 VAR_30 = 1;
 VAR_43 = (ASC_QDONE_INFO *)&VAR_42;
 VAR_34 = (uchar)FUNC_3(VAR_38);
 VAR_39 = FUNC_0(VAR_34);
 VAR_29 = FUNC_5(VAR_38,
      (ushort)(VAR_39 + (ushort)VAR_6));
 if (VAR_29 != VAR_5) {
  FUNC_4(VAR_38, VAR_29);
  VAR_39 = FUNC_0(VAR_29);
  VAR_32 = FUNC_11(VAR_38, VAR_39, VAR_43,
           VAR_28->max_dma_count);
  FUNC_10(VAR_38,
     (ushort)(VAR_39 +
       (ushort)VAR_7),
     (uchar)(VAR_43->
      q_status & (uchar)~(VAR_26 |
            VAR_23)));
  VAR_35 = FUNC_2(VAR_43->d2.target_ix);
  VAR_37 = FUNC_1(VAR_43->d2.target_ix);
  if ((VAR_43->cntl & VAR_16) != 0) {
   VAR_40 = VAR_39;
   VAR_31 = VAR_29;
   for (VAR_33 = 0; VAR_33 < VAR_32; VAR_33++) {
    VAR_31 = FUNC_5(VAR_38,
            (ushort)(VAR_40
              + (ushort)
              VAR_6));
    VAR_40 = FUNC_0(VAR_31);
    if (VAR_31 == VAR_5) {
     FUNC_8(VAR_28,
          VAR_2);
     VAR_43->d3.done_stat = VAR_18;
     VAR_43->d3.host_stat =
         VAR_19;
     goto FATAL_ERR_QDONE;
    }
    FUNC_10(VAR_38,
       (ushort)(VAR_40 + (ushort)
         VAR_7),
       VAR_25);
   }
   VAR_30 = VAR_32 + 1;
   FUNC_4(VAR_38, VAR_31);
  }
  if (VAR_28->queue_full_or_busy & VAR_37) {
   VAR_41 = FUNC_5(VAR_38,
        (ushort)((ushort)
          VAR_4
          + (ushort)
          VAR_43->d2.
          target_ix));
   if (VAR_41 < VAR_28->max_dvc_qng[VAR_35]) {
    VAR_36 = FUNC_5(VAR_38, (ushort)
           VAR_3);
    VAR_36 &= ~VAR_37;
    FUNC_10(VAR_38,
       (ushort)VAR_3,
       VAR_36);
    VAR_28->queue_full_or_busy &= ~VAR_37;
   }
  }
  if (VAR_28->cur_total_qng >= VAR_30) {
   VAR_28->cur_total_qng -= VAR_30;
   if (VAR_28->cur_dvc_qng[VAR_35] != 0) {
    VAR_28->cur_dvc_qng[VAR_35]--;
   }
  } else {
   FUNC_8(VAR_28, VAR_0);
   VAR_43->d3.done_stat = VAR_18;
   goto FATAL_ERR_QDONE;
  }
  if ((VAR_43->d2.srb_ptr == 0UL) ||
      ((VAR_43->q_status & VAR_23) != 0)) {
   return (0x11);
  } else if (VAR_43->q_status == VAR_24) {
   VAR_44 = VAR_12;
   if (VAR_43->extra_bytes != 0) {
    VAR_43->remain_bytes +=
        (ADV_DCNT)VAR_43->extra_bytes;
   }
   if (VAR_43->d3.done_stat == VAR_18) {
    if (VAR_43->d3.host_stat ==
        VAR_20) {
     if ((VAR_43->
          cntl & (VAR_13 | VAR_14))
         == 0) {
      VAR_43->d3.done_stat =
          VAR_17;
      VAR_43->d3.host_stat =
          VAR_22;
     } else if (VAR_44) {
      VAR_43->d3.done_stat =
          VAR_17;
      VAR_43->d3.host_stat =
          VAR_22;
     }
    } else if (VAR_43->d3.host_stat ==
        VAR_21) {
     FUNC_9(VAR_38);
     FUNC_6(VAR_38,
         (uchar)(VAR_10
          | VAR_9));
     FUNC_13(60);
     FUNC_6(VAR_38, VAR_9);
     FUNC_7(VAR_38,
        VAR_11);
     FUNC_7(VAR_38, 0);
     FUNC_6(VAR_38, 0);
    }
   }
   if ((VAR_43->cntl & VAR_15) == 0) {
    FUNC_12(VAR_28, VAR_43);
   } else {
    if ((FUNC_5(VAR_38,
           (ushort)(VAR_39 + (ushort)
             VAR_8))
         == VAR_27)) {
     VAR_28->unit_not_ready &= ~VAR_37;
     if (VAR_43->d3.done_stat != VAR_17) {
      VAR_28->start_motor &=
          ~VAR_37;
     }
    }
   }
   return (1);
  } else {
   FUNC_8(VAR_28, VAR_1);
 FATAL_ERR_QDONE:
   if ((VAR_43->cntl & VAR_15) == 0) {
    FUNC_12(VAR_28, VAR_43);
   }
   return (0x80);
  }
 }
 return (0);
}
