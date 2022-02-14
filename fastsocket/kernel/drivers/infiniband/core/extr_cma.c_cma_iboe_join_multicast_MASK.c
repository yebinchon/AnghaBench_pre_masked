
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct rdma_dev_addr {scalar_t__ bound_dev_if; } ;
struct TYPE_6__ {struct rdma_dev_addr dev_addr; } ;
struct TYPE_7__ {TYPE_1__ addr; } ;
struct TYPE_8__ {scalar_t__ ps; TYPE_2__ route; } ;
struct rdma_id_private {TYPE_3__ id; } ;
struct net_device {int mtu; } ;
struct TYPE_9__ {int hop_limit; int port_gid; int mtu; int rate; int qkey; int pkey; int mgid; } ;
struct iboe_mcast_work {int work; struct cma_multicast* mc; struct rdma_id_private* id; TYPE_4__ rec; } ;
struct ib_sa_multicast {int dummy; } ;
struct TYPE_10__ {struct iboe_mcast_work* ib; } ;
struct cma_multicast {TYPE_5__ multicast; int mcref; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sockaddr*,int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct sockaddr*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 struct net_device* FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct rdma_dev_addr*,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct net_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (struct iboe_mcast_work*) ;
 int FUNC_11 (int *) ;
 void* FUNC_12 (int,int ) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct rdma_id_private *VAR_9,
       struct cma_multicast *VAR_10)
{
 struct iboe_mcast_work *VAR_11;
 struct rdma_dev_addr *VAR_12 = &VAR_9->id.route.addr.dev_addr;
 int VAR_13;
 struct sockaddr *VAR_14 = (struct sockaddr *)&VAR_10->addr;
 struct net_device *VAR_15 = ((void*)0);

 if (FUNC_2((struct sockaddr *)&VAR_10->addr))
  return -VAR_0;

 VAR_11 = FUNC_12(sizeof *VAR_11, VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_10->multicast.ib = FUNC_12(sizeof(struct ib_sa_multicast), VAR_3);
 if (!VAR_10->multicast.ib) {
  VAR_13 = -VAR_2;
  goto out1;
 }

 FUNC_1(VAR_14, &VAR_10->multicast.ib->rec.mgid);

 VAR_10->multicast.ib->rec.pkey = FUNC_3(0xffff);
 if (VAR_9->id.ps == VAR_4)
  VAR_10->multicast.ib->rec.qkey = FUNC_4(VAR_5);

 if (VAR_12->bound_dev_if)
  VAR_15 = FUNC_5(&VAR_8, VAR_12->bound_dev_if);
 if (!VAR_15) {
  VAR_13 = -VAR_1;
  goto out2;
 }
 VAR_10->multicast.ib->rec.rate = FUNC_9(VAR_15);
 VAR_10->multicast.ib->rec.hop_limit = 1;
 VAR_10->multicast.ib->rec.mtu = FUNC_8(VAR_15->mtu);
 FUNC_6(VAR_15);
 if (!VAR_10->multicast.ib->rec.mtu) {
  VAR_13 = -VAR_0;
  goto out2;
 }
 FUNC_7(VAR_12, &VAR_10->multicast.ib->rec.port_gid);
 VAR_11->id = VAR_9;
 VAR_11->mc = VAR_10;
 FUNC_0(&VAR_11->work, VAR_7);
 FUNC_11(&VAR_10->mcref);
 FUNC_13(VAR_6, &VAR_11->work);

 return 0;

out2:
 FUNC_10(VAR_10->multicast.ib);
out1:
 FUNC_10(VAR_11);
 return VAR_13;
}
