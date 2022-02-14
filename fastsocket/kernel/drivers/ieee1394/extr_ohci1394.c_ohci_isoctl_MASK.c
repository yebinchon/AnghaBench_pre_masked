
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hpsb_iso_packet_info {int dummy; } ;
struct hpsb_iso {int dummy; } ;
typedef enum isoctl_cmd { ____Placeholder_isoctl_cmd } isoctl_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct hpsb_iso*,unsigned long,int) ;
 int FUNC_2 (struct hpsb_iso*) ;
 int FUNC_3 (struct hpsb_iso*,struct hpsb_iso_packet_info*) ;
 int FUNC_4 (struct hpsb_iso*,int ) ;
 int FUNC_5 (struct hpsb_iso*) ;
 int FUNC_6 (struct hpsb_iso*,int,int,int) ;
 int FUNC_7 (struct hpsb_iso*) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (struct hpsb_iso*) ;
 int FUNC_10 (struct hpsb_iso*,struct hpsb_iso_packet_info*) ;
 int FUNC_11 (struct hpsb_iso*) ;
 int FUNC_12 (struct hpsb_iso*,unsigned long) ;
 int FUNC_13 (struct hpsb_iso*) ;

__attribute__((used)) static int FUNC_14(struct hpsb_iso *VAR_2, enum isoctl_cmd VAR_3, unsigned long VAR_4)
{

 switch(VAR_3) {
 case 132:
  return FUNC_9(VAR_2);
 case 129:
  return FUNC_12(VAR_2, VAR_4);
 case 128:
  FUNC_13(VAR_2);
  return 0;
 case 131:
  return FUNC_10(VAR_2, (struct hpsb_iso_packet_info*) VAR_4);
 case 130:
  FUNC_11(VAR_2);
  return 0;

 case 140:
  return FUNC_2(VAR_2);
 case 135: {
  int *VAR_5 = (int*) VAR_4;
  return FUNC_6(VAR_2, VAR_5[0], VAR_5[1], VAR_5[2]);
 }
 case 134:
  FUNC_7(VAR_2);
  return 0;
 case 138:
  FUNC_3(VAR_2, (struct hpsb_iso_packet_info*) VAR_4);
  return 0;
 case 141:
  FUNC_8((unsigned long) VAR_2);
  return 0;
 case 136:
  FUNC_5(VAR_2);
  return 0;
 case 139:
  FUNC_1(VAR_2, VAR_4, 1);
  return 0;
 case 133:
  FUNC_1(VAR_2, VAR_4, 0);
  return 0;
 case 137:
  FUNC_4(VAR_2, *((u64*) VAR_4));
  return 0;

 default:
  FUNC_0(VAR_1, "ohci_isoctl cmd %d not implemented yet",
   VAR_3);
  break;
 }
 return -VAR_0;
}
