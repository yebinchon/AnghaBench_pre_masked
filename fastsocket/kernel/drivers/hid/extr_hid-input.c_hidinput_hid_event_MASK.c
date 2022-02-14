
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_dev {int key; } ;
struct hid_usage {scalar_t__ type; scalar_t__ hat_min; scalar_t__ hat_max; int hat_dir; int code; int hid; } ;
struct hid_field {int logical_minimum; int logical_maximum; int flags; TYPE_1__* hidinput; } ;
struct hid_device {unsigned int quirks; } ;
typedef int __s32 ;
struct TYPE_4__ {int x; int y; } ;
struct TYPE_3__ {struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 TYPE_2__* VAR_14 ;
 int FUNC_2 (struct input_dev*,scalar_t__,int,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (int,int ) ;

void FUNC_5(struct hid_device *VAR_15, struct hid_field *VAR_16, struct hid_usage *VAR_17, __s32 VAR_18)
{
 struct input_dev *VAR_19;
 unsigned *VAR_20 = &VAR_15->quirks;

 if (!VAR_16->hidinput)
  return;

 VAR_19 = VAR_16->hidinput->input;

 if (!VAR_17->type)
  return;

 if (VAR_17->hat_min < VAR_17->hat_max || VAR_17->hat_dir) {
  int VAR_21 = VAR_17->hat_dir;
  if (!VAR_21)
   VAR_21 = (VAR_18 - VAR_17->hat_min) * 8 / (VAR_17->hat_max - VAR_17->hat_min + 1) + 1;
  if (VAR_21 < 0 || VAR_21 > 8) VAR_21 = 0;
  FUNC_2(VAR_19, VAR_17->type, VAR_17->code , VAR_14[VAR_21].x);
                FUNC_2(VAR_19, VAR_17->type, VAR_17->code + 1, VAR_14[VAR_21].y);
                return;
        }

 if (VAR_17->hid == (VAR_9 | 0x003c)) {
  *VAR_20 = VAR_18 ? (*VAR_20 | VAR_7) : (*VAR_20 & ~VAR_7);
  return;
 }

 if (VAR_17->hid == (VAR_9 | 0x0032)) {
  if (VAR_18) {
   FUNC_2(VAR_19, VAR_17->type, (*VAR_20 & VAR_7) ? VAR_1 : VAR_17->code, 1);
   return;
  }
  FUNC_2(VAR_19, VAR_17->type, VAR_17->code, 0);
  FUNC_2(VAR_19, VAR_17->type, VAR_1, 0);
  return;
 }

 if (VAR_17->hid == (VAR_9 | 0x0030) && (*VAR_20 & VAR_8)) {
  int VAR_22 = VAR_16->logical_minimum;
  int VAR_23 = VAR_16->logical_maximum;
  FUNC_2(VAR_19, VAR_4, VAR_2, VAR_18 > VAR_22 + ((VAR_23 - VAR_22) >> 3));
 }

 if (VAR_17->hid == (VAR_10 | 0x83UL)) {
  FUNC_1("Maximum Effects - %d\n",VAR_18);
  return;
 }

 if (VAR_17->hid == (VAR_10 | 0x7fUL)) {
  FUNC_1("PID Pool Report\n");
  return;
 }

 if ((VAR_17->type == VAR_4) && (VAR_17->code == 0))
  return;

 if ((VAR_17->type == VAR_3) && (VAR_16->flags & VAR_6) &&
   (VAR_17->code == VAR_0)) {
  int VAR_24 = FUNC_0(VAR_18);
  int VAR_25 = VAR_18 > 0 ? VAR_12 : VAR_11;
  int VAR_26;

  for (VAR_26 = 0; VAR_26 < VAR_24; VAR_26++) {
   FUNC_2(VAR_19, VAR_4, VAR_25, 1);
   FUNC_3(VAR_19);
   FUNC_2(VAR_19, VAR_4, VAR_25, 0);
   FUNC_3(VAR_19);
  }
  return;
 }


 if (VAR_17->type == VAR_4 && !!FUNC_4(VAR_17->code, VAR_19->key) != VAR_18)
  FUNC_2(VAR_19, VAR_5, VAR_13, VAR_17->hid);

 FUNC_2(VAR_19, VAR_17->type, VAR_17->code, VAR_18);

 if ((VAR_16->flags & VAR_6) && (VAR_17->type == VAR_4))
  FUNC_2(VAR_19, VAR_17->type, VAR_17->code, 0);
}
