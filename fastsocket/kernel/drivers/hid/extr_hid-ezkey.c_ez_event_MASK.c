
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct hid_usage {scalar_t__ type; scalar_t__ code; } ;
struct hid_field {TYPE_1__* hidinput; } ;
struct hid_device {int claimed; } ;
typedef int __s32 ;
struct TYPE_2__ {struct input_dev* input; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct input_dev*,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_4, struct hid_field *VAR_5,
  struct hid_usage *VAR_6, __s32 VAR_7)
{
 if (!(VAR_4->claimed & VAR_1) || !VAR_5->hidinput ||
   !VAR_6->type)
  return 0;


 if (VAR_6->type == VAR_0 && VAR_6->code == VAR_2) {
  struct input_dev *VAR_8 = VAR_5->hidinput->input;
  FUNC_0(VAR_8, VAR_6->type, VAR_3, -VAR_7);
  return 1;
 }

 return 0;
}
