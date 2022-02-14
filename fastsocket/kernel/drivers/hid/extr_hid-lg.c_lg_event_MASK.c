
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_usage {scalar_t__ code; int type; } ;
struct hid_field {TYPE_1__* hidinput; } ;
struct hid_device {int dummy; } ;
typedef int __s32 ;
struct TYPE_2__ {int input; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct hid_device*) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_2, struct hid_field *VAR_3,
  struct hid_usage *VAR_4, __s32 VAR_5)
{
 unsigned long VAR_6 = (unsigned long)FUNC_0(VAR_2);

 if ((VAR_6 & VAR_0) && VAR_4->code == VAR_1) {
  FUNC_1(VAR_3->hidinput->input, VAR_4->type, VAR_4->code,
    -VAR_5);
  return 1;
 }

 return 0;
}
