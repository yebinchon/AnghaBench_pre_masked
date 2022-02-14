
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u16 ;
struct rdma_ucm_query_route_resp {int num_paths; TYPE_2__* ib_route; } ;
struct rdma_dev_addr {int dst_dev_addr; int bound_dev_if; } ;
struct TYPE_3__ {struct rdma_dev_addr dev_addr; } ;
struct rdma_route {int num_paths; int * path_rec; TYPE_1__ addr; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int pkey; int sgid; int dgid; } ;


 int FUNC_0 (int) ;
 struct net_device* FUNC_1 (int *,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (struct rdma_dev_addr*,union ib_gid*) ;
 int FUNC_5 (union ib_gid*,int ,int ) ;
 int VAR_0 ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct rdma_ucm_query_route_resp *VAR_1,
     struct rdma_route *VAR_2)
{
 struct rdma_dev_addr *VAR_3;
 struct net_device *VAR_4;
 u16 VAR_5 = 0;

 VAR_1->num_paths = VAR_2->num_paths;
 switch (VAR_2->num_paths) {
 case 0:
  VAR_3 = &VAR_2->addr.dev_addr;
  VAR_4 = FUNC_1(&VAR_0, VAR_3->bound_dev_if);
   if (VAR_4) {
    VAR_5 = FUNC_6(VAR_4);
    FUNC_2(VAR_4);
   }

  FUNC_5((union ib_gid *) &VAR_1->ib_route[0].dgid,
        VAR_3->dst_dev_addr, VAR_5);
  FUNC_4(VAR_3,
       (union ib_gid *) &VAR_1->ib_route[0].sgid);
  VAR_1->ib_route[0].pkey = FUNC_0(0xffff);
  break;
 case 2:
  FUNC_3(&VAR_1->ib_route[1],
      &VAR_2->path_rec[1]);

 case 1:
  FUNC_3(&VAR_1->ib_route[0],
      &VAR_2->path_rec[0]);
  break;
 default:
  break;
 }
}
