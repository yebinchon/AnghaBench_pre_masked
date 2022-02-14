
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct IsdnCardState {int debug; } ;
struct TYPE_9__ {int expires; } ;
struct TYPE_7__ {void* state; int cmd; int newcmd; int mod; int newmod; int try_mod; TYPE_4__ ftimer; TYPE_1__* reg; int dpath; } ;
struct TYPE_8__ {TYPE_2__ isar; } ;
struct BCState {TYPE_3__ hw; int Flag; int st; struct IsdnCardState* cs; } ;
struct TYPE_6__ {int Flags; } ;


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
 int FUNC_0 (int ) ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct IsdnCardState*,char*,...) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_27 ;
 int FUNC_4 (struct BCState*,int ,int) ;
 int VAR_28 ;
 int FUNC_5 (int ,int,int *) ;
 int FUNC_6 (struct BCState*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct BCState*,int ) ;
 int FUNC_9 (struct BCState*) ;
 int FUNC_10 (struct IsdnCardState*,int,int,int,int*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static void
FUNC_14(struct BCState *VAR_29, u_char VAR_30) {
 struct IsdnCardState *VAR_31 = VAR_29->cs;
 u_char VAR_32 = FUNC_0(VAR_29->hw.isar.dpath);
 u_char VAR_33;

 switch(VAR_30) {
  case 139:
   if (VAR_31->debug & VAR_14)
    FUNC_2(VAR_31, "pump stev TIMER");
   break;
  case 130:
   if (VAR_31->debug & VAR_14)
    FUNC_2(VAR_31, "pump stev RSP_READY");
   VAR_29->hw.isar.state = VAR_25;
   FUNC_5(VAR_29->st, VAR_19 | VAR_20, ((void*)0));
   if (FUNC_13(VAR_3, &VAR_29->Flag)) {
    FUNC_4(VAR_29, VAR_12, 3);
   } else {
    FUNC_4(VAR_29, VAR_13, 3);
   }
   break;
  case 134:
   if (VAR_29->hw.isar.state == VAR_24) {
    if (VAR_31->debug & VAR_14)
     FUNC_2(VAR_31, "pump stev LINE_TX_H");
    VAR_29->hw.isar.state = VAR_22;
    FUNC_10(VAR_31, VAR_32 | VAR_9, VAR_16, 0, ((void*)0));
   } else {
    if (VAR_31->debug & VAR_15)
     FUNC_2(VAR_31, "pump stev LINE_TX_H wrong st %x",
      VAR_29->hw.isar.state);
   }
   break;
  case 136:
   if (VAR_29->hw.isar.state == VAR_24) {
    if (VAR_31->debug & VAR_14)
     FUNC_2(VAR_31, "pump stev LINE_RX_H");
    VAR_29->hw.isar.state = VAR_22;
    FUNC_10(VAR_31, VAR_32 | VAR_9, VAR_16, 0, ((void*)0));
   } else {
    if (VAR_31->debug & VAR_15)
     FUNC_2(VAR_31, "pump stev LINE_RX_H wrong st %x",
      VAR_29->hw.isar.state);
   }
   break;
  case 135:
   if (VAR_29->hw.isar.state == VAR_24) {
    if (VAR_31->debug & VAR_14)
     FUNC_2(VAR_31, "pump stev LINE_TX_B");
    VAR_29->hw.isar.state = VAR_22;
    FUNC_10(VAR_31, VAR_32 | VAR_9, VAR_16, 0, ((void*)0));
   } else {
    if (VAR_31->debug & VAR_15)
     FUNC_2(VAR_31, "pump stev LINE_TX_B wrong st %x",
      VAR_29->hw.isar.state);
   }
   break;
  case 137:
   if (VAR_29->hw.isar.state == VAR_24) {
    if (VAR_31->debug & VAR_14)
     FUNC_2(VAR_31, "pump stev LINE_RX_B");
    VAR_29->hw.isar.state = VAR_22;
    FUNC_10(VAR_31, VAR_32 | VAR_9, VAR_16, 0, ((void*)0));
   } else {
    if (VAR_31->debug & VAR_15)
     FUNC_2(VAR_31, "pump stev LINE_RX_B wrong st %x",
      VAR_29->hw.isar.state);
   }
   break;
  case 133:
   if (VAR_29->hw.isar.state == VAR_22) {
    if (VAR_31->debug & VAR_14)
     FUNC_2(VAR_31, "pump stev RSP_CONN");
    VAR_29->hw.isar.state = VAR_21;
    FUNC_12(VAR_10, &VAR_29->hw.isar.reg->Flags);
    FUNC_10(VAR_31, VAR_32 | VAR_8, 0, 0, ((void*)0));
    if (VAR_29->hw.isar.cmd == 141) {

     if (FUNC_12(VAR_0, &VAR_29->Flag))
      FUNC_3(&VAR_29->hw.isar.ftimer);

     VAR_29->hw.isar.ftimer.expires =
      VAR_28 + ((1000 * VAR_7)/1000);
     FUNC_12(VAR_1,
      &VAR_29->Flag);
     FUNC_1(&VAR_29->hw.isar.ftimer);
    } else {
     FUNC_8(VAR_29, VAR_4);
    }
   } else {
    if (VAR_31->debug & VAR_15)
     FUNC_2(VAR_31, "pump stev RSP_CONN wrong st %x",
      VAR_29->hw.isar.state);
   }
   break;
  case 138:
   if (VAR_31->debug & VAR_14)
    FUNC_2(VAR_31, "pump stev FLAGS_DET");
   break;
  case 132:
   if (VAR_31->debug & VAR_14)
    FUNC_2(VAR_31, "pump stev RSP_DISC");
   if (VAR_29->hw.isar.state == VAR_23) {
    VAR_33 = 5;
    switch(VAR_29->hw.isar.newcmd) {
     case 0:
      VAR_29->hw.isar.state = VAR_25;
      break;
     case 140:
      VAR_33 = 2;
     case 141:
      FUNC_10(VAR_31, VAR_32 | VAR_9,
       VAR_18, 1, &VAR_33);
      VAR_29->hw.isar.state = VAR_26;
      break;
     case 142:
      if (VAR_27)
       FUNC_7(VAR_27);
     case 143:
      VAR_33 = VAR_29->hw.isar.mod = VAR_29->hw.isar.newmod;
      VAR_29->hw.isar.newmod = 0;
      VAR_29->hw.isar.cmd = VAR_29->hw.isar.newcmd;
      VAR_29->hw.isar.newcmd = 0;
      FUNC_10(VAR_31, VAR_32 | VAR_9,
       VAR_29->hw.isar.cmd, 1, &VAR_33);
      VAR_29->hw.isar.state = VAR_24;
      VAR_29->hw.isar.try_mod = 3;
      break;
     default:
      if (VAR_31->debug & VAR_14)
       FUNC_2(VAR_31, "RSP_DISC unknown newcmd %x", VAR_29->hw.isar.newcmd);
      break;
    }
   } else if (VAR_29->hw.isar.state == VAR_21) {
    if (FUNC_11(VAR_2, &VAR_29->Flag)) {
     FUNC_8(VAR_29, VAR_6);
    } else if (VAR_29->hw.isar.cmd == 142) {
     FUNC_9(VAR_29);
     FUNC_8(VAR_29, VAR_5);
    } else {
     FUNC_6(VAR_29, VAR_11);
    }
    VAR_29->hw.isar.state = VAR_25;
   } else {
    VAR_29->hw.isar.state = VAR_25;
    FUNC_6(VAR_29, VAR_11);
   }
   break;
  case 129:
   if (VAR_31->debug & VAR_14)
    FUNC_2(VAR_31, "pump stev RSP_SILDET");
   if (VAR_29->hw.isar.state == VAR_26) {
    VAR_33 = VAR_29->hw.isar.mod = VAR_29->hw.isar.newmod;
    VAR_29->hw.isar.newmod = 0;
    VAR_29->hw.isar.cmd = VAR_29->hw.isar.newcmd;
    VAR_29->hw.isar.newcmd = 0;
    FUNC_10(VAR_31, VAR_32 | VAR_9,
     VAR_29->hw.isar.cmd, 1, &VAR_33);
    VAR_29->hw.isar.state = VAR_24;
    VAR_29->hw.isar.try_mod = 3;
   }
   break;
  case 128:
   if (VAR_31->debug & VAR_14)
    FUNC_2(VAR_31, "pump stev RSP_SILOFF");
   break;
  case 131:
   if (VAR_29->hw.isar.state == VAR_24) {
    if (VAR_31->debug & VAR_14)
     FUNC_2(VAR_31, "pump stev RSP_FCERR try %d",
      VAR_29->hw.isar.try_mod);
    if (VAR_29->hw.isar.try_mod--) {
     FUNC_10(VAR_31, VAR_32 | VAR_9,
      VAR_29->hw.isar.cmd, 1,
      &VAR_29->hw.isar.mod);
     break;
    }
   }
   if (VAR_31->debug & VAR_14)
    FUNC_2(VAR_31, "pump stev RSP_FCERR");
   VAR_29->hw.isar.state = VAR_23;
   FUNC_10(VAR_31, VAR_32 | VAR_9, VAR_17, 0, ((void*)0));
   FUNC_6(VAR_29, VAR_11);
   break;
  default:
   break;
 }
}
