
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dma_rcv_ctx {int task; int ctrlClear; scalar_t__ ctrlSet; } ;
struct dma_trm_ctx {int task; int ctrlClear; scalar_t__ ctrlSet; } ;
struct ti_ohci {int nb_iso_xmit_ctx; int nb_iso_rcv_ctx; int event_lock; struct dma_rcv_ctx ar_resp_context; struct dma_rcv_ctx ar_req_context; struct dma_trm_ctx at_resp_context; struct dma_trm_ctx at_req_context; struct hpsb_host* host; scalar_t__ check_busreset; } ;
struct hpsb_host {scalar_t__ in_bus_reset; } ;
typedef int quadlet_t ;
typedef int irqreturn_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
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
 int VAR_42 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_43 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct ti_ohci*,struct hpsb_host*,int,int) ;
 int FUNC_4 (struct hpsb_host*) ;
 int FUNC_5 (struct hpsb_host*,int,int) ;
 int FUNC_6 (struct ti_ohci*,int ,char*) ;
 int FUNC_7 (struct hpsb_host*,int ,int ) ;
 int FUNC_8 (struct ti_ohci*,int,int) ;
 scalar_t__ VAR_44 ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (struct ti_ohci*,scalar_t__) ;
 int FUNC_11 (struct ti_ohci*,scalar_t__,int) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int) ;

