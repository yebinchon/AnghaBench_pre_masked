
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,int,int) ;
 scalar_t__ FUNC_1 (struct bt_state*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

err_t FUNC_9(void *VAR_10,struct hci_pcb *VAR_11,u8_t VAR_12,u8_t VAR_13,u8_t VAR_14)
{
 err_t VAR_15 = VAR_1;
 u8_t VAR_16[] = {0x00, 0x04,0x48};
 struct bt_state *VAR_17 = (struct bt_state*)VAR_10;

 FUNC_0("bte_hci_initsub_complete(%02x,%02x)\n",VAR_12,VAR_13);
 switch(VAR_12) {
  case 128:
   if(VAR_13==VAR_4) {
    if(VAR_14==VAR_2) {
     FUNC_6(0x01);
    } else
     VAR_15 = VAR_0;
   } else if(VAR_13==VAR_7) {
    if(VAR_14==VAR_2) {
     FUNC_4(0x01);
    } else
     VAR_15 = VAR_0;
   } else if(VAR_13==VAR_5) {
    if(VAR_14==VAR_2) {
     FUNC_3(VAR_16);
    } else
     VAR_15 = VAR_0;
   } else if(VAR_13==VAR_3) {
    if(VAR_14==VAR_2) {
     FUNC_7(0x8000);
    } else
     VAR_15 = VAR_0;
   } else if(VAR_13==VAR_8) {
    if(VAR_14==VAR_2) {
     FUNC_5((u8_t*)"Wii",4);
    } else
     VAR_15 = VAR_0;
   } else if(VAR_13==VAR_6) {
    if(VAR_14==VAR_2) {
     FUNC_8(0x02);
    } else
     VAR_15 = VAR_0;
   } else if(VAR_13==VAR_9) {
    if(VAR_14==VAR_2) {
     FUNC_2(((void*)0));
     return FUNC_1(VAR_17,VAR_1);
    } else
     VAR_15 = VAR_0;
   }
   break;
  default:
   FUNC_0("Unknown command complete event. OGF = 0x%x OCF = 0x%x\n", VAR_12, VAR_13);
   VAR_15 = VAR_0;
   break;

 }

 if(VAR_15!=VAR_1) FUNC_1(VAR_17,VAR_15);
 return VAR_15;
}
