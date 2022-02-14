
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uip_tcp_pcb {int ttl; int remote_ip; int local_ip; int rcv_wnd; scalar_t__ rcv_nxt; scalar_t__ snd_nxt; int remote_port; int local_port; } ;
struct uip_tcp_hdr {scalar_t__ chksum; scalar_t__ urgp; void* wnd; void* ackno; void* seqno; void* dst; void* src; } ;
struct uip_pbuf {int tot_len; struct uip_tcp_hdr* payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uip_tcp_hdr*,int) ;
 int VAR_3 ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct uip_pbuf*,int *,int *,int ,int ) ;
 int FUNC_4 (struct uip_pbuf*,int *,int *,int ,int ,int ) ;
 struct uip_pbuf* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct uip_pbuf*) ;

void FUNC_7(struct uip_tcp_pcb *VAR_4)
{
 struct uip_pbuf *VAR_5;
 struct uip_tcp_hdr *VAR_6;

 VAR_5 = FUNC_5(VAR_0,VAR_3,VAR_1);
 if(VAR_5==((void*)0)) return;

 VAR_6 = VAR_5->payload;
 VAR_6->src = FUNC_2(VAR_4->local_port);
 VAR_6->dst = FUNC_2(VAR_4->remote_port);
 VAR_6->seqno = FUNC_1(VAR_4->snd_nxt-1);
 VAR_6->ackno = FUNC_1(VAR_4->rcv_nxt);
 VAR_6->wnd = FUNC_2(VAR_4->rcv_wnd);
 VAR_6->urgp = 0;
 FUNC_0(VAR_6,5);

 VAR_6->chksum = 0;
 VAR_6->chksum = FUNC_3(VAR_5,&VAR_4->local_ip,&VAR_4->remote_ip,VAR_2,VAR_5->tot_len);

 FUNC_4(VAR_5,&VAR_4->local_ip,&VAR_4->remote_ip,VAR_4->ttl,0,VAR_2);
 FUNC_6(VAR_5);
}
