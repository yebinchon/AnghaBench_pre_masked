
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct udphdr {int dummy; } ;
struct sk_buff {int data; scalar_t__ protocol; } ;
struct eth_tx_parse_bd_e1x {int ip_hlen_w; int tcp_pseudo_csum; void* total_hlen_w; void* global_data; } ;
struct bnx2x {int dummy; } ;
typedef int s8 ;
struct TYPE_2__ {int check; } ;


 int FUNC_0 (int ,char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 TYPE_1__* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static u8 FUNC_12(struct bnx2x *VAR_4, struct sk_buff *VAR_5,
        struct eth_tx_parse_bd_e1x *VAR_6,
        u32 VAR_7)
{
 u8 VAR_8 = (FUNC_8(VAR_5) - VAR_5->data) >> 1;


 VAR_6->global_data =
  FUNC_6(VAR_8 |
       ((VAR_5->protocol == FUNC_5(VAR_0)) <<
        VAR_1));

 VAR_6->ip_hlen_w = (FUNC_9(VAR_5) -
   FUNC_8(VAR_5)) >> 1;

 VAR_8 += VAR_6->ip_hlen_w;


 if (VAR_7 & VAR_3)
  VAR_8 += FUNC_11(VAR_5) / 2;
 else
  VAR_8 += sizeof(struct udphdr) / 2;

 VAR_6->total_hlen_w = FUNC_6(VAR_8);
 VAR_8 = VAR_8*2;

 if (VAR_7 & VAR_3) {
  VAR_6->tcp_pseudo_csum = FUNC_4(FUNC_10(VAR_5)->check);

 } else {
  s8 VAR_9 = FUNC_2(VAR_5);

  FUNC_0(VAR_2,
     "hlen %d  fix %d  csum before fix %x\n",
     FUNC_7(VAR_6->total_hlen_w), VAR_9, FUNC_1(VAR_5));


  VAR_6->tcp_pseudo_csum =
   FUNC_3(FUNC_9(VAR_5),
           FUNC_1(VAR_5), VAR_9);

  FUNC_0(VAR_2, "csum after fix %x\n",
     VAR_6->tcp_pseudo_csum);
 }

 return VAR_8;
}
