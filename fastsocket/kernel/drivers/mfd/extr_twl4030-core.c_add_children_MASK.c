
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twl4030_platform_data {int vaux4; int vaux3; int vaux1; int vsim; int vmmc2; int vpll2; int vaux2; int vdac; int vmmc1; scalar_t__ irq_base; int * usb; int * madc; int * keypad; int * gpio; int * bci; } ;
struct TYPE_2__ {int valid_modes_mask; int valid_ops_mask; } ;
struct regulator_init_data {TYPE_1__ constraints; } ;
struct regulator_consumer_supply {char* supply; struct device* dev; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
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
 int VAR_17 ;
 unsigned long VAR_18 ;
 struct device* FUNC_2 (int,char*,int *,int,int,scalar_t__,scalar_t__) ;
 struct device* FUNC_3 (int ,int ) ;
 struct device* FUNC_4 (int ,struct regulator_init_data*,struct regulator_consumer_supply*,int) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 () ;

__attribute__((used)) static int
FUNC_14(struct twl4030_platform_data *VAR_19, unsigned long VAR_20)
{
 struct device *VAR_21;

 if (FUNC_5() && VAR_19->bci && !(VAR_20 & VAR_4)) {
  VAR_21 = FUNC_2(3, "twl4030_bci",
    VAR_19->bci, sizeof(*VAR_19->bci),
    0,

    VAR_19->irq_base + 8 + 1, VAR_19->irq_base + 2);
  if (FUNC_0(VAR_21))
   return FUNC_1(VAR_21);
 }

 if (FUNC_6() && VAR_19->gpio) {
  VAR_21 = FUNC_2(1, "twl4030_gpio",
    VAR_19->gpio, sizeof(*VAR_19->gpio),
    0, VAR_19->irq_base + 0, 0);
  if (FUNC_0(VAR_21))
   return FUNC_1(VAR_21);
 }

 if (FUNC_7() && VAR_19->keypad) {
  VAR_21 = FUNC_2(2, "twl4030_keypad",
    VAR_19->keypad, sizeof(*VAR_19->keypad),
    1, VAR_19->irq_base + 1, 0);
  if (FUNC_0(VAR_21))
   return FUNC_1(VAR_21);
 }

 if (FUNC_8() && VAR_19->madc) {
  VAR_21 = FUNC_2(2, "twl4030_madc",
    VAR_19->madc, sizeof(*VAR_19->madc),
    1, VAR_19->irq_base + 3, 0);
  if (FUNC_0(VAR_21))
   return FUNC_1(VAR_21);
 }

 if (FUNC_11()) {







  VAR_21 = FUNC_2(3, "twl4030_rtc",
    ((void*)0), 0,
    1, VAR_19->irq_base + 8 + 3, 0);
  if (FUNC_0(VAR_21))
   return FUNC_1(VAR_21);
 }

 if (FUNC_12() && VAR_19->usb) {

  static struct regulator_consumer_supply VAR_22 = {
   .supply = "usb1v5",
  };
  static struct regulator_consumer_supply VAR_23 = {
   .supply = "usb1v8",
  };
  static struct regulator_consumer_supply VAR_24 = {
   .supply = "usb3v1",
  };


  if (FUNC_10()) {

   struct regulator_init_data VAR_25 = {
    .constraints.valid_modes_mask =
     VAR_2
     | VAR_3,
    .constraints.valid_ops_mask =
     VAR_0
     | VAR_1,
   };

   VAR_21 = FUNC_4(VAR_15,
            &VAR_25, &VAR_22, 1);
   if (FUNC_0(VAR_21))
    return FUNC_1(VAR_21);

   VAR_21 = FUNC_4(VAR_16,
            &VAR_25, &VAR_23, 1);
   if (FUNC_0(VAR_21))
    return FUNC_1(VAR_21);

   VAR_21 = FUNC_4(VAR_17,
            &VAR_25, &VAR_24, 1);
   if (FUNC_0(VAR_21))
    return FUNC_1(VAR_21);

  }

  VAR_21 = FUNC_2(0, "twl4030_usb",
    VAR_19->usb, sizeof(*VAR_19->usb),
    1,

    VAR_19->irq_base + 8 + 2, VAR_19->irq_base + 4);

  if (FUNC_0(VAR_21))
   return FUNC_1(VAR_21);


  if (FUNC_10() && VAR_21) {
   VAR_22 = VAR_21;
   VAR_23 = VAR_21;
   VAR_24 = VAR_21;
  }
 }

 if (FUNC_13()) {
  VAR_21 = FUNC_2(0, "twl4030_wdt", ((void*)0), 0, 0, 0, 0);
  if (FUNC_0(VAR_21))
   return FUNC_1(VAR_21);
 }

 if (FUNC_9()) {
  VAR_21 = FUNC_2(1, "twl4030_pwrbutton",
    ((void*)0), 0, 1, VAR_19->irq_base + 8 + 0, 0);
  if (FUNC_0(VAR_21))
   return FUNC_1(VAR_21);
 }

 if (FUNC_10()) {






  VAR_21 = FUNC_3(VAR_11, VAR_19->vmmc1);
  if (FUNC_0(VAR_21))
   return FUNC_1(VAR_21);

  VAR_21 = FUNC_3(VAR_10, VAR_19->vdac);
  if (FUNC_0(VAR_21))
   return FUNC_1(VAR_21);

  VAR_21 = FUNC_3((VAR_20 & VAR_18)
     ? VAR_7
     : VAR_6,
    VAR_19->vaux2);
  if (FUNC_0(VAR_21))
   return FUNC_1(VAR_21);
 }


 if (FUNC_10() && !(VAR_20 & VAR_4)) {
  VAR_21 = FUNC_3(VAR_13, VAR_19->vpll2);
  if (FUNC_0(VAR_21))
   return FUNC_1(VAR_21);

  VAR_21 = FUNC_3(VAR_12, VAR_19->vmmc2);
  if (FUNC_0(VAR_21))
   return FUNC_1(VAR_21);

  VAR_21 = FUNC_3(VAR_14, VAR_19->vsim);
  if (FUNC_0(VAR_21))
   return FUNC_1(VAR_21);

  VAR_21 = FUNC_3(VAR_5, VAR_19->vaux1);
  if (FUNC_0(VAR_21))
   return FUNC_1(VAR_21);

  VAR_21 = FUNC_3(VAR_8, VAR_19->vaux3);
  if (FUNC_0(VAR_21))
   return FUNC_1(VAR_21);

  VAR_21 = FUNC_3(VAR_9, VAR_19->vaux4);
  if (FUNC_0(VAR_21))
   return FUNC_1(VAR_21);
 }

 return 0;
}
