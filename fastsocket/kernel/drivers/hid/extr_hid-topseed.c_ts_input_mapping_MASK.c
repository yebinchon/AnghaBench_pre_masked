
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

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_15, struct hid_input *VAR_16,
  struct hid_field *VAR_17, struct hid_usage *VAR_18,
  unsigned long **VAR_19, int *VAR_20)
{
 if ((VAR_18->hid & VAR_1) != 0x0ffbc0000)
  return 0;

 switch (VAR_18->hid & VAR_0) {
        case 0x00d: FUNC_0(VAR_7); break;
        case 0x024: FUNC_0(VAR_9); break;
        case 0x025: FUNC_0(VAR_13); break;
        case 0x048: FUNC_0(VAR_10); break;
        case 0x047: FUNC_0(VAR_6); break;
        case 0x049: FUNC_0(VAR_14); break;
        case 0x04a: FUNC_0(VAR_4); break;
        case 0x04b: FUNC_0(VAR_2); break;
        case 0x04c: FUNC_0(VAR_8); break;
        case 0x04d: FUNC_0(VAR_11); break;
        case 0x031: FUNC_0(VAR_3); break;
        case 0x032: FUNC_0(VAR_12); break;
        case 0x033: FUNC_0(VAR_5); break;
 default:
  return 0;
 }

 return 1;
}
