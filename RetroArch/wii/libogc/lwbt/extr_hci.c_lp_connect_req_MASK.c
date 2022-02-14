
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
typedef int u16_t ;
struct pbuf {int tot_len; scalar_t__ payload; } ;
struct hci_link {int bdaddr; } ;
struct hci_inq_res {int psrm; int psm; int co; int bdaddr; struct hci_inq_res* next; } ;
struct bd_addr {int addr; } ;
typedef int err_t ;
struct TYPE_2__ {int pkt_type; struct hci_inq_res* ires; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,struct hci_link*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *,struct bd_addr*) ;
 int FUNC_3 (int *,struct bd_addr*) ;
 struct pbuf* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct pbuf*) ;
 int VAR_7 ;
 struct pbuf* FUNC_6 (struct pbuf*,int ,int ,int ) ;
 TYPE_1__* VAR_8 ;
 struct hci_link* FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int*,int ,int) ;
 int FUNC_10 (struct pbuf*,int ) ;

err_t FUNC_11(struct bd_addr *VAR_9, u8_t VAR_10)
{
 u8_t VAR_11, VAR_12;
 u16_t VAR_13;
 struct pbuf *VAR_14;
 struct hci_link *VAR_15 = FUNC_7();
 struct hci_inq_res *VAR_16;

 if(VAR_15 == ((void*)0)) {
  FUNC_0("lp_connect_req: Could not allocate memory for link\n");
  return VAR_0;
 }

 FUNC_3(&(VAR_15->bdaddr), VAR_9);
 FUNC_1(&(VAR_7), VAR_15);


 for(VAR_16 = VAR_8->ires; VAR_16 != ((void*)0); VAR_16 = VAR_16->next) {
  if(FUNC_2(&VAR_16->bdaddr, VAR_9)) {
   VAR_11 = VAR_16->psrm;
   VAR_12 = VAR_16->psm;
   VAR_13 = VAR_16->co;
   break;
  }
 }
 if(VAR_16 == ((void*)0)) {

  VAR_11 = 0x01;


  VAR_12 = 0x00;


  VAR_13 = 0x00;

 }

 if((VAR_14 = FUNC_4(VAR_6, VAR_3, VAR_5)) == ((void*)0)) {
  FUNC_0("lp_connect_req: Could not allocate memory for pbuf\n");
  return VAR_0;
 }


 VAR_14 = FUNC_6(VAR_14, VAR_2, VAR_4, VAR_3);

 FUNC_9(((u8_t *)VAR_14->payload)+4, VAR_9->addr, 6);
 ((u16_t *)VAR_14->payload)[5] = FUNC_8(VAR_8->pkt_type);
 ((u8_t *)VAR_14->payload)[12] = VAR_11;
 ((u8_t *)VAR_14->payload)[13] = VAR_12;
 ((u16_t *)VAR_14->payload)[7] = FUNC_8(VAR_13);
 ((u8_t *)VAR_14->payload)[16] = VAR_10;

 FUNC_10(VAR_14, VAR_14->tot_len);
 FUNC_5(VAR_14);

 return VAR_1;
}
