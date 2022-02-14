
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct adb_request {int reply_len; int* reply; } ;
struct TYPE_5__ {int nids; int* id; } ;


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
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ) ;
 int VAR_15 ;
 int FUNC_2 (int,int*,int*) ;
 int FUNC_3 (int ,int ,TYPE_1__*,int ) ;
 int FUNC_4 (struct adb_request*,int *,int,int,int ,...) ;
 scalar_t__ FUNC_5 (int,int) ;
 int VAR_16 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int,int,int,int) ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_1__ VAR_19 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 TYPE_1__ VAR_20 ;
 TYPE_1__ VAR_21 ;
 int FUNC_13 (char*,...) ;

__attribute__((used)) static void
FUNC_14(void)
{
 struct adb_request VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26;
 u16 VAR_27 = 0;

 FUNC_3(VAR_14, 0, &VAR_21, VAR_18);
 FUNC_3(VAR_12, 0, &VAR_20, VAR_17);
 FUNC_3(VAR_13, 0, &VAR_19, VAR_16);

 for (VAR_23 = 0; VAR_23 < VAR_20.nids; VAR_23++) {
  int VAR_28 = VAR_20.id[VAR_23];

  FUNC_2(VAR_28, &VAR_24, &VAR_25);


  FUNC_4(&VAR_22, ((void*)0), VAR_11, 3,
       FUNC_1(VAR_28, VAR_15), 0xff, 0xff);
  if (FUNC_5(VAR_28, 3))
   FUNC_13("ADB keyboard at %d, handler set to 3\n", VAR_28);
  else
   FUNC_13("ADB keyboard at %d, handler 1\n", VAR_28);

  FUNC_2(VAR_28, &VAR_24, &VAR_26);
  VAR_27 |= FUNC_7(VAR_28, VAR_24, VAR_25,
            VAR_26, 0);
 }

 for (VAR_23 = 0; VAR_23 < VAR_19.nids; VAR_23++) {
  int VAR_29 = VAR_19.id[VAR_23];

  FUNC_2(VAR_29, &VAR_24, &VAR_25);
  VAR_27 |= FUNC_7(VAR_29, VAR_24, VAR_25,
            VAR_25, 0);
 }



 for (VAR_23 = 0; VAR_23 < VAR_21.nids; VAR_23++) {
  int VAR_30 = VAR_21.id[VAR_23];
  int VAR_31;

  FUNC_2(VAR_30, &VAR_24, &VAR_25);

  if (FUNC_5(VAR_30, 4)) {
   FUNC_13("ADB mouse at %d, handler set to 4", VAR_30);
   VAR_31 = VAR_0;
  }
  else if (FUNC_5(VAR_30, 0x2F)) {
   FUNC_13("ADB mouse at %d, handler set to 0x2F", VAR_30);
   VAR_31 = VAR_2;
  }
  else if (FUNC_5(VAR_30, 0x42)) {
   FUNC_13("ADB mouse at %d, handler set to 0x42", VAR_30);
   VAR_31 = VAR_7;
  }
  else if (FUNC_5(VAR_30, 0x66)) {
   FUNC_13("ADB mouse at %d, handler set to 0x66", VAR_30);
   VAR_31 = VAR_2;
  }
  else if (FUNC_5(VAR_30, 0x5F)) {
   FUNC_13("ADB mouse at %d, handler set to 0x5F", VAR_30);
   VAR_31 = VAR_2;
  }
  else if (FUNC_5(VAR_30, 3)) {
   FUNC_13("ADB mouse at %d, handler set to 3", VAR_30);
   VAR_31 = VAR_3;
  }
  else if (FUNC_5(VAR_30, 2)) {
   FUNC_13("ADB mouse at %d, handler set to 2", VAR_30);
   VAR_31 = VAR_5;
  }
  else {
   FUNC_13("ADB mouse at %d, handler 1", VAR_30);
   VAR_31 = VAR_4;
  }

  if ((VAR_31 == VAR_7)
      || (VAR_31 == VAR_2)) {
   FUNC_8(VAR_30);
  } else if (VAR_31 == VAR_3) {
   FUNC_9(VAR_30);
  } else if (VAR_31 == VAR_0) {






   FUNC_4(&VAR_22, ((void*)0), VAR_11 | VAR_10, 1,
        FUNC_0(VAR_30, 1));

   if ((VAR_22.reply_len) &&
       (VAR_22.reply[1] == 0x9a) && ((VAR_22.reply[2] == 0x21)
        || (VAR_22.reply[2] == 0x20))) {
    VAR_31 = VAR_6;
    FUNC_10(VAR_30);
   }
   else if ((VAR_22.reply_len >= 4) &&
       (VAR_22.reply[1] == 0x74) && (VAR_22.reply[2] == 0x70) &&
       (VAR_22.reply[3] == 0x61) && (VAR_22.reply[4] == 0x64)) {
    VAR_31 = VAR_8;
    FUNC_11(VAR_30);
   }
   else if ((VAR_22.reply_len >= 4) &&
       (VAR_22.reply[1] == 0x4b) && (VAR_22.reply[2] == 0x4d) &&
       (VAR_22.reply[3] == 0x4c) && (VAR_22.reply[4] == 0x31)) {
    VAR_31 = VAR_9;
    FUNC_12(VAR_30);
   }
   else if ((VAR_22.reply_len == 9) &&
       (VAR_22.reply[1] == 0x4b) && (VAR_22.reply[2] == 0x4f) &&
       (VAR_22.reply[3] == 0x49) && (VAR_22.reply[4] == 0x54)) {
    if (FUNC_5(VAR_30, 0x42)) {
     FUNC_13("\nADB MacAlly 2-button mouse at %d, handler set to 0x42", VAR_30);
     VAR_31 = VAR_1;
    }
   }
  }
  FUNC_13("\n");

  FUNC_2(VAR_30, &VAR_24, &VAR_26);
  VAR_27 |= FUNC_7(VAR_30, VAR_24, VAR_25,
            VAR_26, VAR_31);
 }
 FUNC_6(VAR_27);
}
