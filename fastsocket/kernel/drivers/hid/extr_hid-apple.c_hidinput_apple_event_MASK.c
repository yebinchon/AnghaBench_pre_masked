
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int led; } ;
struct hid_usage {scalar_t__ code; int type; } ;
struct hid_device {int product; } ;
struct apple_sc {int fn_on; int quirks; int pressed_numlock; int pressed_fn; } ;
struct apple_key_translation {int flags; scalar_t__ to; } ;
typedef scalar_t__ __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct apple_key_translation* FUNC_0 (int ,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_7 ;
 struct apple_sc* FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct input_dev*,int ,scalar_t__,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct hid_device *VAR_10, struct input_dev *VAR_11,
  struct hid_usage *VAR_12, __s32 VAR_13)
{
 struct apple_sc *VAR_14 = FUNC_2(VAR_10);
 const struct apple_key_translation *VAR_15;

 if (VAR_12->code == VAR_3) {
  VAR_14->fn_on = !!VAR_13;
  FUNC_3(VAR_11, VAR_12->type, VAR_12->code, VAR_13);
  return 1;
 }

 if (VAR_7) {
  int VAR_16;

  VAR_15 = FUNC_0((VAR_10->product < 0x21d ||
     VAR_10->product >= 0x300) ?
     VAR_8 : VAR_5,
     VAR_12->code);
  if (VAR_15) {
   if (FUNC_5(VAR_12->code, VAR_14->pressed_fn))
    VAR_16 = 1;
   else if (VAR_15->flags & VAR_0)
    VAR_16 = (VAR_7 == 2 && VAR_14->fn_on) ||
     (VAR_7 == 1 && !VAR_14->fn_on);
   else
    VAR_16 = VAR_14->fn_on;

   if (VAR_16) {
    if (VAR_13)
     FUNC_4(VAR_12->code, VAR_14->pressed_fn);
    else
     FUNC_1(VAR_12->code, VAR_14->pressed_fn);

    FUNC_3(VAR_11, VAR_12->type, VAR_15->to,
      VAR_13);

    return 1;
   }
  }

  if (VAR_14->quirks & VAR_2 &&
    (FUNC_5(VAR_12->code, VAR_14->pressed_numlock) ||
    FUNC_5(VAR_4, VAR_11->led))) {
   VAR_15 = FUNC_0(VAR_9,
     VAR_12->code);

   if (VAR_15) {
    if (VAR_13)
     FUNC_4(VAR_12->code,
       VAR_14->pressed_numlock);
    else
     FUNC_1(VAR_12->code,
       VAR_14->pressed_numlock);

    FUNC_3(VAR_11, VAR_12->type, VAR_15->to,
      VAR_13);
   }

   return 1;
  }
 }

 if (VAR_14->quirks & VAR_1) {
  VAR_15 = FUNC_0(VAR_6, VAR_12->code);
  if (VAR_15) {
   FUNC_3(VAR_11, VAR_12->type, VAR_15->to, VAR_13);
   return 1;
  }
 }

 return 0;
}
