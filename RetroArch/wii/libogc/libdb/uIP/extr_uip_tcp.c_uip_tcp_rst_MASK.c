
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32_t ;
typedef int u16_t ;
struct uip_tcp_hdr {scalar_t__ chksum; scalar_t__ urgp; void* wnd; void* ackno; void* seqno; void* dst; void* src; } ;
struct uip_pbuf {int tot_len; struct uip_tcp_hdr* payload; } ;
struct uip_ip_addr {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct uip_tcp_hdr*,int) ;
 int FUNC_2 (struct uip_tcp_hdr*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct uip_pbuf*,struct uip_ip_addr*,struct uip_ip_addr*,int ,int ) ;
 int FUNC_6 (struct uip_pbuf*,struct uip_ip_addr*,struct uip_ip_addr*,int ,int ,int ) ;
 struct uip_pbuf* FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct uip_pbuf*) ;

void FUNC_9(u32_t VAR_8,u32_t VAR_9,struct uip_ip_addr *VAR_10,struct uip_ip_addr *VAR_11,u16_t VAR_12,u16_t VAR_13)
{
 struct uip_pbuf *VAR_14;
 struct uip_tcp_hdr *VAR_15;

 VAR_14 = FUNC_7(VAR_0,VAR_4,VAR_1);
 if(VAR_14==((void*)0)) {
  FUNC_0("uip_tcp_rst: could not allocate memory for pbuf.\n");
  return;
 }

 VAR_15 = VAR_14->payload;
 VAR_15->src = FUNC_4(VAR_12);
 VAR_15->dst = FUNC_4(VAR_13);
 VAR_15->seqno = FUNC_3(VAR_8);
 VAR_15->ackno = FUNC_3(VAR_9);
 FUNC_1(VAR_15,VAR_5|VAR_3);
 VAR_15->wnd = FUNC_4(VAR_7);
 VAR_15->urgp = 0;
 FUNC_2(VAR_15,5);

 VAR_15->chksum = 0;
 VAR_15->chksum = FUNC_5(VAR_14,VAR_10,VAR_11,VAR_2,VAR_14->tot_len);

 FUNC_6(VAR_14,VAR_10,VAR_11,VAR_6,0,VAR_2);
 FUNC_8(VAR_14);
}
