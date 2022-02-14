
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int* evbit; int keybit; int absbit; int mscbit; int relbit; } ;
struct hid_usage {int dummy; } ;
struct hid_input {struct input_dev* input; } ;
struct hid_field {int dummy; } ;
struct hid_device {int product; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
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
 int VAR_29 ;


 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct input_dev*,int ,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_30, struct hid_input *VAR_31,
 struct hid_field *VAR_32, struct hid_usage *VAR_33, unsigned long **VAR_34,
        int *VAR_35)
{
 struct input_dev *VAR_36 = VAR_31->input;


 VAR_36->evbit[0] |= FUNC_0(VAR_25) | FUNC_0(VAR_24) | FUNC_0(VAR_27);

 FUNC_1(VAR_29, VAR_36->relbit);

 FUNC_1(VAR_21, VAR_36->keybit);
 FUNC_1(VAR_23, VAR_36->keybit);
 FUNC_1(VAR_17, VAR_36->keybit);
 FUNC_1(VAR_18, VAR_36->keybit);
 FUNC_1(VAR_14, VAR_36->keybit);
 FUNC_1(VAR_16, VAR_36->keybit);
 FUNC_1(VAR_15, VAR_36->keybit);


 VAR_36->evbit[0] |= FUNC_0(VAR_26);

 FUNC_1(VAR_28, VAR_36->mscbit);

 FUNC_1(VAR_5, VAR_36->keybit);
 FUNC_1(VAR_6, VAR_36->keybit);
 FUNC_1(VAR_19, VAR_36->keybit);


 FUNC_1(VAR_22, VAR_36->keybit);
 FUNC_1(VAR_20, VAR_36->keybit);

 switch (VAR_30->product) {
 case 129:
  FUNC_2(VAR_36, VAR_3, 0, 16704, 4, 0);
  FUNC_2(VAR_36, VAR_4, 0, 12064, 4, 0);
  FUNC_2(VAR_36, VAR_2, 0, 511, 0, 0);
  FUNC_2(VAR_36, VAR_0, 0, 32, 0, 0);
  break;
 case 128:
  FUNC_1(VAR_1, VAR_36->absbit);
  FUNC_1(VAR_7, VAR_36->keybit);
  FUNC_1(VAR_8, VAR_36->keybit);
  FUNC_1(VAR_9, VAR_36->keybit);
  FUNC_1(VAR_10, VAR_36->keybit);
  FUNC_1(VAR_11, VAR_36->keybit);
  FUNC_1(VAR_12, VAR_36->keybit);
  FUNC_1(VAR_13, VAR_36->keybit);
  FUNC_2(VAR_36, VAR_3, 0, 40640, 4, 0);
  FUNC_2(VAR_36, VAR_4, 0, 25400, 4, 0);
  FUNC_2(VAR_36, VAR_2, 0, 2047, 0, 0);
  FUNC_2(VAR_36, VAR_0, 0, 63, 0, 0);
  break;
 }

 return 0;
}
