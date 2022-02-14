
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct ahd_tmode_tstate {struct ahd_tmode_lstate** enabled_luns; } ;
struct ahd_tmode_lstate {int dummy; } ;
struct ahd_softc {int* msgin_buf; int msgin_index; int msgout_len; int* msgout_buf; scalar_t__ msgout_index; int msg_flags; struct ahd_tmode_tstate** enabled_targets; } ;
struct TYPE_2__ {int width; } ;
struct ahd_initiator_tinfo {TYPE_1__ curr; } ;
struct ahd_devinfo {int channel; size_t our_scsiid; int target; int lun; int role; } ;


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
 int FUNC_0 (struct ahd_softc*,int,int,int,int,int ,int ) ;
 int FUNC_1 (struct ahd_softc*,struct ahd_devinfo*) ;
 int FUNC_2 (struct ahd_softc*,struct ahd_devinfo*,int,int,int,int) ;
 int FUNC_3 (struct ahd_softc*,struct ahd_devinfo*,int,int) ;
 int FUNC_4 (struct ahd_softc*,struct ahd_devinfo*,int) ;
 int VAR_24 ;
 int FUNC_5 (struct ahd_softc*,struct ahd_initiator_tinfo*,int*,int*,int ) ;
 struct ahd_initiator_tinfo* FUNC_6 (struct ahd_softc*,int,size_t,int,struct ahd_tmode_tstate**) ;
 int FUNC_7 (struct ahd_softc*,struct ahd_devinfo*,int ,int ,char*,int ) ;
 int FUNC_8 (struct ahd_softc*,struct ahd_devinfo*) ;
 int FUNC_9 (struct ahd_softc*,int ) ;
 char* FUNC_10 (struct ahd_softc*) ;
 int FUNC_11 (struct ahd_softc*,struct ahd_tmode_lstate*,size_t,int const,int) ;
 int FUNC_12 (struct ahd_softc*) ;
 int FUNC_13 (struct ahd_softc*,struct ahd_tmode_lstate*) ;
 int FUNC_14 (struct ahd_softc*,int ,int const,int) ;
 int FUNC_15 (struct ahd_softc*,struct ahd_devinfo*,int,int,int,int,int) ;
 int FUNC_16 (struct ahd_softc*,struct ahd_devinfo*,int,int,int) ;
 int FUNC_17 (struct ahd_softc*,struct ahd_devinfo*,struct ahd_tmode_tstate*,struct ahd_initiator_tinfo*,int ) ;
 int FUNC_18 (struct ahd_softc*,struct ahd_initiator_tinfo*,int,int*,int,int ) ;
 int FUNC_19 (struct ahd_softc*,struct ahd_initiator_tinfo*,int*,int ) ;
 int VAR_25 ;
 int FUNC_20 (char*,char*,int,...) ;

