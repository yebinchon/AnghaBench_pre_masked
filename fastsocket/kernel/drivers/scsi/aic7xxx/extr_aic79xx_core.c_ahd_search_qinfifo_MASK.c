
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct scb {int flags; } ;
struct TYPE_4__ {int numscbs; } ;
struct ahd_softc {int qinfifonext; int* qinfifo; TYPE_2__ scb_data; TYPE_1__* next_queued_hscb; } ;
typedef int role_t ;
typedef int ahd_search_action ;
typedef int ahd_mode_state ;
struct TYPE_3__ {int hscb_busaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
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
 scalar_t__ FUNC_1 (int) ;
 int VAR_13 ;
 int FUNC_2 (struct scb*) ;
 int FUNC_3 (struct ahd_softc*,struct scb*) ;
 int VAR_14 ;
 int VAR_15 ;




 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (struct ahd_softc*,struct scb*,int ) ;
 int FUNC_5 (struct ahd_softc*) ;
 int FUNC_6 (struct ahd_softc*) ;
 int FUNC_7 (struct ahd_softc*) ;
 int FUNC_8 (struct ahd_softc*,int ) ;
 int FUNC_9 (struct ahd_softc*,int) ;
 int FUNC_10 (struct ahd_softc*,int ) ;
 int FUNC_11 (int ) ;
 struct scb* FUNC_12 (struct ahd_softc*,int) ;
 scalar_t__ FUNC_13 (struct ahd_softc*,struct scb*,int,char,int,int,int ) ;
 char* FUNC_14 (struct ahd_softc*) ;
 int FUNC_15 (struct ahd_softc*,int ,int) ;
 int FUNC_16 (struct ahd_softc*,int ,int ) ;
 int FUNC_17 (struct ahd_softc*,int,int) ;
 int FUNC_18 (struct ahd_softc*,struct scb*,struct scb*) ;
 int FUNC_19 (struct ahd_softc*,int ) ;
 int FUNC_20 (struct ahd_softc*) ;
 scalar_t__ FUNC_21 (struct ahd_softc*,int,char,int,int,int ,int ,int,int*,int*,int) ;
 int FUNC_22 (struct ahd_softc*,int) ;
 int FUNC_23 (struct ahd_softc*,int ,int ) ;
 int FUNC_24 (struct ahd_softc*,int) ;
 int FUNC_25 (struct ahd_softc*,int,int,int) ;
 int FUNC_26 (char*) ;
 int FUNC_27 (char*,...) ;

int
FUNC_28(struct ahd_softc *VAR_19, int VAR_20, char VAR_21,
     int VAR_22, u_int VAR_23, role_t VAR_24, uint32_t VAR_25,
     ahd_search_action VAR_26)
{
 struct scb *VAR_27;
 struct scb *VAR_28;
 struct scb *VAR_29;
 ahd_mode_state VAR_30;
 u_int VAR_31;
 u_int VAR_32;
 u_int VAR_33;
 u_int VAR_34;
 u_int VAR_35;
 u_int VAR_36;
 u_int VAR_37;
 u_int VAR_38;
 uint32_t VAR_39;
 int VAR_40;
 int VAR_41;


 VAR_30 = FUNC_20(VAR_19);
 FUNC_23(VAR_19, VAR_0, VAR_0);





 if ((FUNC_8(VAR_19, VAR_5) & (VAR_4|VAR_7|VAR_6))
  == (VAR_4|VAR_7|VAR_6)) {
  FUNC_15(VAR_19, VAR_5,
    FUNC_8(VAR_19, VAR_5) & ~(VAR_4|VAR_7));
  while ((FUNC_8(VAR_19, VAR_5) & (VAR_4|VAR_7)) != 0)
   ;
 }

 VAR_33 = FUNC_0(VAR_19->qinfifonext);
 VAR_31 = FUNC_7(VAR_19);
 VAR_32 = FUNC_0(VAR_31);
 VAR_40 = 0;
 VAR_29 = ((void*)0);

 if (VAR_26 == 129) {
  FUNC_27("qinstart = %d qinfifonext = %d\nQINFIFO:",
         VAR_31, VAR_19->qinfifonext);
 }





 VAR_19->qinfifonext = VAR_31;
 VAR_39 = FUNC_11(VAR_19->next_queued_hscb->hscb_busaddr);
 FUNC_16(VAR_19, VAR_10, VAR_39);

 while (VAR_32 != VAR_33) {
  VAR_27 = FUNC_12(VAR_19, VAR_19->qinfifo[VAR_32]);
  if (VAR_27 == ((void*)0)) {
   FUNC_27("qinpos = %d, SCB index = %d\n",
    VAR_32, VAR_19->qinfifo[VAR_32]);
   FUNC_26("Loop 1\n");
  }

  if (FUNC_13(VAR_19, VAR_27, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24)) {



   VAR_40++;
   switch (VAR_26) {
   case 131:
    if ((VAR_27->flags & VAR_13) == 0)
     FUNC_27("Inactive SCB in qinfifo\n");
    FUNC_4(VAR_19, VAR_27, VAR_25);

   case 128:
    break;
   case 129:
    FUNC_27(" 0x%x", VAR_19->qinfifo[VAR_32]);

   case 130:
    FUNC_18(VAR_19, VAR_29, VAR_27);
    VAR_29 = VAR_27;
    break;
   }
  } else {
   FUNC_18(VAR_19, VAR_29, VAR_27);
   VAR_29 = VAR_27;
  }
  VAR_32 = FUNC_0(VAR_32+1);
 }

 FUNC_22(VAR_19, VAR_19->qinfifonext);

 if (VAR_26 == 129)
  FUNC_27("\nWAITING_TID_QUEUES:\n");







 FUNC_23(VAR_19, VAR_1, VAR_1);
 VAR_37 = FUNC_8(VAR_19, VAR_16);
 if ((VAR_37 & VAR_11) != 0) {
  VAR_36 = FUNC_9(VAR_19, VAR_9);
  VAR_28 = FUNC_12(VAR_19, VAR_36);
 } else
  VAR_28 = ((void*)0);
 VAR_38 = FUNC_6(VAR_19);
 VAR_34 = FUNC_9(VAR_19, VAR_18);
 VAR_35 = VAR_14;
 VAR_41 = 0;
 for (VAR_36 = VAR_34; !FUNC_1(VAR_36); VAR_36 = VAR_34) {
  u_int VAR_42;
  u_int VAR_43;

  VAR_41++;
  if (VAR_41 > VAR_2)
   FUNC_26("TID LIST LOOP");

  if (VAR_36 >= VAR_19->scb_data.numscbs) {
   FUNC_27("%s: Waiting TID List inconsistency. "
          "SCB index == 0x%x, yet numscbs == 0x%x.",
          FUNC_14(VAR_19), VAR_36, VAR_19->scb_data.numscbs);
   FUNC_5(VAR_19);
   FUNC_26("for safety");
  }
  VAR_27 = FUNC_12(VAR_19, VAR_36);
  if (VAR_27 == ((void*)0)) {
   FUNC_27("%s: SCB = 0x%x Not Active!\n",
          FUNC_14(VAR_19), VAR_36);
   FUNC_26("Waiting TID List traversal\n");
  }
  FUNC_24(VAR_19, VAR_36);
  VAR_34 = FUNC_10(VAR_19, VAR_15);
  if (FUNC_13(VAR_19, VAR_27, VAR_20, VAR_21, VAR_3,
      VAR_14, VAR_12) == 0) {
   VAR_35 = VAR_36;
   continue;
  }




  if (VAR_26 == 129)
   FUNC_27("       %d ( ", FUNC_3(VAR_19, VAR_27));
  VAR_42 = VAR_36;
  VAR_40 += FUNC_21(VAR_19, VAR_20, VAR_21,
          VAR_22, VAR_23, VAR_24, VAR_25,
          VAR_26, &VAR_42, &VAR_43,
          FUNC_3(VAR_19, VAR_27));




  if (VAR_28 != ((void*)0)
   && FUNC_13(VAR_19, VAR_28, VAR_20, VAR_21,
      VAR_22, VAR_23, VAR_24)) {




   VAR_40++;
   switch (VAR_26) {
   case 131:
    if ((VAR_28->flags & VAR_13) == 0)
     FUNC_27("Inactive SCB pending MK_MSG\n");
    FUNC_4(VAR_19, VAR_28, VAR_25);

   case 128:
   {
    u_int VAR_44;

    FUNC_27("Removing MK_MSG scb\n");





    VAR_44 = VAR_17
        + (2 * FUNC_3(VAR_19, VAR_28));
    FUNC_17(VAR_19, VAR_44, VAR_43);

    VAR_37 &= ~VAR_11;
    FUNC_15(VAR_19, VAR_16, VAR_37);
    FUNC_17(VAR_19, VAR_8,
      FUNC_9(VAR_19, VAR_8)-1);
    VAR_28 = ((void*)0);
    break;
   }
   case 129:
    FUNC_27(" 0x%x", FUNC_2(VAR_27));

   case 130:
    break;
   }
  }

  if (VAR_28 != ((void*)0)
   && FUNC_1(VAR_42)
   && FUNC_13(VAR_19, VAR_27, VAR_20, VAR_21, VAR_3,
      VAR_14, VAR_12)) {






   FUNC_27("Queueing mk_msg_scb\n");
   VAR_42 = FUNC_9(VAR_19, VAR_9);
   VAR_37 &= ~VAR_11;
   FUNC_15(VAR_19, VAR_16, VAR_37);
   VAR_28 = ((void*)0);
  }
  if (VAR_42 != VAR_36)
   FUNC_25(VAR_19, VAR_35, VAR_42, VAR_34);
  if (!FUNC_1(VAR_42))
   VAR_35 = VAR_42;
  if (VAR_26 == 129)
   FUNC_27(")\n");
 }


 FUNC_24(VAR_19, VAR_38);
 FUNC_19(VAR_19, VAR_30);
 return (VAR_40);
}
