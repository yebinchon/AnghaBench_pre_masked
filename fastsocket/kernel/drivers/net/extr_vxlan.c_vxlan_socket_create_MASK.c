
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vxlan_rcv_t ;
typedef int vxlan_addr ;
struct vxlan_sock {int hlist; void* data; int * rcv; int refcnt; TYPE_3__* sock; int del_work; int * vni_list; } ;
struct vxlan_net {int sock_lock; } ;
struct TYPE_6__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct net {int dummy; } ;
typedef int __be16 ;
struct TYPE_9__ {scalar_t__ mc_loop; } ;
struct TYPE_8__ {struct sock* sk; } ;
struct TYPE_7__ {int encap_type; int encap_rcv; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vxlan_sock* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 TYPE_5__* FUNC_6 (struct sock*) ;
 int FUNC_7 (TYPE_3__*,struct sockaddr*,int) ;
 int FUNC_8 (struct vxlan_sock*) ;
 struct vxlan_sock* FUNC_9 (int,int ) ;
 struct vxlan_net* FUNC_10 (struct net*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (struct sock*,struct net*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (int ,int ,int ,TYPE_3__**) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 TYPE_2__* FUNC_18 (struct sock*) ;
 int FUNC_19 (struct net*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static struct vxlan_sock *FUNC_20(struct net *VAR_10, __be16 VAR_11,
           vxlan_rcv_t *VAR_12, void *VAR_13)
{
 struct vxlan_net *VAR_14 = FUNC_10(VAR_10, VAR_8);
 struct vxlan_sock *VAR_15;
 struct sock *VAR_16;
 struct sockaddr_in VAR_17 = {
  .sin_family = VAR_0,
  .sin_addr.s_addr = FUNC_5(VAR_3),
  .sin_port = VAR_11,
 };
 int VAR_18;
 unsigned int VAR_19;

 VAR_15 = FUNC_9(sizeof(*VAR_15), VAR_2);
 if (!VAR_15) {
  FUNC_12("memory alocation failure\n");
  return FUNC_0(-VAR_1);
 }

 for (VAR_19 = 0; VAR_19 < VAR_6; ++VAR_19)
  FUNC_1(&VAR_15->vni_list[VAR_19]);

 FUNC_2(&VAR_15->del_work, VAR_7);


 VAR_18 = FUNC_15(VAR_0, VAR_5, VAR_4, &VAR_15->sock);
 if (VAR_18 < 0) {
  FUNC_12("UDP socket create failed\n");
  FUNC_8(VAR_15);
  return FUNC_0(VAR_18);
 }


 VAR_16 = VAR_15->sock->sk;
 FUNC_13(VAR_16, VAR_10);

 VAR_18 = FUNC_7(VAR_15->sock, (struct sockaddr *) &VAR_17,
    sizeof(VAR_17));
 if (VAR_18 < 0) {
  FUNC_12("bind for UDP socket %pI4:%u (%d)\n",
    &VAR_17.sin_addr, FUNC_11(VAR_17.sin_port), VAR_18);
  FUNC_14(VAR_16);
  FUNC_8(VAR_15);
  return FUNC_0(VAR_18);
 }
 FUNC_3(&VAR_15->refcnt, 1);
 VAR_15->rcv = VAR_12;
 VAR_15->data = VAR_13;


 FUNC_6(VAR_16)->mc_loop = 0;
 FUNC_16(&VAR_14->sock_lock);
 FUNC_4(&VAR_15->hlist, FUNC_19(VAR_10, VAR_11));
 FUNC_17(&VAR_14->sock_lock);


 FUNC_18(VAR_16)->encap_type = 1;
 FUNC_18(VAR_16)->encap_rcv = VAR_9;
 return VAR_15;
}