__attribute__((used)) static int
FUNC_21(struct ahd_softc *VAR_26, struct ahd_devinfo *VAR_27)
{
 struct ahd_initiator_tinfo *VAR_28;
 struct ahd_tmode_tstate *VAR_29;
 int VAR_30;
 int VAR_31;
 int VAR_32;

 VAR_31 = VAR_10;
 VAR_32 = VAR_8;
 VAR_30 = VAR_8;
 VAR_28 = FUNC_6(VAR_26, VAR_27->channel, VAR_27->our_scsiid,
        VAR_27->target, &VAR_29);
 switch (VAR_26->msgin_buf[0]) {
 case 139:
 case 129:
 case 140:
 case 130:
 case 134:




  VAR_31 = VAR_12;
  break;
 case 133:
  VAR_32 = FUNC_8(VAR_26, VAR_27);

 case 132:
  VAR_31 = VAR_11;
  break;
 case 138:
 {

  if (VAR_26->msgin_index < 2)
   break;
  switch (VAR_26->msgin_buf[2]) {
  case 136:
  {
   u_int VAR_33;
   u_int VAR_34;
   u_int VAR_35;
   u_int VAR_36;

   if (VAR_26->msgin_buf[1] != VAR_16) {
    VAR_30 = VAR_23;
    break;
   }
   if (VAR_26->msgin_index < (VAR_16 + 1))
    break;

   VAR_33 = VAR_26->msgin_buf[3];
   VAR_34 = 0;
   VAR_36 = VAR_35 = VAR_26->msgin_buf[4];
   FUNC_5(VAR_26, VAR_28, &VAR_33,
      &VAR_34, VAR_27->role);
   FUNC_18(VAR_26, VAR_28, VAR_33, &VAR_35,
         VAR_28->curr.width, VAR_27->role);
   if (VAR_25) {
    FUNC_20("(%s:%c:%d:%d): Received "
           "SDTR period %x, offset %x\n\t"
           "Filtered to period %x, offset %x\n",
           FUNC_10(VAR_26), VAR_27->channel,
           VAR_27->target, VAR_27->lun,
           VAR_26->msgin_buf[3], VAR_36,
           VAR_33, VAR_35);
   }
   FUNC_15(VAR_26, VAR_27, VAR_33,
      VAR_35, VAR_34,
      VAR_3|VAR_4,
                VAR_23);






   if (FUNC_14(VAR_26, VAR_0, 136, VAR_23)) {

    if (VAR_36 != VAR_35) {

     VAR_30 = VAR_23;
    }
   } else {



    if (VAR_25
     && VAR_27->role == VAR_19) {
     FUNC_20("(%s:%c:%d:%d): Target "
            "Initiated SDTR\n",
            FUNC_10(VAR_26), VAR_27->channel,
            VAR_27->target, VAR_27->lun);
    }
    VAR_26->msgout_index = 0;
    VAR_26->msgout_len = 0;
    FUNC_3(VAR_26, VAR_27,
         VAR_33, VAR_35);
    VAR_26->msgout_index = 0;
    VAR_32 = VAR_23;
   }
   VAR_31 = VAR_11;
   break;
  }
  case 135:
  {
   u_int VAR_37;
   u_int VAR_38;
   u_int VAR_39;

   VAR_39 = VAR_8;
   if (VAR_26->msgin_buf[1] != VAR_17) {
    VAR_30 = VAR_23;
    break;
   }
   if (VAR_26->msgin_index < (VAR_17 + 1))
    break;

   VAR_37 = VAR_26->msgin_buf[3];
   VAR_38 = VAR_37;
   FUNC_19(VAR_26, VAR_28, &VAR_37,
        VAR_27->role);
   if (VAR_25) {
    FUNC_20("(%s:%c:%d:%d): Received WDTR "
           "%x filtered to %x\n",
           FUNC_10(VAR_26), VAR_27->channel,
           VAR_27->target, VAR_27->lun,
           VAR_38, VAR_37);
   }

   if (FUNC_14(VAR_26, VAR_0, 135, VAR_23)) {






    if (VAR_38 > VAR_37) {
     VAR_30 = VAR_23;
     FUNC_20("(%s:%c:%d:%d): requested %dBit "
            "transfers.  Rejecting...\n",
            FUNC_10(VAR_26), VAR_27->channel,
            VAR_27->target, VAR_27->lun,
            8 * (0x01 << VAR_37));
     VAR_37 = 0;
    }
   } else {



    if (VAR_25
     && VAR_27->role == VAR_19) {
     FUNC_20("(%s:%c:%d:%d): Target "
            "Initiated WDTR\n",
            FUNC_10(VAR_26), VAR_27->channel,
            VAR_27->target, VAR_27->lun);
    }
    VAR_26->msgout_index = 0;
    VAR_26->msgout_len = 0;
    FUNC_4(VAR_26, VAR_27, VAR_37);
    VAR_26->msgout_index = 0;
    VAR_32 = VAR_23;
    VAR_39 = VAR_23;
   }
   FUNC_17(VAR_26, VAR_27, VAR_29,
            VAR_28, VAR_1);
   FUNC_16(VAR_26, VAR_27, VAR_37,
          VAR_3|VAR_4,
                    VAR_23);
   if (VAR_39 == VAR_8 && VAR_30 == VAR_8) {




    VAR_26->msgout_index = 0;
    VAR_26->msgout_len = 0;
    FUNC_1(VAR_26, VAR_27);
    VAR_26->msgout_index = 0;
    VAR_32 = VAR_23;
   }
   VAR_31 = VAR_11;
   break;
  }
  case 137:
  {
   u_int VAR_40;
   u_int VAR_41;
   u_int VAR_42;
   u_int VAR_43;
   u_int VAR_44;
   u_int VAR_45;
   u_int VAR_46;

   if (VAR_26->msgin_buf[1] != VAR_14) {
    VAR_30 = VAR_23;
    break;
   }
   if (VAR_26->msgin_index < (VAR_14 + 1))
    break;

   VAR_40 = VAR_26->msgin_buf[3];
   VAR_41 = VAR_26->msgin_buf[5];
   VAR_42 = VAR_26->msgin_buf[6];
   VAR_44 = VAR_42;
   VAR_43 = VAR_26->msgin_buf[7];





   if ((VAR_43 & VAR_13) == 0
    && VAR_40 <= 9)
    VAR_41 = 0;
   VAR_46 = VAR_43;
   VAR_45 = VAR_41;





   if (VAR_42 == 0)
    VAR_43 &= VAR_15;

   FUNC_19(VAR_26, VAR_28, &VAR_42,
        VAR_27->role);
   FUNC_5(VAR_26, VAR_28, &VAR_40,
      &VAR_43, VAR_27->role);
   FUNC_18(VAR_26, VAR_28, VAR_40, &VAR_41,
         VAR_42, VAR_27->role);

   if (FUNC_14(VAR_26, VAR_0, 137, VAR_23)) {





    if (VAR_44 > VAR_42
     || VAR_45 != VAR_41
     || VAR_46 != VAR_43) {
     VAR_30 = VAR_23;
     VAR_40 = 0;
     VAR_41 = 0;
     VAR_42 = 0;
     VAR_43 = 0;
    }
   } else {
    if (VAR_27->role != VAR_20)
     FUNC_20("(%s:%c:%d:%d): Target "
            "Initiated PPR\n",
            FUNC_10(VAR_26), VAR_27->channel,
            VAR_27->target, VAR_27->lun);
    else
     FUNC_20("(%s:%c:%d:%d): Initiator "
            "Initiated PPR\n",
            FUNC_10(VAR_26), VAR_27->channel,
            VAR_27->target, VAR_27->lun);
    VAR_26->msgout_index = 0;
    VAR_26->msgout_len = 0;
    FUNC_2(VAR_26, VAR_27, VAR_40, VAR_41,
        VAR_42, VAR_43);
    VAR_26->msgout_index = 0;
    VAR_32 = VAR_23;
   }
   if (VAR_25) {
    FUNC_20("(%s:%c:%d:%d): Received PPR width %x, "
           "period %x, offset %x,options %x\n"
           "\tFiltered to width %x, period %x, "
           "offset %x, options %x\n",
           FUNC_10(VAR_26), VAR_27->channel,
           VAR_27->target, VAR_27->lun,
           VAR_44, VAR_26->msgin_buf[3],
           VAR_45, VAR_46,
           VAR_42, VAR_40, VAR_41, VAR_43);
   }
   FUNC_16(VAR_26, VAR_27, VAR_42,
          VAR_3|VAR_4,
                    VAR_23);
   FUNC_15(VAR_26, VAR_27, VAR_40,
      VAR_41, VAR_43,
      VAR_3|VAR_4,
                VAR_23);

   VAR_31 = VAR_11;
   break;
  }
  default:

   VAR_30 = VAR_23;
   break;
  }
  break;
 }
 case 131:





  VAR_26->msg_flags |= VAR_18;

 case 128:
 default:
  VAR_30 = VAR_23;
  break;
 }

 if (VAR_30) {



  VAR_26->msgout_index = 0;
  VAR_26->msgout_len = 1;
  VAR_26->msgout_buf[0] = 133;
  VAR_31 = VAR_11;
  VAR_32 = VAR_23;
 }

 if (VAR_31 != VAR_10 && !VAR_32)

  VAR_26->msgout_len = 0;

 return (VAR_31);
}
