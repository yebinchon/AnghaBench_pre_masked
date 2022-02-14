
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {char* name; struct input_dev* dev; } ;
struct ps2pp_info {int features; int kind; } ;
struct input_dev {int relbit; int keybit; } ;


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
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct psmouse *VAR_13,
           const struct ps2pp_info *VAR_14,
           bool VAR_15)
{
 struct input_dev *VAR_16 = VAR_13->dev;

 if (VAR_14->features & VAR_8)
  FUNC_0(VAR_3, VAR_16->keybit);

 if (VAR_14->features & VAR_5)
  FUNC_0(VAR_1, VAR_16->keybit);

 if (VAR_14->features & VAR_9)
  FUNC_0(VAR_4, VAR_16->keybit);

 if (VAR_14->features & VAR_7) {
  FUNC_0(VAR_2, VAR_16->keybit);
  FUNC_0(VAR_0, VAR_16->keybit);
 }

 if (VAR_14->features & VAR_10)
  FUNC_0(VAR_12, VAR_16->relbit);

 if (VAR_14->features & VAR_6)
  FUNC_0(VAR_11, VAR_16->relbit);

 switch (VAR_14->kind) {
  case 128:
   VAR_13->name = "Wheel Mouse";
   break;

  case 131:
   VAR_13->name = "MX Mouse";
   break;

  case 130:
   VAR_13->name = "TouchPad 3";
   break;

  case 129:
   VAR_13->name = "TrackMan";
   break;

  default:





   if (VAR_15)
    VAR_13->name = "Mouse";
   break;
 }
}
