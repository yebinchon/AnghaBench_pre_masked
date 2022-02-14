
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobj_uevent_env {int dummy; } ;
struct TYPE_2__ {int version; int product; int vendor; int bustype; } ;
struct input_dev {int swbit; int evbit; int ffbit; int sndbit; int ledbit; int mscbit; int absbit; int relbit; int keybit; scalar_t__ uniq; scalar_t__ phys; scalar_t__ name; TYPE_1__ id; } ;
struct device {int dummy; } ;


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
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (char*,scalar_t__,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 struct input_dev* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_17, struct kobj_uevent_env *VAR_18)
{
 struct input_dev *VAR_19 = FUNC_4(VAR_17);

 FUNC_2("PRODUCT=%x/%x/%x/%x",
    VAR_19->id.bustype, VAR_19->id.vendor,
    VAR_19->id.product, VAR_19->id.version);
 if (VAR_19->name)
  FUNC_2("NAME=\"%s\"", VAR_19->name);
 if (VAR_19->phys)
  FUNC_2("PHYS=\"%s\"", VAR_19->phys);
 if (VAR_19->uniq)
  FUNC_2("UNIQ=\"%s\"", VAR_19->uniq);

 FUNC_0("EV=", VAR_19->evbit, VAR_5);
 if (FUNC_3(VAR_3, VAR_19->evbit))
  FUNC_0("KEY=", VAR_19->keybit, VAR_11);
 if (FUNC_3(VAR_7, VAR_19->evbit))
  FUNC_0("REL=", VAR_19->relbit, VAR_14);
 if (FUNC_3(VAR_1, VAR_19->evbit))
  FUNC_0("ABS=", VAR_19->absbit, VAR_0);
 if (FUNC_3(VAR_6, VAR_19->evbit))
  FUNC_0("MSC=", VAR_19->mscbit, VAR_13);
 if (FUNC_3(VAR_4, VAR_19->evbit))
  FUNC_0("LED=", VAR_19->ledbit, VAR_12);
 if (FUNC_3(VAR_8, VAR_19->evbit))
  FUNC_0("SND=", VAR_19->sndbit, VAR_15);
 if (FUNC_3(VAR_2, VAR_19->evbit))
  FUNC_0("FF=", VAR_19->ffbit, VAR_10);
 if (FUNC_3(VAR_9, VAR_19->evbit))
  FUNC_0("SW=", VAR_19->swbit, VAR_16);

 FUNC_1(VAR_19);

 return 0;
}
