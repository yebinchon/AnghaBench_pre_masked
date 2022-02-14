
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct scb {int flags; } ;
struct ahd_softc {int bugs; int send_msg_perror; } ;
struct TYPE_2__ {char* phasemsg; } ;


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
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ FUNC_0 (struct scb*) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (struct ahd_softc*) ;
 int FUNC_3 (struct ahd_softc*,int ) ;
 int FUNC_4 (int,int*,int) ;
 TYPE_1__* FUNC_5 (int) ;
 struct scb* FUNC_6 (struct ahd_softc*,int) ;
 int FUNC_7 (int,int*,int) ;
 char* FUNC_8 (struct ahd_softc*) ;
 int FUNC_9 (struct ahd_softc*,int ,int) ;
 int FUNC_10 (int,int*,int) ;
 int FUNC_11 (struct ahd_softc*,char,int) ;
 int FUNC_12 (int,int*,int) ;
 int FUNC_13 (struct ahd_softc*) ;
 int FUNC_14 (struct ahd_softc*,int ,int ) ;
 int FUNC_15 (struct ahd_softc*) ;
 int FUNC_16 (char*,...) ;

__attribute__((used)) static void
FUNC_17(struct ahd_softc *VAR_38)
{
 struct scb *VAR_39;
 u_int VAR_40;
 u_int VAR_41;
 u_int VAR_42;
 u_int VAR_43;
 u_int VAR_44;
 u_int VAR_45;
 u_int VAR_46;
 u_int VAR_47;
 int VAR_48;

 VAR_39 = ((void*)0);
 FUNC_14(VAR_38, VAR_1, VAR_1);
 VAR_41 = FUNC_3(VAR_38, VAR_21) & ~(VAR_18|VAR_19);
 VAR_42 = FUNC_3(VAR_38, VAR_22);
 if ((VAR_41 & (VAR_15|VAR_14)) == 0
  && (VAR_38->bugs & VAR_2) != 0) {
  u_int VAR_49;

  FUNC_14(VAR_38, VAR_0, VAR_0);
  VAR_49 = FUNC_3(VAR_38, VAR_23);
  if ((VAR_49 >= 0x1E && VAR_49 <= 0x24)
   || (VAR_49 == 0x29)) {






   VAR_41 |= VAR_15;
  }
  FUNC_14(VAR_38, VAR_1, VAR_1);
 }

 FUNC_9(VAR_38, VAR_5, VAR_41);
 VAR_45 = FUNC_3(VAR_38, VAR_11);
 VAR_44 = FUNC_3(VAR_38, VAR_35) & VAR_29;
 VAR_46 = FUNC_3(VAR_38, VAR_28);
 VAR_43 = VAR_24;
 FUNC_9(VAR_38, VAR_8, VAR_7);




 VAR_48 = VAR_9;
 if (VAR_41 == 0
  || (VAR_41 & VAR_15) != 0) {
   if ((VAR_41 & (VAR_15|VAR_17)) != 0)
   FUNC_13(VAR_38);
  VAR_40 = FUNC_2(VAR_38);
  VAR_39 = FUNC_6(VAR_38, VAR_40);
  if (VAR_39 != ((void*)0) && FUNC_0(VAR_39))
   VAR_48 = VAR_36;
 }

 VAR_47 = 0;
 if (VAR_48 == VAR_9) {
  FUNC_16("%s: Transmission error detected\n", FUNC_8(VAR_38));
  FUNC_7(VAR_41, &VAR_47, 50);
  FUNC_4(VAR_45, &VAR_47, 50);
  FUNC_12(VAR_44, &VAR_47, 50);
  FUNC_10(VAR_46, &VAR_47, 50);
  FUNC_16("\n");
  FUNC_1(VAR_38);
 }

 if ((VAR_41 & (VAR_16|VAR_17)) != 0) {
  if (VAR_48 == VAR_9) {
   FUNC_16("%s: Gross protocol error during incoming "
          "packet.  lqistat1 == 0x%x.  Resetting bus.\n",
          FUNC_8(VAR_38), VAR_41);
  }
  FUNC_11(VAR_38, 'A', VAR_36);
  return;
 } else if ((VAR_41 & VAR_14) != 0) {
  FUNC_9(VAR_38, VAR_12, VAR_20);
  FUNC_16("LQIRetry for LQICRCI_LQ to release ACK\n");
 } else if ((VAR_41 & VAR_15) != 0) {
  if (VAR_48 == VAR_9)
   FUNC_16("LQICRC_NLQ\n");
  if (VAR_39 == ((void*)0)) {
   FUNC_16("%s: No SCB valid for LQICRC_NLQ.  "
          "Resetting bus\n", FUNC_8(VAR_38));
   FUNC_11(VAR_38, 'A', VAR_36);
   return;
  }
 } else if ((VAR_41 & VAR_13) != 0) {
  FUNC_16("Need to handle BADLQI!\n");
  FUNC_11(VAR_38, 'A', VAR_36);
  return;
 } else if ((VAR_46 & (VAR_27|VAR_30)) == VAR_27) {
  if ((VAR_44 & ~VAR_31) != 0) {

   if (VAR_48 == VAR_9)
    FUNC_16("Acking %s to clear perror\n",
        FUNC_5(VAR_44)->phasemsg);
   FUNC_3(VAR_38, VAR_34);
  }

  if (VAR_44 == VAR_32)
   VAR_43 = VAR_26;
 }
 VAR_38->send_msg_perror = VAR_43;
 if (VAR_39 != ((void*)0) && VAR_43 == VAR_24)
  VAR_39->flags |= VAR_33;
 FUNC_9(VAR_38, VAR_25, VAR_10);
 FUNC_9(VAR_38, VAR_4, VAR_6);
 FUNC_15(VAR_38);
}
