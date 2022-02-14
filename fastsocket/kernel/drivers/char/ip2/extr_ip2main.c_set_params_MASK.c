
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tcflag_t ;
struct ktermios {int c_lflag; int c_cflag; int c_iflag; char* c_cc; } ;
typedef TYPE_2__* i2ChanStrPtr ;
struct TYPE_10__ {TYPE_1__* termios; } ;
struct TYPE_9__ {int dataSetOut; int flags; scalar_t__ speed; int BaudBase; int BaudDivisor; TYPE_6__* pTTY; } ;
struct TYPE_8__ {int c_lflag; int c_cflag; int c_iflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
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
 void* VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 void* VAR_27 ;
 void* VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_0 (int) ;
 int VAR_34 ;
 int FUNC_1 (char) ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_2 (char) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char) ;
 int FUNC_5 (char) ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_6 (char) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char) ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;




 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 char FUNC_16 (TYPE_6__*) ;
 char FUNC_17 (TYPE_6__*) ;
 size_t VAR_75 ;
 size_t VAR_76 ;
 char VAR_77 ;
 int FUNC_18 (TYPE_2__*,int) ;
 int FUNC_19 (int ,TYPE_2__*,int,int,int ,...) ;

__attribute__((used)) static void
FUNC_20( i2ChanStrPtr VAR_78, struct ktermios *VAR_79 )
{
 tcflag_t VAR_80, VAR_81, VAR_82;
 char VAR_83, VAR_84;
 struct ktermios VAR_85;

 VAR_82 = VAR_78->pTTY->termios->c_lflag;
 VAR_80 = VAR_78->pTTY->termios->c_cflag;
 VAR_81 = VAR_78->pTTY->termios->c_iflag;

 if (VAR_79 == ((void*)0)) {
  VAR_85.c_lflag = ~VAR_82;
  VAR_85.c_cflag = ~VAR_80;
  VAR_85.c_iflag = ~VAR_81;
  VAR_79 = &VAR_85;
 }

 {
  switch ( VAR_80 & VAR_6 ) {
  case 154:
   FUNC_19( VAR_73, VAR_78, 100, 2, VAR_41, VAR_39);
   VAR_78->dataSetOut &= ~(VAR_61 | VAR_62);
   FUNC_19( VAR_74, VAR_78, 100, 1, FUNC_10(25));
   VAR_78->pTTY->termios->c_cflag |= (VAR_6 & VAR_79->c_cflag);
   goto service_it;
   break;
  case 140:




   if ( ( VAR_78->flags & VAR_3 ) == VAR_2 ) {
    VAR_78->speed = VAR_24;
   } else if ( (VAR_78->flags & VAR_3) == VAR_4 ) {
    VAR_78->speed = VAR_8;
   } else if ( (VAR_78->flags & VAR_3) == VAR_1 ) {
    VAR_78->speed = VAR_29;
   } else {
    VAR_78->speed = VAR_20;
   }
   break;
  case 137: VAR_78->speed = VAR_23; break;
  case 134: VAR_78->speed = VAR_26; break;
  case 153: VAR_78->speed = VAR_7; break;
  case 150: VAR_78->speed = VAR_10; break;
  case 149: VAR_78->speed = VAR_11; break;
  case 145: VAR_78->speed = VAR_15; break;
  case 142: VAR_78->speed = VAR_18; break;
  case 135: VAR_78->speed = VAR_25; break;
  case 151: VAR_78->speed = VAR_9; break;
  case 147: VAR_78->speed = VAR_13; break;
  case 143: VAR_78->speed = VAR_17; break;
  case 138: VAR_78->speed = VAR_22; break;
  case 132: VAR_78->speed = VAR_28; break;
  case 146: VAR_78->speed = VAR_14; break;
  case 136: VAR_78->speed = VAR_24; break;
  case 152: VAR_78->speed = VAR_8; break;
  case 148: VAR_78->speed = VAR_12; break;
  case 144: VAR_78->speed = VAR_16; break;
  case 141: VAR_78->speed = VAR_19; break;
  case 139: VAR_78->speed = VAR_21; break;
  case 133: VAR_78->speed = VAR_27; break;
  default: VAR_78->speed = VAR_28; break;
  }
  if ( VAR_78->speed == VAR_29 ) {

   int VAR_86 = VAR_78->BaudBase / VAR_78->BaudDivisor;
   if ( VAR_86 == 921600 ) {
    VAR_78->speed = VAR_27;
   } else {
    VAR_86 = VAR_86/10;
    FUNC_19( VAR_74, VAR_78, 100, 1, FUNC_0(VAR_86) );
   }
  }
  FUNC_19( VAR_74, VAR_78, 100, 1, FUNC_11(VAR_78->speed));

  FUNC_19 ( VAR_74, VAR_78, 100, 2, VAR_40, VAR_44);
  VAR_78->dataSetOut |= (VAR_61 | VAR_62);
 }
 if ( (VAR_54 & VAR_80) ^ (VAR_54 & VAR_79->c_cflag))
 {
  FUNC_19 ( VAR_74, VAR_78, 100, 1,
   FUNC_14( ( VAR_80 & VAR_54 ) ? VAR_56 : VAR_55));
 }
 if (((VAR_70|VAR_72) & VAR_80) ^ ((VAR_70|VAR_72) & VAR_79->c_cflag))
 {
  FUNC_19 ( VAR_74, VAR_78, 100, 1,
   FUNC_13(
    (VAR_80 & VAR_70 ? (VAR_80 & VAR_72 ? VAR_53 : VAR_51) : VAR_52)
   )
  );
 }

 if ( (VAR_50 & VAR_80)^(VAR_50 & VAR_79->c_cflag))
 {
  int VAR_87;
  switch ( VAR_80 & VAR_50 ) {
  case 131: VAR_87 = VAR_57; break;
  case 130: VAR_87 = VAR_58; break;
  case 129: VAR_87 = VAR_59; break;
  case 128: VAR_87 = VAR_60; break;
  default: VAR_87 = VAR_57; break;
  }
  FUNC_19 ( VAR_74, VAR_78, 100, 1, FUNC_12(VAR_87) );
 }

 if ( (VAR_80 & VAR_49) ) {
  FUNC_19(VAR_74, VAR_78, 100,
      2, VAR_36, VAR_43);
 } else {
  FUNC_19(VAR_74, VAR_78, 100,
      2, VAR_35, VAR_42);
 }



 VAR_83 = FUNC_17(VAR_78->pTTY);
 VAR_84 = FUNC_16(VAR_78->pTTY);


 if (VAR_83 == VAR_77 )
 {
  VAR_83 = ~VAR_77;
 }
 if (VAR_84 == VAR_77 )
 {
  VAR_84 = ~VAR_77;
 }


 if ( VAR_79->c_cc[VAR_75] != VAR_84 )
 {
  FUNC_19(VAR_73, VAR_78, 100, 1, FUNC_3(VAR_84));
  FUNC_19(VAR_74, VAR_78, 100, 1, FUNC_5(VAR_84));
 }
 if ( VAR_79->c_cc[VAR_76] != VAR_83 )
 {
   FUNC_19(VAR_73, VAR_78, 100, 1, FUNC_2(VAR_83));
   FUNC_19(VAR_74, VAR_78, 100, 1, FUNC_4(VAR_83));
 }
 if (VAR_83 == VAR_77 )
 {
  VAR_83 = ~VAR_77;
  goto no_xoff;
 }
 if ((VAR_81 & (VAR_68))^(VAR_79->c_iflag & (VAR_68)))
 {
  if ( VAR_81 & VAR_68 ) {
   FUNC_19(VAR_74, VAR_78, 100, 1, FUNC_8(VAR_46));
  } else {
no_xoff:
   FUNC_19(VAR_74, VAR_78, 100, 1, FUNC_8(VAR_45));
  }
 }
 if (VAR_84 == VAR_77 )
 {
  goto no_xon;
 }
 if ((VAR_81 & (VAR_69|VAR_67)) ^ (VAR_79->c_iflag & (VAR_69|VAR_67)))
 {
  if ( VAR_81 & VAR_69 ) {
   if ( VAR_81 & VAR_67 ) {
    FUNC_19(VAR_74, VAR_78, 100, 1, FUNC_7(VAR_31));
   } else {
    FUNC_19(VAR_74, VAR_78, 100, 1, FUNC_7(VAR_32));
   }
  } else {
no_xon:
   FUNC_19(VAR_74, VAR_78, 100, 1, FUNC_7(VAR_30));
  }
 }
 if ( (VAR_81 & VAR_66) ^ ( VAR_79->c_iflag & (VAR_66)) )
 {
  FUNC_19(VAR_74, VAR_78, 100, 1,
    FUNC_6((VAR_81 & VAR_66 ? 1 : 0)));
 }
 if ( (VAR_81 & VAR_65) ^ ( VAR_79->c_iflag & (VAR_65)) )
 {
  FUNC_19(VAR_74, VAR_78, 100, 1,
    FUNC_9((VAR_81 & VAR_65) ? VAR_48 : VAR_47));
 }

 if ( (VAR_81 & (VAR_63|VAR_71|VAR_5|VAR_64))
   ^ ( VAR_79->c_iflag & (VAR_63|VAR_71|VAR_5|VAR_64)) )
 {
  char VAR_88 = 0;
  char VAR_89 = 0;

  if ( VAR_81 & VAR_63 ) {

   FUNC_19(VAR_74, VAR_78, 100, 1, VAR_34);
  } else {
   if ( VAR_81 & VAR_5 ) {
    if ( VAR_81 & VAR_71 ) {
     VAR_88 = 0x0a;
    } else {
     VAR_88 = 0x1a;
    }
    VAR_88 |= 0x04;
   } else {
    if ( VAR_81 & VAR_71 ) {
     VAR_88 = 0x0b;
    } else {
     VAR_88 = 0x01;
    }
   }
   FUNC_19(VAR_74, VAR_78, 100, 1, FUNC_1(VAR_88));
  }

  if (VAR_81 & VAR_64) {
   VAR_89 = 0x20;


  } else {
   if ( VAR_81 & VAR_71 ) {



    VAR_89 = 0x04 ;
    FUNC_19(VAR_74, VAR_78, 100, 1, FUNC_6((char)0));
   } else {
    VAR_89 = 0x03;
   }
  }
  FUNC_19(VAR_74, VAR_78, 100, 1, FUNC_15(VAR_89));
 }
 if (VAR_80 & VAR_33) {

  FUNC_19(VAR_74, VAR_78, 100, 1, VAR_37);
  VAR_78->flags &= ~VAR_0;
 } else {
  FUNC_19(VAR_74, VAR_78, 100, 1, VAR_38);
  VAR_78->flags |= VAR_0;
 }

service_it:
 FUNC_18( VAR_78, 100 );
}
