
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u16_t ;
struct pbuf {scalar_t__ payload; } ;
struct hci_link {int bdaddr; int connhdl; struct hci_link* next; } ;
typedef int err_t ;


 int FUNC_0 (int ,int *,int ) ;
 int VAR_0 ;

 int FUNC_1 (char*) ;
 struct hci_link* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(u8_t VAR_3,struct pbuf *VAR_4)
{
 err_t VAR_5;
 struct hci_link *VAR_6;

 (void)VAR_5;

 switch(VAR_3) {
  case 128:
   if(((u8_t*)VAR_4->payload)[0]==VAR_0) {
    for(VAR_6=VAR_1;VAR_6!=((void*)0);VAR_6=VAR_6->next) {
     if(VAR_6->connhdl==FUNC_2(*((u16_t*)(((u8_t*)VAR_4->payload)+1)))) break;
    }
    if(VAR_6==((void*)0)) {
     FUNC_1("hci_cc_link_policy: Connection does not exist\n");
     break;
    }
    FUNC_0(VAR_2,&VAR_6->bdaddr,VAR_5);
   } else {
    FUNC_1("Unsuccessful HCI_W_LINK_POLICY.\n");
   }
   break;
 }
}
