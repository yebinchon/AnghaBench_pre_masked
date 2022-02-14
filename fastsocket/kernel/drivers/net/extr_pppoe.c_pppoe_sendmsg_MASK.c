
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_state; int sk_priority; } ;
struct sk_buff {int protocol; int priority; struct net_device* dev; } ;
struct TYPE_2__ {int remote; } ;
struct pppox_sock {TYPE_1__ pppoe_pa; struct net_device* pppoe_dev; int num; } ;
struct pppoe_hdr {int ver; int type; int length; int * tag; int sid; scalar_t__ code; } ;
struct net_device {size_t mtu; size_t hard_header_len; } ;
struct msghdr {int msg_iov; } ;
struct kiocb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct net_device*,int ,int ,int *,size_t) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct pppoe_hdr*,struct pppoe_hdr*,int) ;
 int FUNC_7 (char*,int ,size_t) ;
 struct pppox_sock* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 scalar_t__ FUNC_10 (struct sk_buff*,size_t) ;
 int FUNC_11 (struct sk_buff*,size_t) ;
 int FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (struct sock*,int ) ;
 struct sk_buff* FUNC_14 (struct sock*,size_t,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct kiocb *VAR_7, struct socket *VAR_8,
    struct msghdr *VAR_9, size_t VAR_10)
{
 struct sk_buff *VAR_11;
 struct sock *VAR_12 = VAR_8->sk;
 struct pppox_sock *VAR_13 = FUNC_8(VAR_12);
 int VAR_14;
 struct pppoe_hdr VAR_15;
 struct pppoe_hdr *VAR_16;
 struct net_device *VAR_17;
 char *VAR_18;

 FUNC_5(VAR_12);
 if (FUNC_13(VAR_12, VAR_6) || !(VAR_12->sk_state & VAR_5)) {
  VAR_14 = -VAR_2;
  goto end;
 }

 VAR_15.ver = 1;
 VAR_15.type = 1;
 VAR_15.code = 0;
 VAR_15.sid = VAR_13->num;

 VAR_17 = VAR_13->pppoe_dev;

 VAR_14 = -VAR_0;
 if (VAR_10 > (VAR_17->mtu + VAR_17->hard_header_len))
  goto end;


 VAR_11 = FUNC_14(VAR_12, VAR_10 + VAR_17->hard_header_len + 32,
      0, VAR_4);
 if (!VAR_11) {
  VAR_14 = -VAR_1;
  goto end;
 }


 FUNC_11(VAR_11, VAR_17->hard_header_len);
 FUNC_12(VAR_11);

 VAR_11->dev = VAR_17;

 VAR_11->priority = VAR_12->sk_priority;
 VAR_11->protocol = FUNC_0(VAR_3);

 VAR_16 = (struct pppoe_hdr *)FUNC_10(VAR_11, VAR_10 + sizeof(struct pppoe_hdr));
 VAR_18 = (char *)&VAR_16->tag[0];

 VAR_14 = FUNC_7(VAR_18, VAR_9->msg_iov, VAR_10);
 if (VAR_14 < 0) {
  FUNC_4(VAR_11);
  goto end;
 }

 VAR_14 = VAR_10;
 FUNC_1(VAR_11, VAR_17, VAR_3,
   VAR_13->pppoe_pa.remote, ((void*)0), VAR_10);

 FUNC_6(VAR_16, &VAR_15, sizeof(struct pppoe_hdr));

 VAR_16->length = FUNC_3(VAR_10);

 FUNC_2(VAR_11);

end:
 FUNC_9(VAR_12);
 return VAR_14;
}
