
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct hci_pcb {int dummy; } ;
struct bt_state {int dummy; } ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int,int,...) ;
 int FUNC_1 (struct bt_state*,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int const,int ,int) ;

err_t FUNC_4(void *VAR_9,struct hci_pcb *VAR_10,u8_t VAR_11,u8_t VAR_12,u8_t VAR_13)
{
 err_t VAR_14 = VAR_1;
 struct bt_state *VAR_15 = (struct bt_state*)VAR_9;

 FUNC_0("bte_hci_apply_patch_complete(%02x,%02x,%02x)\n",VAR_11,VAR_12,VAR_13);
 switch(VAR_11) {
  case 128:
   if(VAR_12==VAR_5) {
    if(VAR_13==VAR_2) {
     VAR_14 = FUNC_3(VAR_3,128,VAR_7,184);
    } else
     VAR_14 = VAR_0;
   } else if(VAR_12==VAR_3) {
    if(VAR_13==VAR_2) {
     FUNC_2(VAR_6);
     VAR_14 = FUNC_3(VAR_4,128,VAR_8,92);
    } else
     VAR_14 = VAR_0;
   }
   break;
  default:
   FUNC_0("Unknown command complete event. OGF = 0x%x OCF = 0x%x\n", VAR_11, VAR_12);
   VAR_14 = VAR_0;
   break;
 }

 if(VAR_14!=VAR_1) FUNC_1(VAR_15,VAR_14);
 return VAR_14;
}
