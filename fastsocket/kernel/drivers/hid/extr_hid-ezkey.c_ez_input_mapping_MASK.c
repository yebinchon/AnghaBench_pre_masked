
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int hid; } ;
struct hid_input {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_6, struct hid_input *VAR_7,
  struct hid_field *VAR_8, struct hid_usage *VAR_9,
  unsigned long **VAR_10, int *VAR_11)
{
 if ((VAR_9->hid & VAR_3) != VAR_1)
  return 0;

 switch (VAR_9->hid & VAR_2) {
 case 0x230: FUNC_0(VAR_0); break;
 case 0x231: FUNC_1(VAR_5); break;





 case 0x232: FUNC_1(VAR_4); break;
 default:
  return 0;
 }
 return 1;
}
