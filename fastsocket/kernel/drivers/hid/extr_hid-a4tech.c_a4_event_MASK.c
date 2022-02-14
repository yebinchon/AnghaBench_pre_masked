
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct hid_usage {scalar_t__ type; scalar_t__ code; int hid; } ;
struct hid_field {TYPE_1__* hidinput; } ;
struct hid_device {int claimed; } ;
struct a4tech_sc {int quirks; int hw_wheel; scalar_t__ delayed_value; } ;
typedef scalar_t__ __s32 ;
struct TYPE_2__ {struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct a4tech_sc* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct input_dev*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_6, struct hid_field *VAR_7,
  struct hid_usage *VAR_8, __s32 VAR_9)
{
 struct a4tech_sc *VAR_10 = FUNC_0(VAR_6);
 struct input_dev *VAR_11;

 if (!(VAR_6->claimed & VAR_3) || !VAR_7->hidinput ||
   !VAR_8->type)
  return 0;

 VAR_11 = VAR_7->hidinput->input;

 if (VAR_10->quirks & VAR_1) {
  if (VAR_8->type == VAR_2 && VAR_8->code == VAR_5) {
   VAR_10->delayed_value = VAR_9;
   return 1;
  }

  if (VAR_8->hid == 0x000100b8) {
   FUNC_1(VAR_11, VAR_2, VAR_9 ? VAR_4 :
     VAR_5, VAR_10->delayed_value);
   return 1;
  }
 }

 if ((VAR_10->quirks & VAR_0) && VAR_8->hid == 0x00090007) {
  VAR_10->hw_wheel = !!VAR_9;
  return 1;
 }

 if (VAR_8->code == VAR_5 && VAR_10->hw_wheel) {
  FUNC_1(VAR_11, VAR_8->type, VAR_4, VAR_9);
  return 1;
 }

 return 0;
}
