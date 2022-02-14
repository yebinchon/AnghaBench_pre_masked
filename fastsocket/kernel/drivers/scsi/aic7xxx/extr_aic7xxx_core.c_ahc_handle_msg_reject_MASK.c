
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct scb_tailq {int dummy; } ;
struct scb {TYPE_3__* hscb; int flags; int io_ctx; } ;
struct ahc_tmode_tstate {int dummy; } ;
struct ahc_softc {int flags; struct scb_tailq* untagged_queues; scalar_t__ msgout_index; scalar_t__ msgout_len; } ;
struct TYPE_6__ {int transport_version; scalar_t__ offset; } ;
struct TYPE_5__ {int transport_version; scalar_t__ offset; scalar_t__ ppr_options; } ;
struct ahc_initiator_tinfo {TYPE_2__ curr; TYPE_1__ goal; } ;
struct ahc_devinfo {int channel; int target; int lun; size_t target_offset; int our_scsiid; } ;
struct TYPE_8__ {int tqe; } ;
struct TYPE_7__ {int control; int tag; int scsiid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
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
 int FUNC_1 (struct ahc_softc*,struct scb*) ;
 int FUNC_2 (struct scb*) ;
 int FUNC_3 (struct ahc_softc*,struct scb*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (struct scb_tailq*,struct scb*,int ) ;
 int VAR_23 ;
 int FUNC_5 (struct ahc_softc*) ;
 int FUNC_6 (struct ahc_softc*,struct ahc_devinfo*) ;
 int FUNC_7 (struct ahc_softc*,int ,int ) ;
 struct ahc_initiator_tinfo* FUNC_8 (struct ahc_softc*,int,int ,int,struct ahc_tmode_tstate**) ;
 int FUNC_9 (struct ahc_softc*,int ) ;
 struct scb* FUNC_10 (struct ahc_softc*,int) ;
 char* FUNC_11 (struct ahc_softc*) ;
 int FUNC_12 (struct ahc_softc*,int ,int) ;
 int FUNC_13 (struct ahc_softc*,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_14 (struct ahc_softc*,int ,int ,int ) ;
 int FUNC_15 (struct ahc_softc*,struct ahc_devinfo*,int *,int ,int ,int ,int,int ) ;
 int FUNC_16 (struct ahc_softc*,int ,struct ahc_devinfo*,int ) ;
 int FUNC_17 (struct scb*,int ,int) ;
 int FUNC_18 (struct ahc_softc*,struct ahc_devinfo*,int ,int,int ) ;
 scalar_t__ VAR_24 ;
 TYPE_4__ VAR_25 ;
 int FUNC_19 (char*,char*,int,int,int,...) ;

__attribute__((used)) static int
FUNC_20(struct ahc_softc *VAR_26, struct ahc_devinfo *VAR_27)
{






 struct scb *VAR_28;
 struct ahc_initiator_tinfo *VAR_29;
 struct ahc_tmode_tstate *VAR_30;
 u_int VAR_31;
 u_int VAR_32;
 int VAR_33 = 0;

 VAR_31 = FUNC_9(VAR_26, VAR_20);
 VAR_28 = FUNC_10(VAR_26, VAR_31);
 VAR_29 = FUNC_8(VAR_26, VAR_27->channel,
        VAR_27->our_scsiid,
        VAR_27->target, &VAR_30);

 VAR_32 = FUNC_9(VAR_26, VAR_8);

 if (FUNC_14(VAR_26, VAR_0, VAR_9, VAR_7)) {




  if (VAR_24) {
   FUNC_19("(%s:%c:%d:%d): PPR Rejected. "
          "Trying WDTR/SDTR\n",
          FUNC_11(VAR_26), VAR_27->channel,
          VAR_27->target, VAR_27->lun);
  }
  VAR_29->goal.ppr_options = 0;
  VAR_29->curr.transport_version = 2;
  VAR_29->goal.transport_version = 2;
  VAR_26->msgout_index = 0;
  VAR_26->msgout_len = 0;
  FUNC_6(VAR_26, VAR_27);
  VAR_26->msgout_index = 0;
  VAR_33 = 1;
 } else if (FUNC_14(VAR_26, VAR_0, VAR_11, VAR_7)) {


  FUNC_19("(%s:%c:%d:%d): refuses WIDE negotiation.  Using "
         "8bit transfers\n", FUNC_11(VAR_26),
         VAR_27->channel, VAR_27->target, VAR_27->lun);
  FUNC_18(VAR_26, VAR_27, VAR_12,
         VAR_4|VAR_5,
                   VAR_23);







  if (VAR_29->goal.offset != VAR_29->curr.offset) {


   VAR_26->msgout_index = 0;
   VAR_26->msgout_len = 0;
   FUNC_6(VAR_26, VAR_27);
   VAR_26->msgout_index = 0;
   VAR_33 = 1;
  }
 } else if (FUNC_14(VAR_26, VAR_0, VAR_10, VAR_7)) {

  FUNC_15(VAR_26, VAR_27, ((void*)0), 0,
               0, 0,
     VAR_4|VAR_5,
               VAR_23);
  FUNC_19("(%s:%c:%d:%d): refuses synchronous negotiation. "
         "Using asynchronous transfers\n",
         FUNC_11(VAR_26), VAR_27->channel,
         VAR_27->target, VAR_27->lun);
 } else if ((VAR_28->hscb->control & VAR_16) != 0) {
  int VAR_34;
  int VAR_35;

  VAR_34 = (VAR_28->hscb->control & VAR_16);

  if (VAR_34 == VAR_16) {
   FUNC_19("(%s:%c:%d:%d): refuses tagged commands.  "
          "Performing non-tagged I/O\n", FUNC_11(VAR_26),
          VAR_27->channel, VAR_27->target, VAR_27->lun);
   FUNC_16(VAR_26, VAR_28->io_ctx, VAR_27, VAR_2);
   VAR_35 = ~0x23;
  } else {
   FUNC_19("(%s:%c:%d:%d): refuses %s tagged commands.  "
          "Performing simple queue tagged I/O only\n",
          FUNC_11(VAR_26), VAR_27->channel, VAR_27->target,
          VAR_27->lun, VAR_34 == VAR_14
          ? "ordered" : "head of queue");
   FUNC_16(VAR_26, VAR_28->io_ctx, VAR_27, VAR_1);
   VAR_35 = ~0x03;
  }





  FUNC_12(VAR_26, VAR_18,
    FUNC_9(VAR_26, VAR_18) & VAR_35);
   VAR_28->hscb->control &= VAR_35;
  FUNC_17(VAR_28, VAR_7,
             VAR_16);
  FUNC_12(VAR_26, VAR_15, VAR_13);
  FUNC_5(VAR_26);





  if ((VAR_26->flags & VAR_3) == 0) {
   struct scb_tailq *VAR_36;

   VAR_36 =
       &(VAR_26->untagged_queues[VAR_27->target_offset]);
   FUNC_4(VAR_36, VAR_28, VAR_25.tqe);
   VAR_28->flags |= VAR_21;
  }
  FUNC_7(VAR_26, FUNC_0(VAR_28->hscb->scsiid, VAR_27->lun),
        VAR_28->hscb->tag);






  FUNC_13(VAR_26, FUNC_3(VAR_26, VAR_28),
       FUNC_1(VAR_26, VAR_28),
       FUNC_2(VAR_28), VAR_19,
       VAR_17, VAR_6,
       VAR_22);
 } else {



  FUNC_19("%s:%c:%d: Message reject for %x -- ignored\n",
         FUNC_11(VAR_26), VAR_27->channel, VAR_27->target,
         VAR_32);
 }
 return (VAR_33);
}
