
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntrig_data {int pen_active; int finger_active; int inverted; int x; int reading_a_point; int y; int id; int found_contact_id; int w; int h; } ;
struct input_dev {int dummy; } ;
struct hid_usage {int hid; } ;
struct hid_field {int application; TYPE_1__* hidinput; } ;
struct hid_device {int claimed; int (* hiddev_hid_event ) (struct hid_device*,struct hid_field*,struct hid_usage*,int) ;} ;
typedef int __s32 ;
struct TYPE_2__ {struct input_dev* input; } ;


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
 struct ntrig_data* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct input_dev*,int ,int ,int) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct hid_device*,struct hid_field*,struct hid_usage*,int) ;

__attribute__((used)) static int FUNC_5 (struct hid_device *VAR_14, struct hid_field *VAR_15,
                          struct hid_usage *VAR_16, __s32 VAR_17)
{
 struct input_dev *VAR_18 = VAR_15->hidinput->input;
 struct ntrig_data *VAR_19 = FUNC_0(VAR_14);

        if (VAR_14->claimed & VAR_13) {
  switch (VAR_16->hid) {

  case 133:
   if (VAR_15->application & 0x3)
    VAR_19->pen_active = (VAR_17 != 0);
   else
    VAR_19->finger_active = (VAR_17 != 0);
   return 0;

  case 132:
   VAR_19->inverted = VAR_17;
   return 0;

  case 129:
   VAR_19->x = VAR_17;
   VAR_19->reading_a_point = 1;
   break;
  case 128:
   VAR_19->y = VAR_17;
   break;
  case 135:
   VAR_19->id = VAR_17;

   VAR_19->found_contact_id = 1;
   break;
  case 130:
   VAR_19->w = VAR_17;
   break;
  case 134:
   VAR_19->h = VAR_17;





   if (!VAR_19->found_contact_id) {
    if (VAR_19->pen_active && VAR_19->finger_active) {
     FUNC_3(VAR_18, VAR_8, 0);
     FUNC_3(VAR_18, VAR_8, 1);
    }
    FUNC_1(VAR_18, VAR_11, VAR_6, VAR_19->x);
    FUNC_1(VAR_18, VAR_11, VAR_7, VAR_19->y);
   }
   break;
  case 131:





   if (! VAR_19->found_contact_id) {
    if (VAR_19->pen_active && VAR_19->finger_active) {
     FUNC_3(VAR_18,
       VAR_19->inverted ? VAR_10 : VAR_9
       , 0);
     FUNC_3(VAR_18,
       VAR_19->inverted ? VAR_10 : VAR_9
       , 1);
    }
    FUNC_1(VAR_18, VAR_11, VAR_6, VAR_19->x);
    FUNC_1(VAR_18, VAR_11, VAR_7, VAR_19->y);
    FUNC_1(VAR_18, VAR_11, VAR_5, VAR_17);
   }
   break;
  case 0xff000002:






   if (!VAR_19->reading_a_point || VAR_17 != 1)
    break;

   if (VAR_19->id == 0) {
    FUNC_1(VAR_18, VAR_11, VAR_6, VAR_19->x);
    FUNC_1(VAR_18, VAR_11, VAR_7, VAR_19->y);
   }
   FUNC_1(VAR_18, VAR_11, VAR_1, VAR_19->x);
   FUNC_1(VAR_18, VAR_11, VAR_2, VAR_19->y);
   if (VAR_19->w > VAR_19->h) {
    FUNC_1(VAR_18, VAR_11,
      VAR_0, 1);
    FUNC_1(VAR_18, VAR_11,
      VAR_3, VAR_19->w);
    FUNC_1(VAR_18, VAR_11,
      VAR_4, VAR_19->h);
   } else {
    FUNC_1(VAR_18, VAR_11,
      VAR_0, 0);
    FUNC_1(VAR_18, VAR_11,
      VAR_3, VAR_19->h);
    FUNC_1(VAR_18, VAR_11,
      VAR_4, VAR_19->w);
   }
   FUNC_2(VAR_15->hidinput->input);
   VAR_19->reading_a_point = 0;
   VAR_19->found_contact_id = 0;
   break;

  default:

   return 0;
  }
 }


        if (VAR_14->claimed & VAR_12 && VAR_14->hiddev_hid_event)
                VAR_14->hiddev_hid_event(VAR_14, VAR_15, VAR_16, VAR_17);

 return 1;
}
