
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct hci_pcb {int dummy; } ;
struct bt_state {int hci_inited; } ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int,int) ;
 scalar_t__ FUNC_1 (struct bt_state*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

err_t FUNC_7(void *VAR_8,struct hci_pcb *VAR_9,u8_t VAR_10,u8_t VAR_11,u8_t VAR_12)
{
 err_t VAR_13 = VAR_1;
 u8_t VAR_14[] = {0x04, 0x02,0x40};
 struct bt_state *VAR_15 = (struct bt_state*)VAR_8;

 FUNC_0("bte_hci_initcore_complete2(%02x,%02x)\n",VAR_10,VAR_11);
 switch(VAR_10) {
  case 128:
   if(VAR_11==VAR_4) {
    if(VAR_12==VAR_2) {
     FUNC_5(0x01);
    } else
     VAR_13 = VAR_0;
   } else if(VAR_11==VAR_6) {
    if(VAR_12==VAR_2) {
     FUNC_4(0x01);
    } else
     VAR_13 = VAR_0;
   } else if(VAR_11==VAR_5) {
    if(VAR_12==VAR_2) {
     FUNC_3(VAR_14);
    } else
     VAR_13 = VAR_0;
   } else if(VAR_11==VAR_3) {
    if(VAR_12==VAR_2) {
     FUNC_6(0x2000);
    } else
     VAR_13 = VAR_0;
   } else if(VAR_11==VAR_7) {
    if(VAR_12==VAR_2) {
     VAR_15->hci_inited = 1;
     FUNC_2(((void*)0));
     return FUNC_1(VAR_15,VAR_1);
    } else
     VAR_13 = VAR_0;
   }
   break;
  default:
   FUNC_0("Unknown command complete event. OGF = 0x%x OCF = 0x%x\n", VAR_10, VAR_11);
   VAR_13 = VAR_0;
   break;
 }

 if(VAR_13!=VAR_1) FUNC_1(VAR_15,VAR_13);
 return VAR_13;
}
