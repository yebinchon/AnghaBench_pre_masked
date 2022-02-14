
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sky2_port {unsigned int port; struct sky2_hw* hw; } ;
struct sky2_hw {scalar_t__ chip_id; int flags; int napi; TYPE_1__* pdev; } ;
struct net_device {int mtu; int trans_start; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sky2_hw*,unsigned int,int ) ;
 int FUNC_5 (struct sky2_hw*,unsigned int,int ,int) ;
 int VAR_18 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct sky2_port* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int * VAR_19 ;
 int FUNC_12 (struct sky2_hw*,int ) ;
 int FUNC_13 (struct sky2_port*) ;
 int FUNC_14 (struct sky2_port*) ;
 int FUNC_15 (struct sky2_port*) ;
 int FUNC_16 (struct sky2_hw*,unsigned int) ;
 int FUNC_17 (struct sky2_hw*,int ,int ) ;
 int FUNC_18 (struct sky2_hw*,int ,int ) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static int FUNC_20(struct net_device *VAR_20, int VAR_21)
{
 struct sky2_port *VAR_22 = FUNC_8(VAR_20);
 struct sky2_hw *VAR_23 = VAR_22->hw;
 unsigned VAR_24 = VAR_22->port;
 int VAR_25;
 u16 VAR_26, VAR_27;
 u32 VAR_28;

 if (VAR_21 < VAR_8 || VAR_21 > VAR_7)
  return -VAR_5;

 if (VAR_21 > VAR_6 &&
     (VAR_23->chip_id == VAR_2 ||
      VAR_23->chip_id == VAR_3))
  return -VAR_5;

 if (!FUNC_9(VAR_20)) {
  VAR_20->mtu = VAR_21;
  return 0;
 }

 VAR_28 = FUNC_12(VAR_23, VAR_0);
 FUNC_17(VAR_23, VAR_0, 0);

 VAR_20->trans_start = VAR_18;
 FUNC_10(VAR_20);
 FUNC_6(&VAR_23->napi);

 FUNC_19(VAR_23->pdev->irq);

 if (!(VAR_23->flags & VAR_17))
  FUNC_16(VAR_23, VAR_24);

 VAR_26 = FUNC_4(VAR_23, VAR_24, VAR_10);
 FUNC_5(VAR_23, VAR_24, VAR_10, VAR_26 & ~VAR_9);
 FUNC_15(VAR_22);
 FUNC_13(VAR_22);

 VAR_20->mtu = VAR_21;

 VAR_27 = FUNC_0(VAR_4) |
  VAR_13 | FUNC_1(VAR_14);

 if (VAR_20->mtu > VAR_6)
  VAR_27 |= VAR_12;

 FUNC_5(VAR_23, VAR_24, VAR_11, VAR_27);

 FUNC_18(VAR_23, FUNC_2(VAR_19[VAR_24], VAR_15), VAR_16);

 VAR_25 = FUNC_14(VAR_22);
 FUNC_17(VAR_23, VAR_0, VAR_28);

 FUNC_12(VAR_23, VAR_1);
 FUNC_7(&VAR_23->napi);

 if (VAR_25)
  FUNC_3(VAR_20);
 else {
  FUNC_5(VAR_23, VAR_24, VAR_10, VAR_26);

  FUNC_11(VAR_20);
 }

 return VAR_25;
}
