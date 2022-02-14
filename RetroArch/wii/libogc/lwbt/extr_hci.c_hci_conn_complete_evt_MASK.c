
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u16_t ;
struct pbuf {scalar_t__ payload; } ;
struct bd_addr {int * addr; } ;
struct hci_link {struct bd_addr bdaddr; void* connhdl; } ;
typedef int err_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct bd_addr*,int ) ;
 int VAR_3 ;

 int FUNC_2 (int *,struct hci_link*) ;

 int FUNC_3 (char*,struct hci_link*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct bd_addr*,struct bd_addr*) ;
 int VAR_4 ;
 int FUNC_5 (struct hci_link*) ;
 int VAR_5 ;
 int FUNC_6 (struct bd_addr*,int ) ;
 struct hci_link* FUNC_7 (struct bd_addr*) ;
 struct hci_link* FUNC_8 () ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (struct bd_addr*,int ,int ) ;
 int FUNC_11 (struct bd_addr*) ;
 int FUNC_12 (struct bd_addr*,int ) ;

__attribute__((used)) static void FUNC_13(struct pbuf *VAR_6)
{
 err_t VAR_7;
 struct bd_addr *VAR_8;
 struct hci_link *VAR_9;

 (void)VAR_7;

 VAR_8 = (void*)(((u8_t*)VAR_6->payload)+3);
 VAR_9 = FUNC_7(VAR_8);
 FUNC_3("hci_conn_complete_evt(%p,%02x - %02x:%02x:%02x:%02x:%02x:%02x)\n",VAR_9,((u8_t*)VAR_6->payload)[0],VAR_8->addr[0],VAR_8->addr[1],VAR_8->addr[2],VAR_8->addr[3],VAR_8->addr[4],VAR_8->addr[5]);
 switch(((u8_t*)VAR_6->payload)[0]) {
  case 128:
   if(VAR_9==((void*)0)) {
    if((VAR_9=FUNC_8())==((void*)0)) {
     FUNC_0("hci_conn_complete_evt: Could not allocate memory for link. Disconnect\n");
     FUNC_6(VAR_8, VAR_3);
     FUNC_12(VAR_8,VAR_2);
     break;
    }
    FUNC_4(&(VAR_9->bdaddr),VAR_8);
    VAR_9->connhdl = FUNC_9(*((u16_t*)(((u8_t*)VAR_6->payload)+1)));
    FUNC_2(&(VAR_4),VAR_9);
    FUNC_1(VAR_5,VAR_8,VAR_7);
    FUNC_11(&(VAR_9->bdaddr));
   } else {
    VAR_9->connhdl = FUNC_9(*((u16_t*)(((u8_t*)VAR_6->payload)+1)));
    FUNC_1(VAR_5,VAR_8,VAR_7);
    FUNC_10(&(VAR_9->bdaddr),((u8_t*)VAR_6->payload)[10],VAR_1);
   }
   break;
  case 129:
   break;
  default:
   if(VAR_9!=((void*)0)) {
    FUNC_5(VAR_9);
    FUNC_10(VAR_8,((u8_t*)VAR_6->payload)[10],VAR_0);
   }
   break;
 }
}
