
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_state; } ;
struct sk_buff {int len; struct net_device* dev; int protocol; } ;
struct TYPE_2__ {int remote; } ;
struct pppox_sock {TYPE_1__ pppoe_pa; int num; struct net_device* pppoe_dev; } ;
struct pppoe_hdr {int ver; int type; int length; int sid; scalar_t__ code; } ;
struct net_device {scalar_t__ hard_header_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,struct net_device*,int ,int ,int *,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct sk_buff*) ;
 struct pppoe_hdr* FUNC_6 (struct sk_buff*) ;
 struct pppox_sock* FUNC_7 (struct sock*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 struct pppox_sock *VAR_5 = FUNC_7(VAR_3);
 struct net_device *VAR_6 = VAR_5->pppoe_dev;
 struct pppoe_hdr *VAR_7;
 int VAR_8 = VAR_4->len;
 if (FUNC_10(VAR_3, VAR_2) || !(VAR_3->sk_state & VAR_1))
  goto abort;

 if (!VAR_6)
  goto abort;




 if (FUNC_8(VAR_4, sizeof(*VAR_7) + VAR_6->hard_header_len))
  goto abort;

 FUNC_0(VAR_4, sizeof(*VAR_7));
 FUNC_9(VAR_4);

 VAR_7 = FUNC_6(VAR_4);
 VAR_7->ver = 1;
 VAR_7->type = 1;
 VAR_7->code = 0;
 VAR_7->sid = VAR_5->num;
 VAR_7->length = FUNC_4(VAR_8);

 VAR_4->protocol = FUNC_1(VAR_0);
 VAR_4->dev = VAR_6;

 FUNC_2(VAR_4, VAR_6, VAR_0,
   VAR_5->pppoe_pa.remote, ((void*)0), VAR_8);

 FUNC_3(VAR_4);
 return 1;

abort:
 FUNC_5(VAR_4);
 return 1;
}
