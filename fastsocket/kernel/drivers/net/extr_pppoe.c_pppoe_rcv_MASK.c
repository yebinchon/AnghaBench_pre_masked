
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct pppox_sock {int dummy; } ;
struct pppoe_net {int dummy; } ;
struct pppoe_hdr {int sid; int length; } ;
struct packet_type {int dummy; } ;
struct net_device {int ifindex; } ;
struct TYPE_2__ {int h_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 struct pppox_sock* FUNC_2 (struct pppoe_net*,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 struct pppoe_hdr* FUNC_5 (struct sk_buff*) ;
 struct pppoe_net* FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,int) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct pppox_sock*) ;
 int FUNC_10 (int ,struct sk_buff*,int ) ;
 int FUNC_11 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_12 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_2, struct net_device *VAR_3,
       struct packet_type *VAR_4, struct net_device *VAR_5)
{
 struct pppoe_hdr *VAR_6;
 struct pppox_sock *VAR_7;
 struct pppoe_net *VAR_8;
 int VAR_9;

 VAR_2 = FUNC_12(VAR_2, VAR_0);
 if (!VAR_2)
  goto out;

 if (!FUNC_7(VAR_2, sizeof(struct pppoe_hdr)))
  goto drop;

 VAR_6 = FUNC_5(VAR_2);
 VAR_9 = FUNC_4(VAR_6->length);

 FUNC_11(VAR_2, sizeof(*VAR_6));
 if (VAR_2->len < VAR_9)
  goto drop;

 if (FUNC_8(VAR_2, VAR_9))
  goto drop;

 VAR_8 = FUNC_6(FUNC_0(VAR_3));




 VAR_7 = FUNC_2(VAR_8, VAR_6->sid, FUNC_1(VAR_2)->h_source, VAR_3->ifindex);
 if (!VAR_7)
  goto drop;

 return FUNC_10(FUNC_9(VAR_7), VAR_2, 0);

drop:
 FUNC_3(VAR_2);
out:
 return VAR_1;
}
