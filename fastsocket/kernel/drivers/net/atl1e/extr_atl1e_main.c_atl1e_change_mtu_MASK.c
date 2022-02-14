
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct TYPE_4__ {int max_frame_size; int rx_jumbo_th; } ;
struct atl1e_adapter {int flags; TYPE_2__ hw; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct atl1e_adapter*) ;
 int FUNC_1 (struct atl1e_adapter*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int) ;
 struct atl1e_adapter* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_7, int VAR_8)
{
 struct atl1e_adapter *VAR_9 = FUNC_5(VAR_7);
 int VAR_10 = VAR_7->mtu;
 int VAR_11 = VAR_8 + VAR_2 + VAR_1 + VAR_5;

 if ((VAR_11 < VAR_3 + VAR_1) ||
   (VAR_11 > VAR_4)) {
  FUNC_3(&VAR_9->pdev->dev, "invalid MTU setting\n");
  return -VAR_0;
 }

 if (VAR_10 != VAR_8 && FUNC_6(VAR_7)) {
  while (FUNC_7(VAR_6, &VAR_9->flags))
   FUNC_4(1);
  VAR_7->mtu = VAR_8;
  VAR_9->hw.max_frame_size = VAR_8;
  VAR_9->hw.rx_jumbo_th = (VAR_11 + 7) >> 3;
  FUNC_0(VAR_9);
  FUNC_1(VAR_9);
  FUNC_2(VAR_6, &VAR_9->flags);
 }
 return 0;
}
