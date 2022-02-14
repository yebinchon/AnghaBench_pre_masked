
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct socket {TYPE_1__* ops; struct sock* sk; } ;
struct sock {int sk_allocation; int * sk_destruct; struct pppol2tp_tunnel* sk_user_data; int sk_protocol; } ;
struct TYPE_5__ {int tunnel_id; } ;
struct pppol2tp_tunnel {scalar_t__ magic; struct sock* sock; int list; struct net* pppol2tp_net; int hlist_lock; int * old_sk_destruct; int debug; TYPE_2__ stats; int * name; } ;
struct pppol2tp_net {int pppol2tp_tunnel_list_lock; int pppol2tp_tunnel_list; } ;
struct net {int dummy; } ;
struct TYPE_6__ {int encap_rcv; int encap_type; } ;
struct TYPE_4__ {int family; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int,int ,int ,char*,int ,int,int,...) ;
 int VAR_14 ;
 int FUNC_3 (int *) ;
 struct pppol2tp_tunnel* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 struct pppol2tp_net* FUNC_6 (struct net*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (struct pppol2tp_tunnel*) ;
 int VAR_17 ;
 int FUNC_8 (int *) ;
 struct socket* FUNC_9 (int,int*) ;
 int FUNC_10 (struct socket*) ;
 int FUNC_11 (int *,char*,int ) ;
 TYPE_3__* FUNC_12 (struct sock*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static struct sock *FUNC_15(struct net *VAR_18,
     int VAR_19, u16 VAR_20, int *VAR_21)
{
 int VAR_22;
 struct socket *VAR_23 = ((void*)0);
 struct sock *VAR_24;
 struct pppol2tp_tunnel *VAR_25;
 struct pppol2tp_net *VAR_26;
 struct sock *VAR_27 = ((void*)0);




 VAR_22 = -VAR_2;
 VAR_23 = FUNC_9(VAR_19, &VAR_22);
 if (!VAR_23) {
  FUNC_2(-1, VAR_13, VAR_10,
         "tunl %hu: sockfd_lookup(fd=%d) returned %d\n",
         VAR_20, VAR_19, VAR_22);
  goto err;
 }

 VAR_24 = VAR_23->sk;


 VAR_22 = -VAR_6;
 if (VAR_24->sk_protocol != VAR_9) {
  FUNC_2(-1, VAR_13, VAR_10,
         "tunl %hu: fd %d wrong protocol, got %d, expected %d\n",
         VAR_20, VAR_19, VAR_24->sk_protocol, VAR_9);
  goto err;
 }
 VAR_22 = -VAR_1;
 if (VAR_23->ops->family != VAR_0) {
  FUNC_2(-1, VAR_13, VAR_10,
         "tunl %hu: fd %d wrong family, got %d, expected %d\n",
         VAR_20, VAR_19, VAR_23->ops->family, VAR_0);
  goto err;
 }

 VAR_22 = -VAR_5;


 VAR_25 = (struct pppol2tp_tunnel *)VAR_24->sk_user_data;
 if (VAR_25 != ((void*)0)) {

  VAR_22 = -VAR_3;
  FUNC_0(VAR_25->magic != VAR_11);


  VAR_27 = VAR_25->sock;
  goto out;
 }




 VAR_24->sk_user_data = VAR_25 = FUNC_4(sizeof(struct pppol2tp_tunnel), VAR_8);
 if (VAR_24->sk_user_data == ((void*)0)) {
  VAR_22 = -VAR_4;
  goto err;
 }

 VAR_25->magic = VAR_11;
 FUNC_11(&VAR_25->name[0], "tunl %hu", VAR_20);

 VAR_25->stats.tunnel_id = VAR_20;
 VAR_25->debug = VAR_12;




 VAR_25->old_sk_destruct = VAR_24->sk_destruct;
 VAR_24->sk_destruct = &VAR_16;

 VAR_25->sock = VAR_24;
 VAR_24->sk_allocation = VAR_7;


 FUNC_8(&VAR_25->hlist_lock);


 VAR_25->pppol2tp_net = VAR_18;
 VAR_26 = FUNC_6(VAR_18);


 FUNC_1(&VAR_25->list);
 FUNC_13(&VAR_26->pppol2tp_tunnel_list_lock);
 FUNC_5(&VAR_25->list, &VAR_26->pppol2tp_tunnel_list);
 FUNC_14(&VAR_26->pppol2tp_tunnel_list_lock);
 FUNC_3(&VAR_15);




 FUNC_7(VAR_25);


 (FUNC_12(VAR_24))->encap_type = VAR_14;
 (FUNC_12(VAR_24))->encap_rcv = VAR_17;

 VAR_27 = VAR_25->sock;

 *VAR_21 = 0;
out:
 if (VAR_23)
  FUNC_10(VAR_23);

 return VAR_27;

err:
 *VAR_21 = VAR_22;
 goto out;
}
