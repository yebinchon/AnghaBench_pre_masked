
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u16_t ;
struct pbuf {int tot_len; struct l2cap_hdr* payload; } ;
struct l2cap_sig_hdr {int code; int id; void* len; } ;
struct l2cap_sig {struct pbuf* p; int sigid; int nrtx; int rtx; } ;
struct l2cap_pcb {int unrsp_sigs; } ;
struct l2cap_hdr {void* cid; void* len; } ;
struct bd_addr {int dummy; } ;
typedef scalar_t__ err_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,struct l2cap_sig*) ;
 int FUNC_2 (char*,int,...) ;
 int VAR_7 ;
 int VAR_8 ;
 struct l2cap_sig* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct l2cap_sig*) ;
 struct pbuf* FUNC_5 (int ,int,int ) ;
 int FUNC_6 (struct pbuf*,struct pbuf*) ;
 int FUNC_7 (struct pbuf*) ;
 void* FUNC_8 (int) ;
 int FUNC_9 () ;
 int VAR_9 ;
 scalar_t__ FUNC_10 (struct bd_addr*,struct pbuf*,int) ;

err_t FUNC_11(struct l2cap_pcb *VAR_10, u8_t VAR_11, u16_t VAR_12, struct bd_addr *VAR_13, struct pbuf *VAR_14)
{
 struct l2cap_sig *VAR_15;
 struct l2cap_sig_hdr *VAR_16;
 struct l2cap_hdr *VAR_17;
 err_t VAR_18;


 FUNC_2("l2cap_signal: Allocate memory for l2cap_sig. Code = 0x%x\n", VAR_11);
 if((VAR_15 = FUNC_3(&VAR_9)) == ((void*)0)) {
  FUNC_0("l2cap_signal: could not allocate memory for l2cap_sig\n");
  return VAR_0;
 }


 if((VAR_15->p = FUNC_5(VAR_8, VAR_2+VAR_5, VAR_7)) == ((void*)0)) {
  FUNC_0("l2cap_signal: could not allocate memory for pbuf\n");
  return VAR_0;
 }


 VAR_16 = (struct l2cap_sig_hdr *)(((u8_t *)VAR_15->p->payload)+VAR_2);


 if(VAR_14 == ((void*)0)) {
  VAR_16->len = 0;
 } else {
  FUNC_6(VAR_15->p, VAR_14);
  FUNC_7(VAR_14);
  VAR_16->len = FUNC_8(VAR_14->tot_len);
 }

 VAR_16->code = VAR_11;

 if(VAR_16->code % 2) {
  VAR_15->sigid = VAR_12;
  FUNC_2("l2cap_signal: Sending response/reject signal with id = %d code = %d\n", VAR_15->sigid, VAR_16->code);
 } else {
  VAR_15->sigid = FUNC_9();
  VAR_15->rtx = VAR_4;

  VAR_15->nrtx = VAR_3;
  FUNC_2("l2cap_signal: Sending request signal with id = %d code = %d\n", VAR_15->sigid, VAR_16->code);
 }
 VAR_16->id = VAR_15->sigid;


 VAR_17 = VAR_15->p->payload;
 VAR_17->len = FUNC_8((VAR_15->p->tot_len - VAR_2));
 VAR_17->cid = FUNC_8(VAR_6);

 VAR_18 = FUNC_10(VAR_13, VAR_15->p, VAR_15->p->tot_len);


 if(VAR_18 == VAR_1 && (VAR_16->code % 2) == 0) {
  FUNC_2("l2cap_signal: Registering sent request signal with id = %d code = %d\n", VAR_15->sigid, VAR_16->code);
  FUNC_1(&(VAR_10->unrsp_sigs), VAR_15);
 } else {
  FUNC_2("l2cap_signal: Deallocating sent response/reject signal with id = %d code = %d\n", VAR_15->sigid, VAR_16->code);
  FUNC_7(VAR_15->p);
  VAR_15->p = ((void*)0);
  FUNC_4(&VAR_9, VAR_15);
 }

  return VAR_18;
}
