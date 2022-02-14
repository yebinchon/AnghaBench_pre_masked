
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_therm_priv {TYPE_1__* fan; } ;
struct nouveau_therm {int dummy; } ;
struct nouveau_gpio {int (* find ) (struct nouveau_gpio*,int ,int ,int,struct dcb_gpio_func*) ;} ;
struct nouveau_bios {int dummy; } ;
struct dcb_gpio_func {int* log; int func; } ;
struct TYPE_2__ {int bios; int perf; int lock; int alarm; struct nouveau_therm* parent; struct dcb_gpio_func tach; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 struct nouveau_bios* FUNC_1 (struct nouveau_therm*) ;
 int VAR_5 ;
 int FUNC_2 (struct nouveau_therm*) ;
 int FUNC_3 (struct nouveau_therm*,struct dcb_gpio_func*) ;
 int FUNC_4 (struct nouveau_therm*,struct dcb_gpio_func*) ;
 struct nouveau_gpio* FUNC_5 (struct nouveau_therm*) ;
 int FUNC_6 (struct nouveau_therm*) ;
 int FUNC_7 (struct nouveau_therm*) ;
 int FUNC_8 (struct nouveau_therm*,char*) ;
 int FUNC_9 (struct nouveau_therm*,char*) ;
 int FUNC_10 (struct nouveau_therm*,char*,int ) ;
 int FUNC_11 (struct nouveau_bios*,int *) ;
 scalar_t__ FUNC_12 (struct nouveau_bios*,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct nouveau_gpio*,int ,int ,int,struct dcb_gpio_func*) ;
 int FUNC_15 (struct nouveau_gpio*,int ,int ,int,struct dcb_gpio_func*) ;

int
FUNC_16(struct nouveau_therm *VAR_6)
{
 struct nouveau_therm_priv *VAR_7 = (void *)VAR_6;
 struct nouveau_gpio *VAR_8 = FUNC_5(VAR_6);
 struct nouveau_bios *VAR_9 = FUNC_1(VAR_6);
 struct dcb_gpio_func VAR_10;
 int VAR_11;


 VAR_11 = VAR_8->find(VAR_8, 0, VAR_0, 0xff, &VAR_10);
 if (VAR_11 == 0) {
  if (VAR_10.log[0] & VAR_2) {
   FUNC_8(VAR_6, "GPIO_FAN is in input mode\n");
   VAR_11 = -VAR_4;
  } else {
   VAR_11 = FUNC_3(VAR_6, &VAR_10);
   if (VAR_11 != 0)
    VAR_11 = FUNC_4(VAR_6, &VAR_10);
  }
 }


 if (VAR_11 != 0) {
  VAR_11 = FUNC_2(VAR_6);
  if (VAR_11)
   return VAR_11;
 }

 FUNC_10(VAR_6, "FAN control: %s\n", VAR_7->fan->type);


 VAR_11 = VAR_8->find(VAR_8, 0, VAR_1, 0xff, &VAR_7->fan->tach);
 if (VAR_11)
  VAR_7->fan->tach.func = VAR_3;


 VAR_7->fan->parent = VAR_6;
 FUNC_0(&VAR_7->fan->alarm, VAR_5);
 FUNC_13(&VAR_7->fan->lock);


 FUNC_7(VAR_6);
 FUNC_11(VAR_9, &VAR_7->fan->perf);
 if (FUNC_12(VAR_9, &VAR_7->fan->bios))
  FUNC_9(VAR_6, "parsing the thermal table failed\n");
 FUNC_6(VAR_6);
 return 0;
}
