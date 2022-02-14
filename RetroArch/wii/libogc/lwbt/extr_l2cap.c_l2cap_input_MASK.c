
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16_t ;
struct pbuf {scalar_t__ tot_len; struct hci_acl_hdr* payload; } ;
struct l2cap_seg {scalar_t__ len; struct pbuf* p; TYPE_1__* pcb; struct hci_acl_hdr* l2caphdr; int bdaddr; struct l2cap_seg* next; } ;
struct hci_acl_hdr {int len; int connhdl_pb_bc; int cid; } ;
struct bd_addr {int dummy; } ;
typedef int err_t ;
struct TYPE_3__ {int scid; struct TYPE_3__* next; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 scalar_t__ VAR_6 ;
 int const VAR_7 ;

 int FUNC_0 (struct l2cap_seg**,struct l2cap_seg*) ;
 int FUNC_1 (struct l2cap_seg**,struct l2cap_seg*) ;

 int FUNC_2 (TYPE_1__*,struct pbuf*,int ,int ) ;
 int FUNC_3 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (struct bd_addr*,int *) ;
 int FUNC_5 (int *,struct bd_addr*) ;
 struct l2cap_seg* FUNC_6 (int *) ;
 int FUNC_7 (int *,struct l2cap_seg*) ;
 struct pbuf* FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct pbuf*,struct pbuf*) ;
 int FUNC_10 (struct pbuf*) ;
 int FUNC_11 (struct pbuf*,scalar_t__) ;
 int FUNC_12 (struct pbuf*,int) ;
 int FUNC_13 (int const) ;
 TYPE_1__* VAR_10 ;
 struct l2cap_seg* VAR_11 ;
 int FUNC_14 () ;
 int FUNC_15 (struct pbuf*,struct hci_acl_hdr*,struct bd_addr*) ;
 int VAR_12 ;
 int FUNC_16 (int *,int ,int ,struct bd_addr*,struct pbuf*) ;
 void* FUNC_17 (int) ;

void FUNC_18(struct pbuf *VAR_13, struct bd_addr *VAR_14)
{
 struct l2cap_seg *VAR_15;
 struct hci_acl_hdr *VAR_16;
 struct pbuf *VAR_17;
 err_t VAR_18;

 (void)VAR_18;

 FUNC_11(VAR_13, VAR_1);
 VAR_16 = VAR_13->payload;
 FUNC_11(VAR_13, -VAR_1);

 FUNC_12(VAR_13, VAR_16->len);

 for(VAR_15 = VAR_11; VAR_15 != ((void*)0); VAR_15 = VAR_15->next) {
  if(FUNC_4(VAR_14, &(VAR_15->bdaddr))) {
   break;
  }
 }

 VAR_16->connhdl_pb_bc = FUNC_17(VAR_16->connhdl_pb_bc);
 VAR_16->len = FUNC_17(VAR_16->len);


 if(((VAR_16->connhdl_pb_bc >> 12) & 0x03)== VAR_2) {
  if(VAR_15 == ((void*)0)) {

   FUNC_3("l2cap_input: Continuing fragment. Discard packet\n");
   FUNC_10(VAR_13);
   return;
  } else if(VAR_15->p->tot_len + VAR_13->tot_len > VAR_15->len) {



   FUNC_3("l2cap_input: Continuing fragment. Length exceeds L2CAP hdr length. Discard packet\n");
   FUNC_10(VAR_15->p);
   FUNC_1(&(VAR_11), VAR_15);
   FUNC_7(&VAR_12, VAR_15);

   FUNC_10(VAR_13);
   return;
  }

  FUNC_9(VAR_15->p, VAR_13);
  FUNC_10(VAR_13);

 } else if(((VAR_16->connhdl_pb_bc >> 12) & 0x03) == VAR_3) {

  if(VAR_15 != ((void*)0)) {

   FUNC_3("l2cap_input: Start of L2CAP packet. Discard previous packet\n");
   FUNC_10(VAR_15->p);
  } else {
   VAR_15 = FUNC_6(&VAR_12);
   FUNC_5(&(VAR_15->bdaddr), VAR_14);
   FUNC_0(&(VAR_11), VAR_15);
  }
  VAR_15->p = VAR_13;
  VAR_15->l2caphdr = VAR_13->payload;
  VAR_15->l2caphdr->cid = FUNC_17(VAR_15->l2caphdr->cid);
  VAR_15->l2caphdr->len = FUNC_17(VAR_15->l2caphdr->len);

  VAR_15->len = VAR_15->l2caphdr->len + VAR_6;
  for(VAR_15->pcb = VAR_10; VAR_15->pcb != ((void*)0); VAR_15->pcb = VAR_15->pcb->next) {
   if(VAR_15->pcb->scid == VAR_15->l2caphdr->cid) {
    break;
   }
  }
 } else {

  FUNC_3("l2cap_input: Discard packet\n");
  FUNC_10(VAR_15->p);
  FUNC_1(&(VAR_11), VAR_15);
  FUNC_7(&VAR_12, VAR_15);

  FUNC_10(VAR_13);
  return;
 }
 if(VAR_15->p->tot_len < VAR_15->len) {
  FUNC_3("l2cap_input: Get continuing segments\n");
  return;
 }


 switch(VAR_15->l2caphdr->cid) {
  case 129:

   FUNC_3("l2cap_input: Illegal null cid\n");
   FUNC_10(VAR_15->p);
   break;
  case 128:
   FUNC_11(VAR_15->p, -VAR_6);
   FUNC_15(VAR_15->p, VAR_15->l2caphdr, VAR_14);
   FUNC_10(VAR_15->p);
   break;
  case 130:

   FUNC_10(VAR_15->p);
   break;
  default:
   if(VAR_15->l2caphdr->cid < 0x0040 || VAR_15->pcb == ((void*)0)) {


    if((VAR_17 = FUNC_8(VAR_9, VAR_5+4, VAR_8)) != ((void*)0)) {
     ((u16_t *)VAR_17->payload)[0] = FUNC_13(VAR_7);
     ((u16_t *)VAR_17->payload)[1] = FUNC_13(VAR_15->l2caphdr->cid);
     ((u16_t *)VAR_17->payload)[2] = FUNC_13(129);

     VAR_18 = FUNC_16(((void*)0), VAR_4, FUNC_14(), VAR_14, VAR_17);
    }
    FUNC_10(VAR_15->p);
    break;
   }

   FUNC_11(VAR_15->p, -VAR_6);


   FUNC_3("l2cap_input: Forward packet to higher layer\n");
   FUNC_2(VAR_15->pcb,VAR_15->p,VAR_0,VAR_18);
   break;
 }


 FUNC_1(&(VAR_11), VAR_15);
 FUNC_7(&VAR_12, VAR_15);
}
