
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_mac_info {int serdes_link_state; int serdes_has_link; int txcw; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;
typedef int s32 ;


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




 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_12)
{
 struct e1000_mac_info *VAR_13 = &VAR_12->mac;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 s32 VAR_19 = 0;

 VAR_15 = FUNC_2(VAR_1);
 VAR_16 = FUNC_2(VAR_10);
 FUNC_2(VAR_9);

 FUNC_4(10, 20);
 VAR_14 = FUNC_2(VAR_9);

 if ((VAR_14 & VAR_6) && !(VAR_14 & VAR_5)) {

  switch (VAR_13->serdes_link_state) {
  case 131:
   if (!(VAR_16 & VAR_7)) {



    VAR_13->serdes_link_state =
        130;
    VAR_13->serdes_has_link = 0;
    FUNC_1("AN_UP     -> AN_PROG\n");
   } else {
    VAR_13->serdes_has_link = 1;
   }
   break;

  case 128:





   if (VAR_14 & VAR_4) {

    FUNC_3(VAR_11, VAR_13->txcw);
    FUNC_3(VAR_1, (VAR_15 & ~VAR_3));
    VAR_13->serdes_link_state =
        130;
    VAR_13->serdes_has_link = 0;
    FUNC_1("FORCED_UP -> AN_PROG\n");
   } else {
    VAR_13->serdes_has_link = 1;
   }
   break;

  case 130:
   if (VAR_14 & VAR_4) {




    if (VAR_16 & VAR_7) {
     VAR_13->serdes_link_state =
         131;
     FUNC_1("AN_PROG   -> AN_UP\n");
     VAR_13->serdes_has_link = 1;
    } else {

     VAR_13->serdes_link_state =
         129;
     FUNC_1("AN_PROG   -> DOWN\n");
    }
   } else {




    FUNC_3(VAR_11, (VAR_13->txcw & ~VAR_8));
    VAR_15 |= (VAR_3 | VAR_2);
    FUNC_3(VAR_1, VAR_15);


    VAR_19 = FUNC_0(VAR_12);
    if (VAR_19) {
     FUNC_1("Error config flow control\n");
     break;
    }
    VAR_13->serdes_link_state =
        128;
    VAR_13->serdes_has_link = 1;
    FUNC_1("AN_PROG   -> FORCED_UP\n");
   }
   break;

  case 129:
  default:




   FUNC_3(VAR_11, VAR_13->txcw);
   FUNC_3(VAR_1, (VAR_15 & ~VAR_3));
   VAR_13->serdes_link_state =
       130;
   VAR_13->serdes_has_link = 0;
   FUNC_1("DOWN      -> AN_PROG\n");
   break;
  }
 } else {
  if (!(VAR_14 & VAR_6)) {
   VAR_13->serdes_has_link = 0;
   VAR_13->serdes_link_state = 129;
   FUNC_1("ANYSTATE  -> DOWN\n");
  } else {




   for (VAR_18 = 0; VAR_18 < VAR_0; VAR_18++) {
    FUNC_4(10, 20);
    VAR_14 = FUNC_2(VAR_9);
    if ((VAR_14 & VAR_6) &&
        (VAR_14 & VAR_4))
     continue;

    if (VAR_14 & VAR_5) {
     VAR_13->serdes_has_link = 0;
     VAR_13->serdes_link_state =
         129;
     FUNC_1("ANYSTATE  -> DOWN\n");
     break;
    }
   }

   if (VAR_18 == VAR_0) {
    VAR_17 = FUNC_2(VAR_11);
    VAR_17 |= VAR_8;
    FUNC_3(VAR_11, VAR_17);
    VAR_13->serdes_link_state =
        130;
    VAR_13->serdes_has_link = 0;
    FUNC_1("ANYSTATE  -> AN_PROG\n");
   }
  }
 }

 return VAR_19;
}
