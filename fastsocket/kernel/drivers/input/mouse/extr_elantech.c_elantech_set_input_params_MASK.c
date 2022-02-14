
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct elantech_data* private; struct input_dev* dev; } ;
struct input_dev {int keybit; int evbit; } ;
struct elantech_data {int hw_version; int fw_version_maj; int capabilities; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct input_dev*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct psmouse *VAR_29)
{
 struct input_dev *VAR_30 = VAR_29->dev;
 struct elantech_data *VAR_31 = VAR_29->private;

 FUNC_0(VAR_28, VAR_30->evbit);
 FUNC_0(VAR_27, VAR_30->evbit);

 FUNC_0(VAR_8, VAR_30->keybit);
 FUNC_0(VAR_9, VAR_30->keybit);

 FUNC_0(VAR_13, VAR_30->keybit);
 FUNC_0(VAR_11, VAR_30->keybit);
 FUNC_0(VAR_10, VAR_30->keybit);
 FUNC_0(VAR_12, VAR_30->keybit);

 switch (VAR_31->hw_version) {
 case 1:

  if ((VAR_31->fw_version_maj == 0x01) &&
      (VAR_31->capabilities & VAR_18)) {
   FUNC_0(VAR_7, VAR_30->keybit);
   FUNC_0(VAR_6, VAR_30->keybit);
  }
  FUNC_1(VAR_30, VAR_4, VAR_21, VAR_19, 0, 0);
  FUNC_1(VAR_30, VAR_5, VAR_25, VAR_23, 0, 0);
  break;

 case 2:
  FUNC_1(VAR_30, VAR_4, VAR_22, VAR_20, 0, 0);
  FUNC_1(VAR_30, VAR_5, VAR_26, VAR_24, 0, 0);
  FUNC_1(VAR_30, VAR_0, VAR_15, VAR_14, 0, 0);
  FUNC_1(VAR_30, VAR_1, VAR_17, VAR_16, 0, 0);
  FUNC_1(VAR_30, VAR_2, VAR_15, VAR_14, 0, 0);
  FUNC_1(VAR_30, VAR_3, VAR_17, VAR_16, 0, 0);
  break;
 }
}
