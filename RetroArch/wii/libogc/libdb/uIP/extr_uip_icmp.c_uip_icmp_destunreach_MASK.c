
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct uip_pbuf {int len; struct uip_ip_hdr* payload; } ;
struct uip_ip_hdr {int src; scalar_t__ chksum; } ;
struct uip_icmp_dur_hdr {int src; scalar_t__ chksum; } ;
typedef enum uip_icmp_dur_type { ____Placeholder_uip_icmp_dur_type } uip_icmp_dur_type ;


 int FUNC_0 (struct uip_ip_hdr*,int) ;
 int FUNC_1 (struct uip_ip_hdr*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,struct uip_ip_hdr*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct uip_ip_hdr*,int ) ;
 int FUNC_4 (struct uip_pbuf*,int *,int *,int ,int ,int ) ;
 struct uip_pbuf* FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (struct uip_pbuf*) ;

void FUNC_7(struct uip_pbuf *VAR_6,enum uip_icmp_dur_type VAR_7)
{
 struct uip_pbuf *VAR_8;
 struct uip_ip_hdr *VAR_9;
 struct uip_icmp_dur_hdr *VAR_10;

 VAR_8 = FUNC_5(VAR_3,sizeof(struct uip_icmp_dur_hdr)+VAR_2+8,VAR_4);

 VAR_9 = VAR_6->payload;
 VAR_10 = VAR_8->payload;

 FUNC_1(VAR_10,VAR_0);
 FUNC_0(VAR_10,VAR_7);

 FUNC_2((u8_t*)VAR_8->payload+sizeof(struct uip_icmp_dur_hdr),VAR_6->payload,VAR_2+8);

 VAR_10->chksum = 0;
 VAR_10->chksum = FUNC_3(VAR_10,VAR_8->len);

 FUNC_4(VAR_8,((void*)0),&VAR_9->src,VAR_1,0,VAR_5);
 FUNC_6(VAR_8);
}
