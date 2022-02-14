
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_usage {int hid; } ;
struct hid_input {TYPE_1__* input; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;
struct TYPE_2__ {int evbit; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_15, struct hid_input *VAR_16,
  struct hid_field *VAR_17, struct hid_usage *VAR_18,
  unsigned long **VAR_19, int *VAR_20)
{
 if ((VAR_18->hid & VAR_14) != VAR_12)
  return 0;

 FUNC_1(VAR_11, VAR_16->input->evbit);
 switch (VAR_18->hid & VAR_13) {
 case 0xff01: FUNC_0(VAR_0); break;
 case 0xff02: FUNC_0(VAR_1); break;
 case 0xff03: FUNC_0(VAR_2); break;
 case 0xff04: FUNC_0(VAR_3); break;
 case 0xff05: FUNC_0(VAR_4); break;
 case 0xff06: FUNC_0(VAR_5); break;
 case 0xff07: FUNC_0(VAR_6); break;
 case 0xff08: FUNC_0(VAR_7); break;
 case 0xff09: FUNC_0(VAR_8); break;
 case 0xff0a: FUNC_0(VAR_9); break;
 case 0xff0b: FUNC_0(VAR_10); break;
 default:
  return 0;
 }
 return 1;
}
