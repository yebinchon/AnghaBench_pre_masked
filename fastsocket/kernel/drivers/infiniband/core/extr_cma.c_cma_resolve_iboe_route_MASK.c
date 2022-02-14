
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int dst_dev_addr; int src_dev_addr; scalar_t__ bound_dev_if; } ;
struct rdma_addr {TYPE_2__ dev_addr; } ;
struct rdma_route {int num_paths; struct cma_work* path_rec; struct rdma_addr addr; } ;
struct TYPE_4__ {struct rdma_route route; } ;
struct rdma_id_private {int tos; TYPE_1__ id; } ;
struct net_device {int priv_flags; int mtu; } ;
struct TYPE_6__ {scalar_t__ status; int event; } ;
struct cma_work {int hop_limit; int reversible; int work; TYPE_3__ event; int new_state; int old_state; int mtu; int packet_life_time; void* packet_life_time_selector; int rate; void* rate_selector; int sl; void* mtu_selector; int pkey; int dgid; int sgid; struct rdma_id_private* id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 struct net_device* FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,int ,int ) ;
 int VAR_12 ;
 int FUNC_7 (struct cma_work*) ;
 void* FUNC_8 (int,int ) ;
 int FUNC_9 (struct net_device*,int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ) ;
 struct net_device* FUNC_13 (struct net_device*) ;

__attribute__((used)) static int FUNC_14(struct rdma_id_private *VAR_13)
{
 struct rdma_route *VAR_14 = &VAR_13->id.route;
 struct rdma_addr *VAR_15 = &VAR_14->addr;
 struct cma_work *VAR_16;
 int VAR_17;
 struct net_device *VAR_18 = ((void*)0);
 u16 VAR_19;

 VAR_16 = FUNC_8(sizeof *VAR_16, VAR_4);
 if (!VAR_16)
  return -VAR_3;

 VAR_16->id = VAR_13;
 FUNC_0(&VAR_16->work, VAR_10);

 VAR_14->path_rec = FUNC_8(sizeof *VAR_14->path_rec, VAR_4);
 if (!VAR_14->path_rec) {
  VAR_17 = -VAR_3;
  goto err1;
 }

 VAR_14->num_paths = 1;

 if (VAR_15->dev_addr.bound_dev_if)
  VAR_18 = FUNC_2(&VAR_12, VAR_15->dev_addr.bound_dev_if);
 if (!VAR_18) {
  VAR_17 = -VAR_2;
  goto err2;
 }

 VAR_19 = FUNC_11(VAR_18);

 FUNC_6(&VAR_14->path_rec->sgid, VAR_15->dev_addr.src_dev_addr, VAR_19);
 FUNC_6(&VAR_14->path_rec->dgid, VAR_15->dev_addr.dst_dev_addr, VAR_19);

 VAR_14->path_rec->hop_limit = 1;
 VAR_14->path_rec->reversible = 1;
 VAR_14->path_rec->pkey = FUNC_1(0xffff);
 VAR_14->path_rec->mtu_selector = VAR_5;
 VAR_14->path_rec->sl = FUNC_9(
   VAR_18->priv_flags & VAR_6 ?
    FUNC_13(VAR_18) : VAR_18,
   FUNC_12(VAR_13->tos));

 VAR_14->path_rec->mtu = FUNC_4(VAR_18->mtu);
 VAR_14->path_rec->rate_selector = VAR_5;
 VAR_14->path_rec->rate = FUNC_5(VAR_18);
 FUNC_3(VAR_18);
 VAR_14->path_rec->packet_life_time_selector = VAR_5;
 VAR_14->path_rec->packet_life_time = VAR_0;
 if (!VAR_14->path_rec->mtu) {
  VAR_17 = -VAR_1;
  goto err2;
 }

 VAR_16->old_state = VAR_8;
 VAR_16->new_state = VAR_9;
 VAR_16->event.event = VAR_7;
 VAR_16->event.status = 0;

 FUNC_10(VAR_11, &VAR_16->work);

 return 0;

err2:
 FUNC_7(VAR_14->path_rec);
 VAR_14->path_rec = ((void*)0);
err1:
 FUNC_7(VAR_16);
 return VAR_17;
}
