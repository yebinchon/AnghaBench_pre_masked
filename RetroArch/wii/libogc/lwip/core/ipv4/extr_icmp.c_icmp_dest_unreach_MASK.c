
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
struct pbuf {int len; struct ip_hdr* payload; } ;
struct ip_hdr {int src; scalar_t__ chksum; } ;
struct icmp_dur_hdr {int src; scalar_t__ chksum; } ;
typedef enum icmp_dur_type { ____Placeholder_icmp_dur_type } icmp_dur_type ;
struct TYPE_2__ {int xmit; } ;


 int FUNC_0 (struct ip_hdr*,int) ;
 int FUNC_1 (struct ip_hdr*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 scalar_t__ FUNC_3 (struct ip_hdr*,int ) ;
 int FUNC_4 (struct pbuf*,int *,int *,int ,int ,int ) ;
 int FUNC_5 (int *,struct ip_hdr*,scalar_t__) ;
 struct pbuf* FUNC_6 (int ,scalar_t__,int ) ;
 int FUNC_7 (struct pbuf*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

void
FUNC_10(struct pbuf *VAR_7, enum icmp_dur_type VAR_8)
{
  struct pbuf *VAR_9;
  struct ip_hdr *VAR_10;
  struct icmp_dur_hdr *VAR_11;

  VAR_9 = FUNC_6(VAR_4, 8 + VAR_2 + 8, VAR_5);


  VAR_10 = VAR_7->payload;

  VAR_11 = VAR_9->payload;
  FUNC_1(VAR_11, VAR_0);
  FUNC_0(VAR_11, VAR_8);

  FUNC_5((u8_t *)VAR_9->payload + 8, VAR_7->payload, VAR_2 + 8);


  VAR_11->chksum = 0;
  VAR_11->chksum = FUNC_3(VAR_11, VAR_9->len);
  FUNC_2(VAR_6.xmit);

  FUNC_9();

  FUNC_8();

  FUNC_4(VAR_9, ((void*)0), &(VAR_10->src),
     VAR_1, 0, VAR_3);
  FUNC_7(VAR_9);
}
