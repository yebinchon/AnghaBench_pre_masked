
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct hid_usage {int hid; int type; } ;
struct hid_field {TYPE_1__* hidinput; } ;
struct hid_device {int claimed; } ;
typedef int __s32 ;
struct TYPE_2__ {struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct input_dev*,int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_8, struct hid_field *VAR_9,
  struct hid_usage *VAR_10, __s32 VAR_11)
{
 unsigned long VAR_12 = (unsigned long)FUNC_0(VAR_8);

 if (!(VAR_8->claimed & VAR_0) || !VAR_9->hidinput ||
   !VAR_10->type)
  return 0;


 if (VAR_12 & VAR_7 && VAR_10->hid == (VAR_1 | 0xff05)) {
  struct input_dev *VAR_13 = VAR_9->hidinput->input;
  static unsigned int VAR_14 = 0;
  unsigned int VAR_15 = 0;
  switch (VAR_11) {
  case 0x01: VAR_15 = VAR_2; break;
  case 0x02: VAR_15 = VAR_3; break;
  case 0x04: VAR_15 = VAR_4; break;
  case 0x08: VAR_15 = VAR_5; break;
  case 0x10: VAR_15 = VAR_6; break;
  }
  if (VAR_15) {
   FUNC_1(VAR_13, VAR_10->type, VAR_15, 1);
   VAR_14 = VAR_15;
  } else
   FUNC_1(VAR_13, VAR_10->type, VAR_14, 0);

  return 1;
 }

 return 0;
}
