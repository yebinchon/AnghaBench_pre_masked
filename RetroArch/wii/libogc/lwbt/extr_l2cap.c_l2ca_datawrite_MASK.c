
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pbuf {scalar_t__ tot_len; struct l2cap_hdr* payload; } ;
struct TYPE_2__ {scalar_t__ outmtu; } ;
struct l2cap_pcb {scalar_t__ state; scalar_t__ dcid; int remote_bdaddr; TYPE_1__ cfg; } ;
struct l2cap_hdr {void* len; void* cid; } ;
typedef int err_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct pbuf* FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (struct pbuf*,struct pbuf*) ;
 struct pbuf* FUNC_3 (struct pbuf*) ;
 int FUNC_4 (struct pbuf*) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,struct pbuf*,scalar_t__) ;

err_t FUNC_7(struct l2cap_pcb *VAR_8, struct pbuf *VAR_9)
{
 err_t VAR_10;
 struct l2cap_hdr *VAR_11;
 struct pbuf *VAR_12;

 if(VAR_8->state != VAR_5) {
  FUNC_0("l2cap_datawrite: State != L2CAP_OPEN. Dropping data\n");
  return VAR_1;
 }


 if((VAR_12 = FUNC_1(VAR_7, VAR_4, VAR_6)) == ((void*)0)) {
  FUNC_0("l2cap_datawrite: Could not allocate memory for pbuf\n");
  return VAR_2;
 }
 FUNC_2(VAR_12, VAR_9);

 VAR_11 = VAR_12->payload;
 VAR_11->cid = FUNC_5(VAR_8->dcid);


 if(VAR_9->tot_len > VAR_8->cfg.outmtu) {

  VAR_11->len = FUNC_5(VAR_8->cfg.outmtu);
  if((VAR_10 = FUNC_6(&(VAR_8->remote_bdaddr), VAR_12, VAR_8->cfg.outmtu + VAR_4)) == VAR_3) {

   VAR_10 = VAR_0;
  }
 } else {

  VAR_11->len = FUNC_5(VAR_9->tot_len);

  VAR_10 = FUNC_6(&(VAR_8->remote_bdaddr), VAR_12, VAR_12->tot_len);
 }


 VAR_9 = FUNC_3(VAR_12);
 FUNC_4(VAR_12);

 return VAR_10;
}
