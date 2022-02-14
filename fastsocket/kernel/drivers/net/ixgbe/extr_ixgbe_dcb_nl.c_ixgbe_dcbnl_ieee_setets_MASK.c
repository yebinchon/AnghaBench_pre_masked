
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct TYPE_5__ {scalar_t__ pg_tcs; } ;
struct TYPE_6__ {TYPE_1__ num_tcs; } ;
struct ixgbe_adapter {int dcbx_cap; int hw; TYPE_2__ dcb_cfg; TYPE_3__* ixgbe_ieee_ets; } ;
struct ieee_ets {scalar_t__* prio_tc; } ;
typedef scalar_t__ __u8 ;
struct TYPE_7__ {int* prio_tc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,struct ieee_ets*,int) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,scalar_t__) ;
 TYPE_3__* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_3__*,struct ieee_ets*,int) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 struct ixgbe_adapter* FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_7,
       struct ieee_ets *VAR_8)
{
 struct ixgbe_adapter *VAR_9 = FUNC_7(VAR_7);
 int VAR_10 = VAR_7->mtu + VAR_4 + VAR_3;
 int VAR_11, VAR_12 = 0;
 __u8 VAR_13 = 0;
 __u8 VAR_14 = 0;

 if (!(VAR_9->dcbx_cap & VAR_0))
  return -VAR_1;

 if (!VAR_9->ixgbe_ieee_ets) {
  VAR_9->ixgbe_ieee_ets = FUNC_4(sizeof(struct ieee_ets),
        VAR_5);
  if (!VAR_9->ixgbe_ieee_ets)
   return -VAR_2;


  for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
   VAR_9->ixgbe_ieee_ets->prio_tc[VAR_11] =
    VAR_6;

  FUNC_1(&VAR_9->hw,
     VAR_9->ixgbe_ieee_ets->prio_tc);
 }

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  if (VAR_8->prio_tc[VAR_11] > VAR_13)
   VAR_13 = VAR_8->prio_tc[VAR_11];
  if (VAR_8->prio_tc[VAR_11] != VAR_9->ixgbe_ieee_ets->prio_tc[VAR_11])
   VAR_14 = 1;
 }

 FUNC_5(VAR_9->ixgbe_ieee_ets, VAR_8, sizeof(*VAR_9->ixgbe_ieee_ets));

 if (VAR_13)
  VAR_13++;

 if (VAR_13 > VAR_9->dcb_cfg.num_tcs.pg_tcs)
  return -VAR_1;

 if (VAR_13 != FUNC_6(VAR_7))
  VAR_12 = FUNC_3(VAR_7, VAR_13);
 else if (VAR_14)
  FUNC_2(VAR_7);

 if (VAR_12)
  goto err_out;

 VAR_12 = FUNC_0(&VAR_9->hw, VAR_8, VAR_10);
err_out:
 return VAR_12;
}