__attribute__((used)) static irqreturn_t FUNC_16(int VAR_45, void *VAR_46)
{
 quadlet_t VAR_47, VAR_48;
 struct ti_ohci *VAR_49 = (struct ti_ohci *)VAR_46;
 struct hpsb_host *VAR_50 = VAR_49->host;
 int VAR_51 = -1, VAR_52 = 0;
 unsigned long VAR_53;




 FUNC_12(&VAR_49->event_lock, VAR_53);
 VAR_47 = FUNC_10(VAR_49, VAR_13);
 FUNC_11(VAR_49, VAR_13, VAR_47 & ~VAR_33);
 FUNC_13(&VAR_49->event_lock, VAR_53);

 if (!VAR_47)
  return VAR_1;




 if (VAR_47 == ~(u32) 0) {
  FUNC_0("Device removed.");
  return VAR_1;
 }

 FUNC_0("IntEvent: %08x", VAR_47);

 if (VAR_47 & VAR_42) {
  int VAR_54;
  FUNC_1(VAR_2, "Unrecoverable error!");

  if (FUNC_10(VAR_49, VAR_8) & 0x800)
   FUNC_1(VAR_2, "Async Req Tx Context died: "
    "ctrl[%08x] cmdptr[%08x]",
    FUNC_10(VAR_49, VAR_8),
    FUNC_10(VAR_49, VAR_7));

  if (FUNC_10(VAR_49, VAR_12) & 0x800)
   FUNC_1(VAR_2, "Async Rsp Tx Context died: "
    "ctrl[%08x] cmdptr[%08x]",
    FUNC_10(VAR_49, VAR_12),
    FUNC_10(VAR_49, VAR_11));

  if (FUNC_10(VAR_49, VAR_6) & 0x800)
   FUNC_1(VAR_2, "Async Req Rcv Context died: "
    "ctrl[%08x] cmdptr[%08x]",
    FUNC_10(VAR_49, VAR_6),
    FUNC_10(VAR_49, VAR_5));

  if (FUNC_10(VAR_49, VAR_10) & 0x800)
   FUNC_1(VAR_2, "Async Rsp Rcv Context died: "
    "ctrl[%08x] cmdptr[%08x]",
    FUNC_10(VAR_49, VAR_10),
    FUNC_10(VAR_49, VAR_9));

  for (VAR_54 = 0; VAR_54 < VAR_49->nb_iso_xmit_ctx; VAR_54++) {
   if (FUNC_10(VAR_49, VAR_23 + (16 * VAR_54)) & 0x800)
    FUNC_1(VAR_2, "Iso Xmit %d Context died: "
     "ctrl[%08x] cmdptr[%08x]", VAR_54,
     FUNC_10(VAR_49, VAR_23 + (16 * VAR_54)),
     FUNC_10(VAR_49, VAR_22 + (16 * VAR_54)));
  }

  for (VAR_54 = 0; VAR_54 < VAR_49->nb_iso_rcv_ctx; VAR_54++) {
   if (FUNC_10(VAR_49, VAR_18 + (32 * VAR_54)) & 0x800)
    FUNC_1(VAR_2, "Iso Recv %d Context died: "
     "ctrl[%08x] cmdptr[%08x] match[%08x]", VAR_54,
     FUNC_10(VAR_49, VAR_18 + (32 * VAR_54)),
     FUNC_10(VAR_49, VAR_17 + (32 * VAR_54)),
     FUNC_10(VAR_49, VAR_19 + (32 * VAR_54)));
  }

  VAR_47 &= ~VAR_42;
 }
 if (VAR_47 & VAR_38) {
  FUNC_1(VAR_2, "physical posted write error");

  VAR_47 &= ~VAR_38;
 }
 if (VAR_47 & VAR_35) {
  if(FUNC_9())
   FUNC_1(VAR_3, "isochronous cycle too long");
  else
   FUNC_0("OHCI1394_cycleTooLong");
  FUNC_11(VAR_49, VAR_26,
     VAR_27);
  VAR_47 &= ~VAR_35;
 }
 if (VAR_47 & VAR_34) {



  FUNC_0("OHCI1394_cycleInconsistent");
  VAR_47 &= ~VAR_34;
 }
 if (VAR_47 & VAR_33) {



  FUNC_12(&VAR_49->event_lock, VAR_53);
  FUNC_11(VAR_49, VAR_15, VAR_33);

  if (VAR_49->check_busreset) {
   int VAR_55 = 0;

   FUNC_15(10);

   while (FUNC_10(VAR_49, VAR_14) & VAR_33) {
    FUNC_11(VAR_49, VAR_13, VAR_33);

    FUNC_13(&VAR_49->event_lock, VAR_53);
    FUNC_15(10);
    FUNC_12(&VAR_49->event_lock, VAR_53);







    if (VAR_55 > 10000) {
     FUNC_7(VAR_50, VAR_43, VAR_4);
     FUNC_0("Detected bus-reset loop. Forced a bus reset!");
     VAR_55 = 0;
    }

    VAR_55++;
   }
  }
  FUNC_13(&VAR_49->event_lock, VAR_53);
  if (!VAR_50->in_bus_reset) {
   FUNC_0("irq_handler: Bus reset requested");


   FUNC_4(VAR_49->host);
  }
  VAR_47 &= ~VAR_33;
 }
 if (VAR_47 & VAR_39) {
  struct dma_trm_ctx *VAR_56 = &VAR_49->at_req_context;
  FUNC_0("Got reqTxComplete interrupt "
         "status=0x%08X", FUNC_10(VAR_49, VAR_56->ctrlSet));
  if (FUNC_10(VAR_49, VAR_56->ctrlSet) & 0x800)
   FUNC_6(VAR_49, VAR_56->ctrlClear,
           "reqTxComplete");
  else
   FUNC_2((unsigned long)VAR_56);

  VAR_47 &= ~VAR_39;
 }
 if (VAR_47 & VAR_40) {
  struct dma_trm_ctx *VAR_57 = &VAR_49->at_resp_context;
  FUNC_0("Got respTxComplete interrupt "
         "status=0x%08X", FUNC_10(VAR_49, VAR_57->ctrlSet));
  if (FUNC_10(VAR_49, VAR_57->ctrlSet) & 0x800)
   FUNC_6(VAR_49, VAR_57->ctrlClear,
           "respTxComplete");
  else
   FUNC_14(&VAR_57->task);
  VAR_47 &= ~VAR_40;
 }
 if (VAR_47 & VAR_31) {
  struct dma_rcv_ctx *VAR_58 = &VAR_49->ar_req_context;
  FUNC_0("Got RQPkt interrupt status=0x%08X",
         FUNC_10(VAR_49, VAR_58->ctrlSet));
  if (FUNC_10(VAR_49, VAR_58->ctrlSet) & 0x800)
   FUNC_6(VAR_49, VAR_58->ctrlClear, "RQPkt");
  else
   FUNC_14(&VAR_58->task);
  VAR_47 &= ~VAR_31;
 }
 if (VAR_47 & VAR_32) {
  struct dma_rcv_ctx *VAR_59 = &VAR_49->ar_resp_context;
  FUNC_0("Got RSPkt interrupt status=0x%08X",
         FUNC_10(VAR_49, VAR_59->ctrlSet));
  if (FUNC_10(VAR_49, VAR_59->ctrlSet) & 0x800)
   FUNC_6(VAR_49, VAR_59->ctrlClear, "RSPkt");
  else
   FUNC_14(&VAR_59->task);
  VAR_47 &= ~VAR_32;
 }
 if (VAR_47 & VAR_36) {
  quadlet_t VAR_60;

  VAR_60 = FUNC_10(VAR_49, VAR_21);
  FUNC_11(VAR_49, VAR_20, VAR_60);
  FUNC_8(VAR_49, VAR_60, 0);
  VAR_47 &= ~VAR_36;
 }
 if (VAR_47 & VAR_37) {
  quadlet_t VAR_61;

  VAR_61 = FUNC_10(VAR_49, VAR_25);
  FUNC_11(VAR_49, VAR_24, VAR_61);
  FUNC_8(VAR_49, 0, VAR_61);
  VAR_47 &= ~VAR_37;
 }
 if (VAR_47 & VAR_41) {
  if (VAR_50->in_bus_reset) {
   VAR_48 = FUNC_10(VAR_49, VAR_28);

   if (!(VAR_48 & 0x80000000)) {
    FUNC_1(VAR_2,
          "SelfID received, but NodeID invalid "
          "(probably new bus reset occurred): %08X",
          VAR_48);
    goto selfid_not_valid;
   }

   VAR_51 = VAR_48 & 0x0000003f;
   VAR_52 = (VAR_48 & 0x40000000) != 0;

   FUNC_0("SelfID interrupt received "
         "(phyid %d, %s)", VAR_51,
         (VAR_52 ? "root" : "not root"));

   FUNC_3(VAR_49, VAR_50, VAR_51, VAR_52);



   FUNC_12(&VAR_49->event_lock, VAR_53);
   FUNC_11(VAR_49, VAR_13, VAR_33);
   FUNC_11(VAR_49, VAR_16, VAR_33);
   FUNC_13(&VAR_49->event_lock, VAR_53);





   if (VAR_44) {
    FUNC_11(VAR_49, VAR_29,
       0xffffffff);
    FUNC_11(VAR_49, VAR_30,
       0xffffffff);
   }

   FUNC_0("PhyReqFilter=%08x%08x",
          FUNC_10(VAR_49, VAR_29),
          FUNC_10(VAR_49, VAR_30));

   FUNC_5(VAR_50, VAR_51, VAR_52);
  } else
   FUNC_1(VAR_2,
         "SelfID received outside of bus reset sequence");

selfid_not_valid:
  VAR_47 &= ~VAR_41;
 }



 if (VAR_47)
  FUNC_1(VAR_2, "Unhandled interrupt(s) 0x%08x",
        VAR_47);

 return VAR_0;
}
