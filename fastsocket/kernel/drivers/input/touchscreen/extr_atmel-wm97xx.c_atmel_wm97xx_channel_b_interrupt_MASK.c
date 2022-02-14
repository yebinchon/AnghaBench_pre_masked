
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wm97xx {int input_dev; TYPE_1__* touch_dev; } ;
struct atmel_wm97xx {int x; int y; struct wm97xx* wm; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


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
 int VAR_14 ;
 int FUNC_0 (struct atmel_wm97xx*,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_16, void *VAR_17)
{
 struct atmel_wm97xx *VAR_18 = VAR_17;
 struct wm97xx *VAR_19 = VAR_18->wm;
 int VAR_20 = FUNC_0(VAR_18, VAR_7);
 irqreturn_t VAR_21 = VAR_9;

 if (VAR_20 & VAR_3) {
  FUNC_1(&VAR_19->touch_dev->dev, "AC97C overrun\n");
  FUNC_0(VAR_18, VAR_6);
  VAR_21 = VAR_8;
 } else if (VAR_20 & VAR_4) {
  u16 VAR_22;
  u16 VAR_23;
  u16 VAR_24;
  u16 VAR_25;

  VAR_22 = FUNC_0(VAR_18, VAR_6);
  VAR_23 = VAR_22 & 0x0fff;
  VAR_24 = VAR_22 & VAR_13;
  VAR_25 = (VAR_22 & VAR_14) >> 8;

  if (VAR_24 == VAR_11)
   VAR_18->x = VAR_23;
  if (VAR_24 == VAR_12)
   VAR_18->y = VAR_23;

  if (!VAR_15 && VAR_24 == VAR_12) {
   FUNC_2(VAR_19->input_dev, VAR_1, VAR_18->x);
   FUNC_2(VAR_19->input_dev, VAR_2, VAR_18->y);
   FUNC_3(VAR_19->input_dev, VAR_5, VAR_25);
   FUNC_4(VAR_19->input_dev);
  } else if (VAR_15 && VAR_24 == VAR_10) {
   FUNC_2(VAR_19->input_dev, VAR_1, VAR_18->x);
   FUNC_2(VAR_19->input_dev, VAR_2, VAR_18->y);
   FUNC_2(VAR_19->input_dev, VAR_0, VAR_23);
   FUNC_3(VAR_19->input_dev, VAR_5, VAR_23);
   FUNC_4(VAR_19->input_dev);
  }

  VAR_21 = VAR_8;
 }

 return VAR_21;
}
