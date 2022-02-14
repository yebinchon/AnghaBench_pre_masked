
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int keybit; int evbit; } ;
struct hid_usage {int hid; } ;
struct hid_input {struct input_dev* input; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hid_input *VAR_10, struct hid_usage *VAR_11,
  unsigned long **VAR_12, int *VAR_13)
{
 struct input_dev *VAR_14 = VAR_10->input;

 switch (VAR_11->hid & VAR_1) {
 case 0xfd06: FUNC_0(VAR_2); break;
 case 0xfd07: FUNC_0(VAR_9); break;
 case 0xff05:
  FUNC_1(VAR_0, VAR_14->evbit);
  FUNC_0(VAR_3);
  FUNC_1(VAR_4, VAR_14->keybit);
  FUNC_1(VAR_5, VAR_14->keybit);
  FUNC_1(VAR_6, VAR_14->keybit);
  FUNC_1(VAR_7, VAR_14->keybit);
  FUNC_1(VAR_8, VAR_14->keybit);
 default:
  return 0;
 }
 return 1;
}
