
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*,int,int,...) ;
 scalar_t__ FUNC_1 (struct bt_state*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int*) ;
 int FUNC_10 (int*,int) ;
 int FUNC_11 (int) ;

err_t FUNC_12(void *VAR_13,struct hci_pcb *VAR_14,u8_t VAR_15,u8_t VAR_16,u8_t VAR_17)
{
 err_t VAR_18 = VAR_1;
 u8_t VAR_19[] = {0x04, 0x02,0x40};
 struct bt_state *VAR_20 = (struct bt_state*)VAR_13;

 FUNC_0("bte_hci_patch_complete(%02x,%02x,%02x)\n",VAR_15,VAR_16,VAR_17);
 switch(VAR_15) {
  case 129:
   if(VAR_16==VAR_4) {
    if(VAR_17==VAR_8) {
     FUNC_9(VAR_19);
    } else
     VAR_18 = VAR_0;
   } else if(VAR_16==VAR_6) {
    if(VAR_17==VAR_8) {
     FUNC_4();
    } else
     VAR_18 = VAR_0;
   } else if(VAR_16==VAR_3) {
    if(VAR_17==VAR_8) {
     FUNC_6();
    } else
     VAR_18 = VAR_0;
   } else if(VAR_16==VAR_5) {
    if(VAR_17==VAR_8) {
     FUNC_2(((void*)0));
     return FUNC_1(VAR_20,VAR_1);
    } else
     VAR_18 = VAR_0;
   }
   break;
  case 130:
   if(VAR_16==VAR_7) {
    if(VAR_17==VAR_8) {
     FUNC_5();
    } else
     VAR_18 = VAR_0;
   } else if(VAR_16==VAR_10) {
    if(VAR_17==VAR_8) {
     FUNC_10((u8_t*)"",1);
    } else
     VAR_18 = VAR_0;
   } else if(VAR_16==VAR_11) {
    if(VAR_17==VAR_8) {
     FUNC_11(0x00);
    } else
     VAR_18 = VAR_0;
   } else if(VAR_16==VAR_12) {
    if(VAR_17==VAR_8) {
     FUNC_3();
    } else
     VAR_18 = VAR_0;
   } else if(VAR_16==VAR_2) {
    if(VAR_17==VAR_8) {
     FUNC_7();
    } else
     VAR_18 = VAR_0;
   }
   break;
  case 128:
   if(VAR_16==VAR_9) {
    if(VAR_17==VAR_8) {
     VAR_18 = FUNC_8();
    } else
     VAR_18 = VAR_0;
   }
   break;
  default:
   FUNC_0("Unknown command complete event. OGF = 0x%x OCF = 0x%x\n", VAR_15, VAR_16);
   VAR_18 = VAR_0;
   break;
 }

 if(VAR_18!=VAR_1) FUNC_1(VAR_20,VAR_18);
 return VAR_18;
}
