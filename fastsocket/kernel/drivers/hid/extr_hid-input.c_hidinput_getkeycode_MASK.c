
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct hid_usage {int code; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 struct hid_usage* FUNC_0 (struct hid_device*,int,int ) ;
 struct hid_device* FUNC_1 (struct input_dev*) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_1, int VAR_2,
    int *VAR_3)
{
 struct hid_device *VAR_4 = FUNC_1(VAR_1);
 struct hid_usage *VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_2, 0);
 if (VAR_5) {
  *VAR_3 = VAR_5->code;
  return 0;
 }
 return -VAR_0;
}
