
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int ipath_flags; int ipath_lli_errors; int ipath_lli_errs; int ipath_overrun_thresh_errs; } ;
struct infinipath_counters {scalar_t__ RxDlidFltrCnt; scalar_t__ RxVlErrCnt; int LocalLinkIntegrityErrCnt; int ExcessBufferOvflCnt; scalar_t__ PcieRetryBufDiagQwordCnt; scalar_t__ RxOtherLocalPhyErrCnt; scalar_t__ RxVL15DroppedPktCnt; void* IBSymbolErrCnt; void* IBLinkDownedCnt; void* IBLinkErrRecoveryCnt; void* IBStatusChangeCnt; scalar_t__ RxP16HdrEgrOvflCnt; scalar_t__ RxP15HdrEgrOvflCnt; scalar_t__ RxP14HdrEgrOvflCnt; scalar_t__ RxP13HdrEgrOvflCnt; scalar_t__ RxP12HdrEgrOvflCnt; scalar_t__ RxP11HdrEgrOvflCnt; scalar_t__ RxP10HdrEgrOvflCnt; scalar_t__ RxP9HdrEgrOvflCnt; void* RxP8HdrEgrOvflCnt; void* RxP7HdrEgrOvflCnt; void* RxP6HdrEgrOvflCnt; void* RxP5HdrEgrOvflCnt; void* RxP4HdrEgrOvflCnt; void* RxP3HdrEgrOvflCnt; void* RxP2HdrEgrOvflCnt; void* RxP1HdrEgrOvflCnt; void* RxP0HdrEgrOvflCnt; void* RxPKeyMismatchCnt; void* RxTIDValidErrCnt; void* RxTIDFullErrCnt; void* RxBufOvflCnt; void* RxLPCRCErrCnt; void* RxEBPCnt; void* RxLinkProblemCnt; void* RxBadFormatCnt; void* RxFlowCtrlErrCnt; void* RxVCRCErrCnt; void* RxICRCErrCnt; void* RxMaxMinLenErrCnt; void* RxLenErrCnt; void* RxDwordCnt; void* RxFlowPktCnt; void* RxDataPktCnt; void* RxDroppedPktCnt; void* TxDroppedPktCnt; void* TxFlowStallCnt; void* TxUnderrunCnt; void* TxMaxMinLenErrCnt; void* TxLenErrCnt; void* TxDwordCnt; void* TxFlowPktCnt; void* TxDataPktCnt; void* TxUnsupVLErrCnt; scalar_t__ TxSDmaDescCnt; void* LBFlowStallCnt; void* LBIntCnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 void* FUNC_1 (struct ipath_devdata*,int ) ;

__attribute__((used)) static void FUNC_2(struct ipath_devdata *VAR_42,
       struct infinipath_counters *VAR_43)
{
 VAR_43->LBIntCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_6));
 VAR_43->LBFlowStallCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_5));
 VAR_43->TxSDmaDescCnt = 0;
 VAR_43->TxUnsupVLErrCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_41));
 VAR_43->TxDataPktCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_33));
 VAR_43->TxFlowPktCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_36));
 VAR_43->TxDwordCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_35));
 VAR_43->TxLenErrCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_38));
 VAR_43->TxMaxMinLenErrCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_39));
 VAR_43->TxUnderrunCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_40));
 VAR_43->TxFlowStallCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_37));
 VAR_43->TxDroppedPktCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_34));
 VAR_43->RxDroppedPktCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_10));
 VAR_43->RxDataPktCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_9));
 VAR_43->RxFlowPktCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_14));
 VAR_43->RxDwordCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_11));
 VAR_43->RxLenErrCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_17));
 VAR_43->RxMaxMinLenErrCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_19));
 VAR_43->RxICRCErrCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_15));
 VAR_43->RxVCRCErrCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_32));
 VAR_43->RxFlowCtrlErrCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_13));
 VAR_43->RxBadFormatCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_7));
 VAR_43->RxLinkProblemCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_18));
 VAR_43->RxEBPCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_12));
 VAR_43->RxLPCRCErrCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_16));
 VAR_43->RxBufOvflCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_8));
 VAR_43->RxTIDFullErrCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_30));
 VAR_43->RxTIDValidErrCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_31));
 VAR_43->RxPKeyMismatchCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_29));
 VAR_43->RxP0HdrEgrOvflCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_20));
 VAR_43->RxP1HdrEgrOvflCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_21));
 VAR_43->RxP2HdrEgrOvflCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_22));
 VAR_43->RxP3HdrEgrOvflCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_23));
 VAR_43->RxP4HdrEgrOvflCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_24));
 VAR_43->RxP5HdrEgrOvflCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_25));
 VAR_43->RxP6HdrEgrOvflCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_26));
 VAR_43->RxP7HdrEgrOvflCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_27));
 VAR_43->RxP8HdrEgrOvflCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_28));
 VAR_43->RxP9HdrEgrOvflCnt = 0;
 VAR_43->RxP10HdrEgrOvflCnt = 0;
 VAR_43->RxP11HdrEgrOvflCnt = 0;
 VAR_43->RxP12HdrEgrOvflCnt = 0;
 VAR_43->RxP13HdrEgrOvflCnt = 0;
 VAR_43->RxP14HdrEgrOvflCnt = 0;
 VAR_43->RxP15HdrEgrOvflCnt = 0;
 VAR_43->RxP16HdrEgrOvflCnt = 0;
 VAR_43->IBStatusChangeCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_2));
 VAR_43->IBLinkErrRecoveryCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_1));
 VAR_43->IBLinkDownedCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_0));
 VAR_43->IBSymbolErrCnt =
  FUNC_1(VAR_42, FUNC_0(VAR_3));
 VAR_43->RxVL15DroppedPktCnt = 0;
 VAR_43->RxOtherLocalPhyErrCnt = 0;
 VAR_43->PcieRetryBufDiagQwordCnt = 0;
 VAR_43->ExcessBufferOvflCnt = VAR_42->ipath_overrun_thresh_errs;
 VAR_43->LocalLinkIntegrityErrCnt =
  (VAR_42->ipath_flags & VAR_4) ?
  VAR_42->ipath_lli_errs : VAR_42->ipath_lli_errors;
 VAR_43->RxVlErrCnt = 0;
 VAR_43->RxDlidFltrCnt = 0;
}
