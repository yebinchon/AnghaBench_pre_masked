
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
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_35, struct hid_input *VAR_36,
  struct hid_field *VAR_37, struct hid_usage *VAR_38,
  unsigned long **VAR_39, int *VAR_40)
{
 if ((VAR_38->hid & VAR_2) != VAR_0)
  return 0;

 switch (VAR_38->hid & VAR_1) {

 case 0x004: FUNC_0(VAR_32); break;
 case 0x006: FUNC_0(VAR_27); break;
 case 0x008: FUNC_0(VAR_6); break;
 case 0x00c: FUNC_0(VAR_28); break;
 case 0x00e: FUNC_0(VAR_25); break;
 case 0x00f: FUNC_0(VAR_9); break;
 case 0x010: FUNC_0(VAR_10); break;
 case 0x011: FUNC_0(VAR_8); break;
 case 0x013: FUNC_0(VAR_24); break;
 case 0x017: FUNC_0(VAR_21); break;
 case 0x019: FUNC_0(VAR_7); break;
 case 0x01d: FUNC_0(VAR_29); break;
 case 0x01e: FUNC_0(VAR_12); break;
 case 0x01f: FUNC_0(VAR_13); break;
 case 0x020: FUNC_0(VAR_14); break;
 case 0x021: FUNC_0(VAR_15); break;
 case 0x022: FUNC_0(VAR_16); break;
 case 0x023: FUNC_0(VAR_17); break;
 case 0x024: FUNC_0(VAR_18); break;
 case 0x025: FUNC_0(VAR_19); break;
 case 0x026: FUNC_0(VAR_20); break;
 case 0x027: FUNC_0(VAR_11); break;
 case 0x028: FUNC_0(VAR_22); break;
 case 0x029: FUNC_0(VAR_3); break;
 case 0x02b: FUNC_0(VAR_31); break;

 case 0x03f: FUNC_0(VAR_23); break;
 case 0x04a: FUNC_0(VAR_26); break;
 case 0x04b: FUNC_0(VAR_5); break;
 case 0x04d: FUNC_0(VAR_30); break;
 case 0x04e: FUNC_0(VAR_4); break;

 case 0x051: FUNC_0(VAR_33); break;

 case 0x052: FUNC_0(VAR_34); break;


 case 0x0e0:
 case 0x0e1:
 case 0x0e2:
 case 0x0e3:
 case 0x0e4:
 case 0x0e5:
 case 0x0e6:
 case 0x0e7:
 default:
  return -1;
 }
 return 1;
}
