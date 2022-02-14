
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct scb {int flags; TYPE_1__* hscb; TYPE_3__* io_ctx; } ;
struct ahd_tmode_tstate {int dummy; } ;
struct ahd_softc {int msg_flags; int* msgout_buf; int msgout_index; } ;
struct TYPE_11__ {int transport_version; scalar_t__ ppr_options; } ;
struct TYPE_10__ {int ppr_options; int transport_version; } ;
struct ahd_initiator_tinfo {TYPE_5__ goal; TYPE_4__ curr; } ;
struct ahd_devinfo {int target; int our_scsiid; int channel; } ;
struct TYPE_12__ {char* phasemsg; } ;
struct TYPE_8__ {scalar_t__ func_code; } ;
struct TYPE_9__ {TYPE_2__ ccb_h; } ;
struct TYPE_7__ {scalar_t__ lun; int control; } ;


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
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 char FUNC_0 (struct ahd_softc*,struct scb*) ;
 scalar_t__ FUNC_1 (struct scb*) ;
 int FUNC_2 (struct scb*) ;
 scalar_t__ FUNC_3 (struct ahd_softc*,struct scb*) ;
 scalar_t__ VAR_36 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct ahd_softc*,scalar_t__) ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 int FUNC_6 (struct ahd_softc*,scalar_t__,char,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_7 (struct ahd_devinfo*,scalar_t__,scalar_t__,scalar_t__,char,int ) ;
 int VAR_41 ;
 int FUNC_8 (struct ahd_softc*,struct scb*) ;
 int FUNC_9 (struct ahd_softc*) ;
 struct ahd_initiator_tinfo* FUNC_10 (struct ahd_softc*,int ,int ,int ,struct ahd_tmode_tstate**) ;
 int FUNC_11 (struct ahd_softc*,struct ahd_devinfo*) ;
 int FUNC_12 (struct ahd_softc*,struct scb*) ;
 int FUNC_13 (struct scb*) ;
 scalar_t__ FUNC_14 (struct ahd_softc*) ;
 int FUNC_15 (struct ahd_softc*,struct ahd_devinfo*,int ,int ,char*,int ) ;
 scalar_t__ FUNC_16 (struct ahd_softc*,int ) ;
 int FUNC_17 (struct ahd_softc*,int ) ;
 TYPE_6__* FUNC_18 (scalar_t__) ;
 struct scb* FUNC_19 (struct ahd_softc*,scalar_t__) ;
 scalar_t__ FUNC_20 (struct ahd_softc*,struct scb*,scalar_t__,char,int ,scalar_t__,int ) ;
 char* FUNC_21 (struct ahd_softc*) ;
 int FUNC_22 (struct ahd_softc*,struct ahd_devinfo*) ;
 int FUNC_23 (struct ahd_softc*,struct scb*) ;
 int FUNC_24 (struct ahd_softc*,struct scb*) ;
 scalar_t__ FUNC_25 (struct ahd_softc*,int ,int,int ) ;
 int FUNC_26 (struct ahd_softc*,struct ahd_devinfo*,int ,int ,int ,int,int ) ;
 int FUNC_27 (struct scb*,int ) ;
 int FUNC_28 (struct ahd_softc*,struct ahd_devinfo*,int ,int,int ) ;
 int FUNC_29 (char*,...) ;

__attribute__((used)) static int
FUNC_30(struct ahd_softc *VAR_42)
{
 struct ahd_devinfo VAR_43;
 struct scb *VAR_44;
 u_int VAR_45;
 u_int VAR_46;
 u_int VAR_47;
 u_int VAR_48;
 u_int VAR_49;
 u_int VAR_50;
 u_int VAR_51;
 int VAR_52;






 VAR_45 = FUNC_16(VAR_42, VAR_12);
 VAR_46 = FUNC_16(VAR_42, VAR_34);
 VAR_47 = FUNC_16(VAR_42, VAR_33);
 VAR_48 = FUNC_5(VAR_42, VAR_46);
 VAR_49 = FUNC_4(VAR_46);
 FUNC_7(&VAR_43, VAR_49,
       VAR_48, VAR_47, 'A', VAR_32);
 VAR_52 = 1;

 VAR_50 = FUNC_14(VAR_42);
 VAR_44 = FUNC_19(VAR_42, VAR_50);
 if (VAR_44 != ((void*)0)
  && (FUNC_16(VAR_42, VAR_37) & VAR_27) != 0)
  VAR_44 = ((void*)0);

 VAR_51 = (VAR_42->msg_flags & VAR_22) != 0;
 if (VAR_45 == VAR_31) {
  u_int VAR_53;

  VAR_53 = VAR_36;
  if (FUNC_25(VAR_42, VAR_0, VAR_14, VAR_39)
   || FUNC_25(VAR_42, VAR_0, VAR_13, VAR_39)) {
   int VAR_54;
   int VAR_55;

   if (VAR_44 == ((void*)0)) {
    FUNC_22(VAR_42, &VAR_43);
    FUNC_29("Abort for unidentified "
           "connection completed.\n");

    return (1);
   }
   VAR_55 = VAR_42->msgout_buf[VAR_42->msgout_index - 1];
   FUNC_23(VAR_42, VAR_44);
   FUNC_29("SCB %d - Abort%s Completed.\n",
          FUNC_2(VAR_44),
          VAR_55 == VAR_14 ? "" : " Tag");

   if (VAR_55 == VAR_14)
    VAR_53 = FUNC_2(VAR_44);

   if ((VAR_44->flags & VAR_35) != 0) {
    VAR_53 = FUNC_2(VAR_44);
    VAR_47 = VAR_44->hscb->lun;
   }
   VAR_54 = FUNC_6(VAR_42, VAR_48, 'A', VAR_47,
            VAR_53, VAR_32,
            VAR_8);
   FUNC_29("found == 0x%x\n", VAR_54);
   VAR_52 = 0;
  } else if (FUNC_25(VAR_42, VAR_0,
     VAR_15, VAR_39)) {
   FUNC_15(VAR_42, &VAR_43, VAR_6,
         VAR_5, "Bus Device Reset",
                          0);
   VAR_52 = 0;
  } else if (FUNC_25(VAR_42, VAR_1, VAR_16, VAR_11)
   && VAR_51 == 0) {
   struct ahd_initiator_tinfo *VAR_56;
   struct ahd_tmode_tstate *VAR_57;
   VAR_56 = FUNC_10(VAR_42, VAR_43.channel,
          VAR_43.our_scsiid,
          VAR_43.target, &VAR_57);
   if ((VAR_56->curr.ppr_options & VAR_17)!=0) {
    FUNC_28(VAR_42, &VAR_43,
           VAR_20,
           VAR_3,
                     VAR_39);
    FUNC_26(VAR_42, &VAR_43,
                0, 0,
                     0,
      VAR_3,
                VAR_39);





   } else {
    VAR_56->curr.transport_version = 2;
    VAR_56->goal.transport_version = 2;
    VAR_56->goal.ppr_options = 0;
    if (VAR_44 != ((void*)0)) {






     FUNC_12(VAR_42, VAR_44);
     FUNC_24(VAR_42, VAR_44);
    }
    VAR_52 = 0;
   }
  } else if (FUNC_25(VAR_42, VAR_1, VAR_19, VAR_11)
   && VAR_51 == 0) {
   FUNC_28(VAR_42, &VAR_43,
          VAR_20,
          VAR_3|VAR_4,
                    VAR_39);
   if (VAR_44 != ((void*)0)) {






    FUNC_12(VAR_42, VAR_44);
    FUNC_24(VAR_42, VAR_44);
   }
   VAR_52 = 0;
  } else if (FUNC_25(VAR_42, VAR_1, VAR_18, VAR_11)
   && VAR_51 == 0) {
   FUNC_26(VAR_42, &VAR_43,
               0, 0,
                    0,
     VAR_3|VAR_4,
               VAR_39);
   if (VAR_44 != ((void*)0)) {






    FUNC_12(VAR_42, VAR_44);
    FUNC_24(VAR_42, VAR_44);
   }
   VAR_52 = 0;
  } else if ((VAR_42->msg_flags & VAR_21) != 0
   && FUNC_25(VAR_42, VAR_0,
      VAR_25, VAR_39)) {





   VAR_52 = 0;
  } else if ((VAR_42->msg_flags & VAR_23)
   && FUNC_25(VAR_42, VAR_0,
     VAR_26, VAR_39)) {





   VAR_52 = 0;
  }
 }






 if (VAR_44 != ((void*)0) && VAR_52 != 0
  && (VAR_45 == VAR_30 || VAR_45 == VAR_31)
  && ((VAR_42->msg_flags & VAR_22) != 0)) {

  FUNC_12(VAR_42, VAR_44);
  FUNC_27(VAR_44, VAR_7);
  FUNC_13(VAR_44);
  if ((VAR_42->msg_flags & VAR_24) != 0) {
   FUNC_6(VAR_42, FUNC_3(VAR_42, VAR_44),
           FUNC_0(VAR_42, VAR_44),
           FUNC_1(VAR_44), VAR_36,
           VAR_32, VAR_8);
  } else {




   FUNC_8(VAR_42, VAR_44);
  }
  VAR_52 = 0;
 }
 if (VAR_52 != 0) {
  int VAR_58;

  VAR_58 = 0;
  if (VAR_44 != ((void*)0)) {
   u_int VAR_59;

   if ((VAR_44->hscb->control & VAR_38) != 0)
    VAR_59 = FUNC_2(VAR_44);
   else
    VAR_59 = VAR_36;
   FUNC_23(VAR_42, VAR_44);
   VAR_58 = FUNC_6(VAR_42, VAR_48, 'A',
           FUNC_1(VAR_44), VAR_59,
           VAR_32,
           VAR_10);
  } else {




   FUNC_29("%s: ", FUNC_21(VAR_42));
  }
  FUNC_29("Unexpected busfree %s, %d SCBs aborted, "
         "PRGMCNT == 0x%x\n",
         FUNC_18(VAR_45)->phasemsg,
         VAR_58,
         FUNC_17(VAR_42, VAR_28));
  FUNC_9(VAR_42);
  if (VAR_45 != VAR_29)
   FUNC_11(VAR_42, &VAR_43);
 }

 return (1);
}
