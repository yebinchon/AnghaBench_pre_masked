
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct net_device {int dummy; } ;
struct ixgbe_fcoe_ddp {int len; int * pool; int udp; int udl; int sgc; scalar_t__ sgl; scalar_t__ err; } ;
struct ixgbe_fcoe {int lock; struct ixgbe_fcoe_ddp* ddp; } ;
struct ixgbe_adapter {TYPE_1__* pdev; int hw; struct ixgbe_fcoe fcoe; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,scalar_t__,int ,int ) ;
 int FUNC_4 (struct ixgbe_fcoe_ddp*) ;
 struct ixgbe_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;

int FUNC_9(struct net_device *VAR_10, u16 VAR_11)
{
 int VAR_12 = 0;
 struct ixgbe_fcoe *VAR_13;
 struct ixgbe_adapter *VAR_14;
 struct ixgbe_fcoe_ddp *VAR_15;
 u32 VAR_16;

 if (!VAR_10)
  goto out_ddp_put;

 if (VAR_11 >= VAR_9)
  goto out_ddp_put;

 VAR_14 = FUNC_5(VAR_10);
 VAR_13 = &VAR_14->fcoe;
 VAR_15 = &VAR_13->ddp[VAR_11];
 if (!VAR_15->udl)
  goto out_ddp_put;

 VAR_12 = VAR_15->len;

 if (VAR_15->err) {
  FUNC_6(&VAR_13->lock);
  FUNC_1(&VAR_14->hw, VAR_6, 0);
  FUNC_1(&VAR_14->hw, VAR_7,
    (VAR_11 | VAR_8));
  FUNC_1(&VAR_14->hw, VAR_1, 0);
  FUNC_1(&VAR_14->hw, VAR_3,
    (VAR_11 | VAR_5));


  FUNC_1(&VAR_14->hw, VAR_3,
    (VAR_11 | VAR_4));
  VAR_16 = FUNC_0(&VAR_14->hw, VAR_1);
  FUNC_7(&VAR_13->lock);
  if (VAR_16 & VAR_2)
   FUNC_8(100);
 }
 if (VAR_15->sgl)
  FUNC_3(&VAR_14->pdev->dev, VAR_15->sgl, VAR_15->sgc,
        VAR_0);
 if (VAR_15->pool) {
  FUNC_2(VAR_15->pool, VAR_15->udl, VAR_15->udp);
  VAR_15->pool = ((void*)0);
 }

 FUNC_4(VAR_15);

out_ddp_put:
 return VAR_12;
}
