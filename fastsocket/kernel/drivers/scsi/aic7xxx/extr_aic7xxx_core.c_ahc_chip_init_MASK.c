
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct ahc_softc {int features; int flags; int our_id_b; int seltime_b; int our_id; int seltime; int* qoutfifo; int* qinfifo; int shared_data_busaddr; int tqinfifonext; int qinfifonext; int qoutfifonext; TYPE_2__* next_queued_scb; TYPE_3__* scb_data; } ;
struct TYPE_6__ {int hscb_busaddr; } ;
struct TYPE_5__ {TYPE_1__* hscb; } ;
struct TYPE_4__ {int tag; } ;


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
 int FUNC_0 (int,int) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
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
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 int VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 scalar_t__ VAR_59 ;
 scalar_t__ VAR_60 ;
 scalar_t__ VAR_61 ;
 int FUNC_1 (struct ahc_softc*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ahc_softc*,scalar_t__) ;
 int FUNC_4 (struct ahc_softc*) ;
 char* FUNC_5 (struct ahc_softc*) ;
 int FUNC_6 (struct ahc_softc*,scalar_t__,int) ;
 int FUNC_7 (struct ahc_softc*) ;
 int FUNC_8 (struct ahc_softc*,int ) ;
 int FUNC_9 (struct ahc_softc*,int ) ;
 scalar_t__ VAR_62 ;
 int FUNC_10 (char*,char*) ;

