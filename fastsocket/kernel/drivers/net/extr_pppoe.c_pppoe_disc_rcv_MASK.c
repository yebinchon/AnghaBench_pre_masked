
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_state; } ;
struct sk_buff {int dummy; } ;
struct pppox_sock {int dummy; } ;
struct pppoe_net {int dummy; } ;
struct pppoe_hdr {scalar_t__ code; int sid; } ;
struct packet_type {int dummy; } ;
struct net_device {int ifindex; } ;
struct TYPE_2__ {int h_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct net_device*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 struct pppox_sock* FUNC_4 (struct pppoe_net*,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 struct pppoe_hdr* FUNC_6 (struct sk_buff*) ;
 struct pppoe_net* FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*,int) ;
 struct sock* FUNC_9 (struct pppox_sock*) ;
 struct sk_buff* FUNC_10 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_4, struct net_device *VAR_5,
     struct packet_type *VAR_6, struct net_device *VAR_7)

{
 struct pppoe_hdr *VAR_8;
 struct pppox_sock *VAR_9;
 struct pppoe_net *VAR_10;

 VAR_4 = FUNC_10(VAR_4, VAR_0);
 if (!VAR_4)
  goto out;

 if (!FUNC_8(VAR_4, sizeof(struct pppoe_hdr)))
  goto abort;

 VAR_8 = FUNC_6(VAR_4);
 if (VAR_8->code != VAR_2)
  goto abort;

 VAR_10 = FUNC_7(FUNC_2(VAR_5));
 VAR_9 = FUNC_4(VAR_10, VAR_8->sid, FUNC_3(VAR_4)->h_source, VAR_5->ifindex);
 if (VAR_9) {
  struct sock *VAR_11 = FUNC_9(VAR_9);

  FUNC_0(VAR_11);






  if (FUNC_11(VAR_11) == 0) {



   VAR_11->sk_state = VAR_3;
  }

  FUNC_1(VAR_11);
  FUNC_12(VAR_11);
 }

abort:
 FUNC_5(VAR_4);
out:
 return VAR_1;
}
