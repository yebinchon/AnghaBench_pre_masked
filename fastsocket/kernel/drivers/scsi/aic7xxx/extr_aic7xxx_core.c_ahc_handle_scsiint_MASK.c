
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


typedef size_t u_int ;
struct scb {TYPE_5__* hscb; TYPE_2__* io_ctx; int flags; } ;
struct ahc_tmode_tstate {int dummy; } ;
struct ahc_softc {int features; scalar_t__ msg_type; int send_msg_perror; scalar_t__* msgout_buf; int msgout_index; } ;
struct TYPE_10__ {int transport_version; scalar_t__ ppr_options; } ;
struct TYPE_9__ {int transport_version; } ;
struct ahc_initiator_tinfo {TYPE_4__ goal; TYPE_3__ curr; } ;
struct ahc_devinfo {int target; int our_scsiid; int channel; } ;
struct TYPE_12__ {size_t phase; size_t mesg_out; char* phasemsg; } ;
struct TYPE_11__ {size_t tag; int control; } ;
struct TYPE_7__ {scalar_t__ func_code; } ;
struct TYPE_8__ {TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
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
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 size_t VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 int VAR_42 ;
 size_t VAR_43 ;
 size_t VAR_44 ;
 int VAR_45 ;
 scalar_t__ VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 size_t VAR_49 ;
 size_t VAR_50 ;
 size_t VAR_51 ;
 size_t VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 size_t FUNC_0 (struct scb*) ;
 scalar_t__ FUNC_1 (struct scb*) ;
 size_t VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 char FUNC_2 (struct ahc_softc*,size_t) ;
 size_t FUNC_3 (size_t) ;
 int FUNC_4 (struct ahc_softc*,size_t) ;
 size_t VAR_61 ;
 int VAR_62 ;
 size_t VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 size_t VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 size_t VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 scalar_t__ VAR_79 ;
 int FUNC_5 (struct ahc_softc*,size_t,char,size_t,size_t,int ,int ) ;
 int FUNC_6 (struct ahc_softc*) ;
 int FUNC_7 (struct ahc_softc*) ;
 int FUNC_8 (struct ahc_devinfo*,size_t,size_t,size_t,char,int ) ;
 int VAR_80 ;
 int FUNC_9 (struct ahc_softc*) ;
 int FUNC_10 (struct ahc_softc*,struct ahc_devinfo*) ;
 struct ahc_initiator_tinfo* FUNC_11 (struct ahc_softc*,int ,int ,int ,struct ahc_tmode_tstate**) ;
 int FUNC_12 (struct ahc_softc*,struct ahc_devinfo*) ;
 int FUNC_13 (struct ahc_softc*,struct scb*) ;
 int FUNC_14 (struct ahc_softc*,struct ahc_devinfo*,int ,char*,int) ;
 int FUNC_15 (struct ahc_softc*,int ) ;
 int FUNC_16 (struct ahc_softc*,int ) ;
 struct scb* FUNC_17 (struct ahc_softc*,size_t) ;
 scalar_t__ FUNC_18 (struct ahc_softc*,struct scb*,size_t,char,size_t,size_t,int ) ;
 char* FUNC_19 (struct ahc_softc*) ;
 int FUNC_20 (struct ahc_softc*,int ,int) ;
 TYPE_6__* VAR_81 ;
 int FUNC_21 (struct ahc_softc*,struct scb*) ;
 int FUNC_22 (struct ahc_softc*,struct scb*) ;
 int FUNC_23 (struct ahc_softc*,char,int) ;
 int FUNC_24 (struct ahc_softc*) ;
 int FUNC_25 (struct ahc_softc*,struct ahc_devinfo*,struct scb*) ;
 scalar_t__ FUNC_26 (struct ahc_softc*,int ,scalar_t__,int) ;
 int FUNC_27 (struct ahc_softc*,struct ahc_devinfo*,int *,int ,int ,int ,int,int) ;
 int FUNC_28 (struct scb*,int ) ;
 int FUNC_29 (struct ahc_softc*,struct ahc_devinfo*,int ,int,int) ;
 int FUNC_30 (struct ahc_softc*) ;
 size_t VAR_82 ;
 int FUNC_31 (char*,...) ;

__attribute__((used)) static void
FUNC_32(struct ahc_softc *VAR_83, u_int VAR_84)
{
 u_int VAR_85;
 u_int VAR_86;
 u_int VAR_87;
 struct scb *VAR_88;
 char VAR_89;
 char VAR_90;

 if ((VAR_83->features & VAR_6) != 0
  && ((FUNC_15(VAR_83, VAR_56) & VAR_66) != 0))
  VAR_89 = 'B';
 else
  VAR_89 = 'A';
 VAR_90 = VAR_89;

 if ((VAR_83->features & VAR_7) != 0)
  VAR_86 = FUNC_15(VAR_83, VAR_73) & VAR_34;
 else
  VAR_86 = 0;
 VAR_87 = FUNC_15(VAR_83, VAR_74) & (VAR_67|VAR_63|VAR_8|VAR_61);
 if (VAR_87 == 0 && VAR_86 == 0) {
  if ((VAR_83->features & VAR_6) != 0) {

    FUNC_20(VAR_83, VAR_56, FUNC_15(VAR_83, VAR_56) ^ VAR_66);
   VAR_87 = FUNC_15(VAR_83, VAR_74)
          & (VAR_67|VAR_63|VAR_8|VAR_61);
   VAR_90 = (VAR_89 == 'A') ? 'B' : 'A';
  }
  if (VAR_87 == 0) {
   FUNC_31("%s: Spurious SCSI interrupt\n", FUNC_19(VAR_83));
   FUNC_20(VAR_83, VAR_16, VAR_18);
   FUNC_30(VAR_83);
   return;
  }
 }


 FUNC_6(VAR_83);

 VAR_85 = FUNC_15(VAR_83, VAR_59);
 VAR_88 = FUNC_17(VAR_83, VAR_85);
 if (VAR_88 != ((void*)0)
  && (FUNC_15(VAR_83, VAR_70) & VAR_47) != 0)
  VAR_88 = ((void*)0);

 if ((VAR_83->features & VAR_7) != 0
  && (VAR_86 & VAR_34) != 0) {
  int VAR_91;

  VAR_91 = FUNC_15(VAR_83, VAR_56) & VAR_28;
  FUNC_31("%s: Transceiver State Has Changed to %s mode\n",
         FUNC_19(VAR_83), VAR_91 ? "LVD" : "SE");
  FUNC_20(VAR_83, VAR_22, VAR_17);
  FUNC_23(VAR_83, VAR_90,
                       VAR_91 == 0);
 } else if ((VAR_87 & VAR_63) != 0) {
  FUNC_31("%s: Someone reset channel %c\n",
   FUNC_19(VAR_83), VAR_90);
  if (VAR_90 != VAR_89)
    FUNC_20(VAR_83, VAR_56, FUNC_15(VAR_83, VAR_56) ^ VAR_66);
  FUNC_23(VAR_83, VAR_90, VAR_33);
 } else if ((VAR_87 & VAR_61) != 0) {
  struct ahc_devinfo VAR_92;
  u_int VAR_93;
  u_int VAR_94;
  u_int VAR_95;
  u_int VAR_96;
  u_int VAR_97;
  u_int VAR_98;
  u_int VAR_99;
  int VAR_100;

  VAR_96 = FUNC_15(VAR_83, VAR_35);
  VAR_94 = FUNC_15(VAR_83, VAR_65) & VAR_48;
  VAR_99 = FUNC_15(VAR_83, VAR_75);
  FUNC_20(VAR_83, VAR_23, VAR_19);
  if ((FUNC_15(VAR_83, VAR_74) & VAR_61) != 0
   || VAR_94 == VAR_50 || VAR_94 == VAR_51)
   VAR_95 = VAR_94;
  else
   VAR_95 = VAR_96;

  for (VAR_98 = 0; VAR_98 < VAR_82; VAR_98++) {
   if (VAR_95 == VAR_81[VAR_98].phase)
    break;
  }
  VAR_93 = VAR_81[VAR_98].mesg_out;
  VAR_100 = VAR_33;
  if (VAR_88 != ((void*)0)) {
   if (FUNC_1(VAR_88))
    VAR_100 = VAR_77;
   else
    FUNC_21(VAR_83, VAR_88);
   VAR_88->flags |= VAR_60;
  } else
   FUNC_31("%s:%c:%d: ", FUNC_19(VAR_83), VAR_90,
          FUNC_4(VAR_83, FUNC_15(VAR_83, VAR_55)));
  VAR_97 = FUNC_15(VAR_83, VAR_62);
  if (VAR_100 == VAR_33) {
   FUNC_31("parity error detected %s. "
          "SEQADDR(0x%x) SCSIRATE(0x%x)\n",
          VAR_81[VAR_98].phasemsg,
          FUNC_16(VAR_83, VAR_68),
          VAR_97);
   if ((VAR_83->features & VAR_2) != 0) {
    if ((VAR_99 & VAR_26) != 0)
     FUNC_31("\tCRC Value Mismatch\n");
    if ((VAR_99 & VAR_24) != 0)
     FUNC_31("\tNo terminal CRC packet "
            "recevied\n");
    if ((VAR_99 & VAR_25) != 0)
     FUNC_31("\tIllegal CRC packet "
            "request\n");
    if ((VAR_99 & VAR_27) != 0)
     FUNC_31("\tUnexpected %sDT Data Phase\n",
            (VAR_97 & VAR_72)
          ? "" : "non-");
   }
  }

  if ((VAR_83->features & VAR_2) != 0
   && (VAR_99 & VAR_27) != 0) {





   VAR_93 = VAR_43;
  }
  if (VAR_93 != VAR_44) {
   if (VAR_83->msg_type != VAR_46)
    VAR_83->send_msg_perror = VAR_77;
   else
    FUNC_20(VAR_83, VAR_45, VAR_93);
  }





  FUNC_10(VAR_83, &VAR_92);
  FUNC_12(VAR_83, &VAR_92);

  FUNC_20(VAR_83, VAR_16, VAR_18);
  FUNC_30(VAR_83);
 } else if ((VAR_87 & VAR_67) != 0) {
  u_int VAR_101;


  FUNC_20(VAR_83, VAR_64, 0);


  FUNC_7(VAR_83);


  FUNC_20(VAR_83, VAR_71, FUNC_15(VAR_83, VAR_71) & ~VAR_30);
  FUNC_20(VAR_83, VAR_23, VAR_21|VAR_15|VAR_19);
  FUNC_20(VAR_83, VAR_22, VAR_20);

  VAR_101 = FUNC_15(VAR_83, VAR_78);
  FUNC_20(VAR_83, VAR_57, VAR_101);
  VAR_85 = FUNC_15(VAR_83, VAR_59);

  VAR_88 = FUNC_17(VAR_83, VAR_85);
  if (VAR_88 == ((void*)0)) {
   FUNC_31("%s: ahc_intr - referenced scb not "
          "valid during SELTO scb(%d, %d)\n",
          FUNC_19(VAR_83), VAR_101, VAR_85);
   FUNC_9(VAR_83);
  } else {
   struct ahc_devinfo VAR_102;







   FUNC_25(VAR_83, &VAR_102, VAR_88);
   FUNC_28(VAR_88, VAR_13);
   FUNC_13(VAR_83, VAR_88);







   FUNC_14(VAR_83, &VAR_102,
         VAR_13,
         "Selection Timeout",
                          1);
  }
  FUNC_20(VAR_83, VAR_16, VAR_18);
  FUNC_24(VAR_83);
 } else if ((VAR_87 & VAR_8) != 0
  && (FUNC_15(VAR_83, VAR_71) & VAR_30) != 0) {
  struct ahc_devinfo VAR_103;
  u_int VAR_104;
  u_int VAR_105;
  u_int VAR_106;
  u_int VAR_107;
  u_int VAR_108;
  char VAR_109;
  int VAR_110;







  FUNC_20(VAR_83, VAR_64,
    FUNC_15(VAR_83, VAR_64) & (VAR_32|VAR_31|VAR_29));







  FUNC_20(VAR_83, VAR_71, FUNC_15(VAR_83, VAR_71) & ~VAR_30);
  FUNC_20(VAR_83, VAR_23, VAR_15|VAR_19);







  VAR_104 = FUNC_15(VAR_83, VAR_35);
  VAR_105 = FUNC_15(VAR_83, VAR_55);
  VAR_106 = FUNC_15(VAR_83, VAR_54);
  VAR_107 = FUNC_4(VAR_83, VAR_105);
  VAR_108 = FUNC_3(VAR_105);
  VAR_109 = FUNC_2(VAR_83, VAR_105);
  FUNC_8(&VAR_103, VAR_108,
        VAR_107, VAR_106, VAR_109, VAR_53);
  VAR_110 = 1;

  if (VAR_104 == VAR_52) {
   u_int VAR_111;

   VAR_111 = VAR_58;
   if (FUNC_26(VAR_83, VAR_0, VAR_37, VAR_77)
    || FUNC_26(VAR_83, VAR_0, VAR_36, VAR_77)) {
    if (VAR_83->msgout_buf[VAR_83->msgout_index - 1]
     == VAR_37)
     VAR_111 = VAR_88->hscb->tag;
    FUNC_21(VAR_83, VAR_88);
    FUNC_31("SCB %d - Abort%s Completed.\n",
           VAR_88->hscb->tag, VAR_111 == VAR_58 ?
           "" : " Tag");
    FUNC_5(VAR_83, VAR_107, VAR_109,
            VAR_106, VAR_111,
            VAR_53,
            VAR_11);
    VAR_110 = 0;
   } else if (FUNC_26(VAR_83, VAR_0,
      VAR_38, VAR_77)) {
    FUNC_8(&VAR_103,
          VAR_108,
          VAR_107,
          VAR_10,
          VAR_109,
          VAR_53);
    FUNC_14(VAR_83, &VAR_103,
          VAR_9,
          "Bus Device Reset",
                           0);
    VAR_110 = 0;
   } else if (FUNC_26(VAR_83, VAR_1,
      VAR_39, VAR_33)) {
    struct ahc_initiator_tinfo *VAR_112;
    struct ahc_tmode_tstate *VAR_113;





    VAR_112 = FUNC_11(VAR_83,
           VAR_103.channel,
           VAR_103.our_scsiid,
           VAR_103.target,
           &VAR_113);
    VAR_112->curr.transport_version = 2;
    VAR_112->goal.transport_version = 2;
    VAR_112->goal.ppr_options = 0;
    FUNC_22(VAR_83, VAR_88);
    VAR_110 = 0;
   } else if (FUNC_26(VAR_83, VAR_1,
      VAR_41, VAR_33)) {




    FUNC_29(VAR_83, &VAR_103,
           VAR_42,
           VAR_4|VAR_5,
                     VAR_77);
    FUNC_22(VAR_83, VAR_88);
    VAR_110 = 0;
   } else if (FUNC_26(VAR_83, VAR_1,
      VAR_40, VAR_33)) {




    FUNC_27(VAR_83, &VAR_103,
                  ((void*)0),
                0, 0,
                     0,
      VAR_4|VAR_5,
                VAR_77);
    FUNC_22(VAR_83, VAR_88);
    VAR_110 = 0;
   }
  }
  if (VAR_110 != 0) {
   u_int VAR_114;

   if (VAR_88 != ((void*)0)) {
    u_int VAR_115;

    if ((VAR_88->hscb->control & VAR_76) != 0)
     VAR_115 = VAR_88->hscb->tag;
    else
     VAR_115 = VAR_58;
    FUNC_21(VAR_83, VAR_88);
    FUNC_5(VAR_83, VAR_107, VAR_109,
            FUNC_0(VAR_88), VAR_115,
            VAR_53,
            VAR_14);
   } else {




    FUNC_31("%s: ", FUNC_19(VAR_83));
   }
   for (VAR_114 = 0; VAR_114 < VAR_82; VAR_114++) {
    if (VAR_104 == VAR_81[VAR_114].phase)
     break;
   }
   if (VAR_104 != VAR_49) {






    FUNC_12(VAR_83, &VAR_103);
   }
   FUNC_31("Unexpected busfree %s\n"
          "SEQADDR == 0x%x\n",
          VAR_81[VAR_114].phasemsg,
          FUNC_15(VAR_83, VAR_68)
    | (FUNC_15(VAR_83, VAR_69) << 8));
  }
  FUNC_20(VAR_83, VAR_16, VAR_18);
  FUNC_24(VAR_83);
 } else {
  FUNC_31("%s: Missing case in ahc_handle_scsiint. status = %x\n",
         FUNC_19(VAR_83), VAR_87);
  FUNC_20(VAR_83, VAR_16, VAR_18);
 }
}