int
FUNC_11(struct ahc_softc *VAR_63)
{
 int VAR_64;
 int VAR_65;
 u_int VAR_66;
 u_int VAR_67;
 u_int VAR_68;
 uint32_t VAR_69;

 FUNC_6(VAR_63, VAR_48, 0);
 FUNC_6(VAR_63, VAR_49, 0);


 if (VAR_63->features & VAR_10) {




  FUNC_6(VAR_63, VAR_39, FUNC_3(VAR_63, VAR_39) | VAR_47);
  VAR_64 = (VAR_63->flags & VAR_9) != 0 ? VAR_56 : 0;
  FUNC_6(VAR_63, VAR_43, VAR_63->our_id_b);
  VAR_67 = FUNC_3(VAR_63, VAR_42 + 1);
  FUNC_6(VAR_63, VAR_58, (VAR_67 & (VAR_26|VAR_55))
     |VAR_64|VAR_63->seltime_b|VAR_27|VAR_0);
  if ((VAR_63->features & VAR_11) != 0)
   FUNC_6(VAR_63, VAR_51, FUNC_3(VAR_63, VAR_51)|VAR_20);
  FUNC_6(VAR_63, VAR_52, VAR_25|VAR_23|VAR_22);
  FUNC_6(VAR_63, VAR_57, VAR_14|VAR_54);


  FUNC_6(VAR_63, VAR_39, FUNC_3(VAR_63, VAR_39) & ~VAR_47);
 }
 VAR_64 = (VAR_63->flags & VAR_8) != 0 ? VAR_56 : 0;
 if ((VAR_63->features & VAR_11) != 0)
  FUNC_6(VAR_63, VAR_44, VAR_63->our_id);
 else
  FUNC_6(VAR_63, VAR_43, VAR_63->our_id);
 VAR_67 = FUNC_3(VAR_63, VAR_42);
 FUNC_6(VAR_63, VAR_58, (VAR_67 & (VAR_26|VAR_55))
    |VAR_64|VAR_63->seltime
    |VAR_27|VAR_0);
 if ((VAR_63->features & VAR_11) != 0)
  FUNC_6(VAR_63, VAR_51, FUNC_3(VAR_63, VAR_51)|VAR_20);
 FUNC_6(VAR_63, VAR_52, VAR_25|VAR_23|VAR_22);
 FUNC_6(VAR_63, VAR_57, VAR_14|VAR_54);


 for (VAR_66 = 0; VAR_66 < 16; VAR_66++) {
  FUNC_9(VAR_63, FUNC_0(VAR_66 << 4, 0));
  if ((VAR_63->flags & VAR_6) != 0) {
   int VAR_70;





   for (VAR_70 = 1; VAR_70 < VAR_4; VAR_70++)
    FUNC_9(VAR_63, FUNC_0(VAR_66 << 4, VAR_70));
  }
 }


 for (VAR_66 = 0; VAR_66 < 256; VAR_66++)
  VAR_63->qoutfifo[VAR_66] = VAR_40;
 FUNC_8(VAR_63, VAR_12);

 for (VAR_66 = 0; VAR_66 < 256; VAR_66++)
  VAR_63->qinfifo[VAR_66] = VAR_40;

 if ((VAR_63->features & VAR_3) != 0) {
  FUNC_6(VAR_63, VAR_59, 0);
  FUNC_6(VAR_63, VAR_59 + 1, 0);
 }




 VAR_69 = VAR_63->scb_data->hscb_busaddr;
 FUNC_6(VAR_63, VAR_29, VAR_69 & 0xFF);
 FUNC_6(VAR_63, VAR_29 + 1, (VAR_69 >> 8) & 0xFF);
 FUNC_6(VAR_63, VAR_29 + 2, (VAR_69 >> 16) & 0xFF);
 FUNC_6(VAR_63, VAR_29 + 3, (VAR_69 >> 24) & 0xFF);

 VAR_69 = VAR_63->shared_data_busaddr;
 FUNC_6(VAR_63, VAR_50, VAR_69 & 0xFF);
 FUNC_6(VAR_63, VAR_50 + 1, (VAR_69 >> 8) & 0xFF);
 FUNC_6(VAR_63, VAR_50 + 2, (VAR_69 >> 16) & 0xFF);
 FUNC_6(VAR_63, VAR_50 + 3, (VAR_69 >> 24) & 0xFF);






 FUNC_6(VAR_63, VAR_13, 5);
 FUNC_6(VAR_63, VAR_13 + 1, 9);
 FUNC_6(VAR_63, VAR_13 + 2, 9);
 FUNC_6(VAR_63, VAR_13 + 3, 0);
 FUNC_6(VAR_63, VAR_13 + 4, 15);
 FUNC_6(VAR_63, VAR_13 + 5, 11);
 FUNC_6(VAR_63, VAR_13 + 6, 0);
 FUNC_6(VAR_63, VAR_13 + 7, 0);

 if ((VAR_63->features & VAR_1) != 0)
  FUNC_6(VAR_63, VAR_30, 0);


 if ((VAR_63->features & VAR_7) != 0) {
  VAR_63->tqinfifonext = 1;
  FUNC_6(VAR_63, VAR_32, VAR_63->tqinfifonext - 1);
  FUNC_6(VAR_63, VAR_60, VAR_63->tqinfifonext);
 }
 VAR_63->qinfifonext = 0;
 VAR_63->qoutfifonext = 0;
 if ((VAR_63->features & VAR_5) != 0) {
  FUNC_6(VAR_63, VAR_37, VAR_41);
  FUNC_6(VAR_63, VAR_28, VAR_63->qinfifonext);
  FUNC_6(VAR_63, VAR_53, VAR_63->qinfifonext);
  FUNC_6(VAR_63, VAR_46, 0);
 } else {
  FUNC_6(VAR_63, VAR_31, VAR_63->qinfifonext);
  FUNC_6(VAR_63, VAR_36, VAR_63->qinfifonext);
  FUNC_6(VAR_63, VAR_38, VAR_63->qoutfifonext);
 }


 FUNC_6(VAR_63, VAR_61, VAR_40);


 FUNC_6(VAR_63, VAR_15, VAR_40);


 FUNC_6(VAR_63, VAR_34, VAR_33);






 VAR_68 = VAR_24|VAR_18|VAR_19;
 if ((VAR_63->flags & VAR_2) != 0)
  VAR_68 |= VAR_21;
 FUNC_6(VAR_63, VAR_45, VAR_68);


 FUNC_1(VAR_63);




 FUNC_6(VAR_63, VAR_35, VAR_63->next_queued_scb->hscb->tag);





 if (VAR_62)
  FUNC_10("%s: Downloading Sequencer Program...",
         FUNC_5(VAR_63));

 VAR_65 = FUNC_4(VAR_63);
 if (VAR_65 != 0)
  return (VAR_65);

 if ((VAR_63->features & VAR_11) != 0) {
  int VAR_71;
  for (VAR_71 = 5000;
       (FUNC_3(VAR_63, VAR_39) & (VAR_17|VAR_16)) == 0 && VAR_71;
       VAR_71--)
   FUNC_2(100);
 }
 FUNC_7(VAR_63);
 return (0);
}
