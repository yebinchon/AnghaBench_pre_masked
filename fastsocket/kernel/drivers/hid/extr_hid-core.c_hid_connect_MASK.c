
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidraw {int minor; } ;
struct hid_device {int bus; int claimed; int minor; unsigned int maxcollection; int version; int phys; int name; int dev; struct hid_collection* collection; scalar_t__ hidraw; int (* ff_init ) (struct hid_device*) ;int (* hiddev_connect ) (struct hid_device*,unsigned int) ;} ;
struct hid_collection {scalar_t__ type; int usage; } ;


 int FUNC_0 (char const**) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,char*,char const*,int,int,char const*,int ,int ) ;
 scalar_t__ FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct hid_device*,unsigned int) ;
 int FUNC_5 (struct hid_device*) ;
 scalar_t__ FUNC_6 (char*,char*,...) ;
 int FUNC_7 (struct hid_device*,unsigned int) ;
 int FUNC_8 (struct hid_device*) ;

int FUNC_9(struct hid_device *VAR_13, unsigned int VAR_14)
{
 static const char *VAR_15[] = { "Device", "Pointer", "Mouse", "Device",
  "Joystick", "Gamepad", "Keyboard", "Keypad",
  "Multi-Axis Controller"
 };
 const char *VAR_16, *VAR_17;
 char VAR_18[64];
 unsigned int VAR_19;
 int VAR_20;

 if (VAR_13->bus != 128)
  VAR_14 &= ~VAR_6;
 if (FUNC_3(VAR_13))
  VAR_14 |= VAR_7;

 if ((VAR_14 & VAR_8) && !FUNC_4(VAR_13,
    VAR_14 & VAR_9))
  VAR_13->claimed |= VAR_3;
 if ((VAR_14 & VAR_6) && VAR_13->hiddev_connect &&
   !VAR_13->hiddev_connect(VAR_13,
    VAR_14 & VAR_7))
  VAR_13->claimed |= VAR_1;
 if ((VAR_14 & VAR_10) && !FUNC_5(VAR_13))
  VAR_13->claimed |= VAR_2;

 if (!VAR_13->claimed) {
  FUNC_1(&VAR_13->dev, "claimed by neither input, hiddev nor "
    "hidraw\n");
  return -VAR_0;
 }

 if ((VAR_13->claimed & VAR_3) &&
   (VAR_14 & VAR_5) && VAR_13->ff_init)
  VAR_13->ff_init(VAR_13);

 VAR_20 = 0;
 if (VAR_13->claimed & VAR_3)
  VAR_20 += FUNC_6(VAR_18 + VAR_20, "input");
 if (VAR_13->claimed & VAR_1)
  VAR_20 += FUNC_6(VAR_18 + VAR_20, "%shiddev%d", VAR_20 ? "," : "",
    VAR_13->minor);
 if (VAR_13->claimed & VAR_2)
  VAR_20 += FUNC_6(VAR_18 + VAR_20, "%shidraw%d", VAR_20 ? "," : "",
    ((struct hidraw *)VAR_13->hidraw)->minor);

 VAR_16 = "Device";
 for (VAR_19 = 0; VAR_19 < VAR_13->maxcollection; VAR_19++) {
  struct hid_collection *VAR_21 = &VAR_13->collection[VAR_19];
  if (VAR_21->type == VAR_4 &&
     (VAR_21->usage & VAR_12) == VAR_11 &&
     (VAR_21->usage & 0xffff) < FUNC_0(VAR_15)) {
   VAR_16 = VAR_15[VAR_21->usage & 0xffff];
   break;
  }
 }

 switch (VAR_13->bus) {
 case 128:
  VAR_17 = "USB";
  break;
 case 129:
  VAR_17 = "BLUETOOTH";
  break;
 default:
  VAR_17 = "<UNKNOWN>";
 }

 FUNC_2(&VAR_13->dev, "%s: %s HID v%x.%02x %s [%s] on %s\n",
   VAR_18, VAR_17, VAR_13->version >> 8, VAR_13->version & 0xff,
   VAR_16, VAR_13->name, VAR_13->phys);

 return 0;
}
