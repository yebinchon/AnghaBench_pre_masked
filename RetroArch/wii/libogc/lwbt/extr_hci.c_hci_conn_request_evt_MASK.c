
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct pbuf {scalar_t__ payload; } ;
struct hci_link {int bdaddr; } ;
struct bd_addr {int dummy; } ;
typedef scalar_t__ err_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,struct bd_addr*,int *,int ,scalar_t__) ;
 int FUNC_2 (int *,struct hci_link*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,struct bd_addr*) ;
 int FUNC_5 (struct bd_addr*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct hci_link* FUNC_6 (struct bd_addr*) ;
 struct hci_link* FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct pbuf *VAR_3)
{
 u8_t *VAR_4;
 u8_t VAR_5;
 err_t VAR_6 = VAR_0;
 struct bd_addr *VAR_7;
 struct hci_link *VAR_8;

 FUNC_3("hci_conn_request_evt()\n");
 VAR_7 = (void*)((u8_t*)VAR_3->payload);
 VAR_4 = (((u8_t*)VAR_3->payload)+6);
 VAR_5 = *(((u8_t*)VAR_3->payload)+9);

 FUNC_1(VAR_2,VAR_7,VAR_4,VAR_5,VAR_6);
 if(VAR_6==VAR_0) {
  VAR_8 = FUNC_6(VAR_7);
  if(VAR_8==((void*)0)) {
   if((VAR_8=FUNC_7())==((void*)0)) {
    FUNC_0("hci_conn_request_evt: Could not allocate memory for link. Disconnect\n");
    return;
   }

   FUNC_4(&(VAR_8->bdaddr),VAR_7);
   FUNC_2(&(VAR_1),VAR_8);
  }
  FUNC_5(VAR_7,0x00);
 } else {
 }
}
