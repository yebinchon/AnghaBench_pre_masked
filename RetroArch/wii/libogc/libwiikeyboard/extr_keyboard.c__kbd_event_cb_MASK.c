
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wscons_keymap {int* group1; void** group2; } ;
typedef void* keysym_t ;
struct TYPE_6__ {scalar_t__ type; int modifiers; void* symbol; int keycode; } ;
typedef TYPE_1__ keyboard_event ;
struct TYPE_7__ {int type; int keyCode; } ;
typedef TYPE_2__ USBKeyboard_event ;
struct TYPE_8__ {void* symbol; int keycode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;





 int FUNC_0 (void*) ;
 void* VAR_3 ;




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
 int FUNC_1 (int,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;


 int FUNC_2 (int ,int) ;
 void** VAR_23 ;
 int VAR_24 ;
 TYPE_5__* VAR_25 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_26 ;
 int VAR_27 ;
 void* FUNC_4 (void*) ;
 int FUNC_5 (scalar_t__,int,int) ;
 void* FUNC_6 (void**) ;
 int FUNC_7 (int *,int ,struct wscons_keymap*) ;

__attribute__((used)) static void FUNC_8(USBKeyboard_event VAR_28)
{
 keyboard_event VAR_29;
 struct wscons_keymap VAR_30;
 keysym_t *VAR_31;
 int VAR_32;
 keysym_t VAR_33;
 int VAR_34;

 switch (VAR_28.type) {
 case 130:
  VAR_29.type = VAR_0;
  VAR_29.modifiers = 0;
  VAR_29.keycode = 0;
  VAR_29.symbol = 0;

  FUNC_3(&VAR_29);

  return;

 case 129:
  VAR_29.type = VAR_1;
  break;

 case 128:
  VAR_29.type = VAR_2;
  break;

 default:
  return;
 }

 VAR_29.keycode = VAR_28.keyCode;

 FUNC_7(&VAR_27, VAR_29.keycode, &VAR_30);


 switch (VAR_30.group1[0]) {
 case 133:
  FUNC_5(VAR_29.type, 0, VAR_18);
  break;

 case 131:
  FUNC_5(VAR_29.type, 0, VAR_19);
  break;

 case 132:
  FUNC_5(VAR_29.type, 1, VAR_17);
  break;

 case 145:
  FUNC_5(VAR_29.type, 1, VAR_7);
  FUNC_2(VAR_20,
       FUNC_1(VAR_26, VAR_7));
  break;

 case 144:
  FUNC_5(VAR_29.type, 0, VAR_9);
  break;

 case 143:
  FUNC_5(VAR_29.type, 0, VAR_10);
  break;

 case 147:
  FUNC_5(VAR_29.type, 0, VAR_12);
  break;

 case 146:
  FUNC_5(VAR_29.type, 0, VAR_13);
  break;

 case 135:
  FUNC_5(VAR_29.type, 0, VAR_15);
  break;

 case 136:
  FUNC_5(VAR_29.type, 1, VAR_14);
  break;

 case 134:
  FUNC_5(VAR_29.type, 1, VAR_16);
  FUNC_2(VAR_21,
       FUNC_1(VAR_26, VAR_16));
  break;

 case 137:
  FUNC_5(VAR_29.type, 1, VAR_11);
  FUNC_2(VAR_22,
       FUNC_1(VAR_26, VAR_11));
  break;
 }


 if (VAR_26 & (VAR_15|VAR_14) &&
     !FUNC_1(VAR_26, VAR_5))
  VAR_31 = &VAR_30.group2[0];
 else
  VAR_31 = &VAR_30.group1[0];

 if ((VAR_26 & VAR_16) &&
     FUNC_0(VAR_31[1]) == 139) {
  VAR_32 = !FUNC_1(VAR_26, VAR_6);
  VAR_33 = VAR_31[VAR_32];
 } else {

  if ((VAR_26 & (VAR_7 | VAR_6)) ==
      VAR_7) {
   VAR_32 = 0;
   VAR_33 = FUNC_4(VAR_31[0]);
  } else {
   VAR_32 = FUNC_1(VAR_26, VAR_6);
   VAR_33 = VAR_31[VAR_32];
  }
 }


 switch (FUNC_0(VAR_33)) {
 case 138:
  if (VAR_33 == VAR_3) {
   FUNC_5(VAR_1, 0, VAR_8);
   VAR_24 = 2;
  }
  break;

 case 141:
  if (VAR_29.type != VAR_1)
   return;

  if (VAR_24 == 0) {
   FUNC_5(VAR_1, 0, VAR_8);
   VAR_24 = 1;
   VAR_23[0] = VAR_33;

   return;
  }
  break;
 }

 if ((VAR_29.type == VAR_1) && (VAR_24 > 0)) {





  if (VAR_24 == 2 && VAR_31 == &VAR_30.group2[0]) {
   if (VAR_30.group1[VAR_32] != VAR_30.group2[VAR_32])
    VAR_24 = 0;
  }

  if (VAR_24 != 0) {
   VAR_23[2 - VAR_24] = VAR_33;
   if (--VAR_24 == 0) {
    VAR_33 = FUNC_6(VAR_23);
    FUNC_5(VAR_2, 0, VAR_8);
   } else {
    return;
   }
  }
 }


 switch (FUNC_0(VAR_33)) {
 case 142:
 case 139:
 case 140:
  if (VAR_29.type == VAR_1) {
   for (VAR_34 = 0; VAR_34 < VAR_4; ++VAR_34) {
    if (VAR_25[VAR_34].keycode == 0) {
     VAR_25[VAR_34].keycode = VAR_29.keycode;
     VAR_25[VAR_34].symbol = VAR_33;

     break;
    }
   }
  } else {
   for (VAR_34 = 0; VAR_34 < VAR_4; ++VAR_34) {
    if (VAR_25[VAR_34].keycode == VAR_29.keycode) {
     VAR_33 = VAR_25[VAR_34].symbol;
     VAR_25[VAR_34].keycode = 0;
     VAR_25[VAR_34].symbol = 0;

     break;
    }
   }
  }

  break;
 }

 VAR_29.symbol = VAR_33;
 VAR_29.modifiers = VAR_26;

 FUNC_3(&VAR_29);

 return;
}
