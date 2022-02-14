
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {void* s_addr; } ;
struct sockaddr_in {TYPE_3__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_13__ {int neighbour; } ;
struct TYPE_14__ {TYPE_5__ dst; } ;
struct rtable {TYPE_6__ u; TYPE_4__* idev; int rt_gateway; void* rt_src; } ;
struct rdma_dev_addr {int src_dev_addr; int dst_dev_addr; int bound_dev_if; } ;
struct neighbour {int nud_state; int * ha; TYPE_7__* dev; } ;
struct TYPE_9__ {void* saddr; void* daddr; } ;
struct TYPE_10__ {TYPE_1__ ip4_u; } ;
struct flowi {int oif; TYPE_2__ nl_u; } ;
typedef void* __be32 ;
struct TYPE_15__ {int flags; } ;
struct TYPE_12__ {TYPE_7__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,struct rtable**,struct flowi*) ;
 int FUNC_1 (struct rtable*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct flowi*,int ,int) ;
 int FUNC_4 (int ,int *) ;
 struct neighbour* FUNC_5 (int *,int *,TYPE_7__*) ;
 int FUNC_6 (struct neighbour*) ;
 int FUNC_7 (struct rdma_dev_addr*,TYPE_7__*,int *) ;
 int FUNC_8 (struct sockaddr*,struct rdma_dev_addr*) ;

__attribute__((used)) static int FUNC_9(struct sockaddr_in *VAR_8,
    struct sockaddr_in *VAR_9,
    struct rdma_dev_addr *VAR_10)
{
 __be32 VAR_11 = VAR_8->sin_addr.s_addr;
 __be32 VAR_12 = VAR_9->sin_addr.s_addr;
 struct flowi VAR_13;
 struct rtable *VAR_14;
 struct neighbour *VAR_15;
 int VAR_16;

 FUNC_3(&VAR_13, 0, sizeof VAR_13);
 VAR_13.nl_u.ip4_u.daddr = VAR_12;
 VAR_13.nl_u.ip4_u.saddr = VAR_11;
 VAR_13.oif = VAR_10->bound_dev_if;

 VAR_16 = FUNC_0(&VAR_7, &VAR_14, &VAR_13);
 if (VAR_16)
  goto out;

 VAR_8->sin_family = VAR_0;
 VAR_8->sin_addr.s_addr = VAR_14->rt_src;

 if (VAR_14->idev->dev->flags & VAR_2) {
  VAR_16 = FUNC_8((struct sockaddr *) VAR_9, VAR_10);
  if (!VAR_16)
   FUNC_2(VAR_10->dst_dev_addr, VAR_10->src_dev_addr, VAR_4);
  goto put;
 }


 if (VAR_14->idev->dev->flags & VAR_3) {
  FUNC_7(VAR_10, VAR_14->idev->dev, ((void*)0));
  goto put;
 }

 VAR_15 = FUNC_5(&VAR_6, &VAR_14->rt_gateway, VAR_14->idev->dev);
 if (!VAR_15 || !(VAR_15->nud_state & VAR_5)) {
  FUNC_4(VAR_14->u.dst.neighbour, ((void*)0));
  VAR_16 = -VAR_1;
  if (VAR_15)
   goto release;
  goto put;
 }

 VAR_16 = FUNC_7(VAR_10, VAR_15->dev, VAR_15->ha);
release:
 FUNC_6(VAR_15);
put:
 FUNC_1(VAR_14);
out:
 return VAR_16;
}
