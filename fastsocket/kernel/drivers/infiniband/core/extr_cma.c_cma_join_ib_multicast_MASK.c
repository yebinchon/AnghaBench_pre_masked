
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct rdma_dev_addr {int dummy; } ;
struct TYPE_5__ {struct rdma_dev_addr dev_addr; } ;
struct TYPE_6__ {TYPE_1__ addr; } ;
struct TYPE_7__ {scalar_t__ ps; int port_num; int device; TYPE_2__ route; } ;
struct rdma_id_private {TYPE_3__ id; int qkey; } ;
struct ib_sa_mcmember_rec {int join_state; int pkey; int port_gid; int qkey; int mgid; } ;
struct TYPE_8__ {int ib; } ;
struct cma_multicast {TYPE_4__ multicast; int addr; } ;
typedef int ib_sa_comp_mask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct rdma_id_private*,struct sockaddr*,int *) ;
 int FUNC_3 (struct rdma_id_private*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct rdma_dev_addr*,int *) ;
 int FUNC_7 (struct rdma_dev_addr*) ;
 int FUNC_8 (int ,int ,int *,struct ib_sa_mcmember_rec*) ;
 int FUNC_9 (int *,int ,int ,struct ib_sa_mcmember_rec*,int,int ,int ,struct cma_multicast*) ;
 int FUNC_10 (struct rdma_dev_addr*,int *) ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_11(struct rdma_id_private *VAR_17,
     struct cma_multicast *VAR_18)
{
 struct ib_sa_mcmember_rec VAR_19;
 struct rdma_dev_addr *VAR_20 = &VAR_17->id.route.addr.dev_addr;
 ib_sa_comp_mask VAR_21;
 int VAR_22;

 FUNC_6(VAR_20, &VAR_19.mgid);
 VAR_22 = FUNC_8(VAR_17->id.device, VAR_17->id.port_num,
         &VAR_19.mgid, &VAR_19);
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_3(VAR_17, 0);
 if (VAR_22)
  return VAR_22;

 FUNC_2(VAR_17, (struct sockaddr *) &VAR_18->addr, &VAR_19.mgid);
 VAR_19.qkey = FUNC_5(VAR_17->qkey);
 FUNC_10(VAR_20, &VAR_19.port_gid);
 VAR_19.pkey = FUNC_4(FUNC_7(VAR_20));
 VAR_19.join_state = 1;

 VAR_21 = VAR_4 | VAR_8 |
      VAR_7 | VAR_3 |
      VAR_9 | VAR_12 |
      VAR_1 |
      VAR_13;

 if (VAR_17->id.ps == VAR_14)
  VAR_21 |= VAR_10 |
        VAR_11 |
        VAR_6 |
        VAR_5 |
        VAR_2;

 VAR_18->multicast.ib = FUNC_9(&VAR_16, VAR_17->id.device,
      VAR_17->id.port_num, &VAR_19,
      VAR_21, VAR_0,
      VAR_15, VAR_18);
 if (FUNC_0(VAR_18->multicast.ib))
  return FUNC_1(VAR_18->multicast.ib);

 return 0;
}
