
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int mtu; int dev_addr; } ;
struct et131x_adapter {int RegistryJumboPacket; int Flags; int CurrentAddress; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct et131x_adapter*) ;
 int FUNC_2 (struct et131x_adapter*) ;
 int FUNC_3 (struct et131x_adapter*) ;
 int FUNC_4 (struct et131x_adapter*) ;
 int FUNC_5 (struct et131x_adapter*) ;
 int FUNC_6 (struct et131x_adapter*) ;
 int FUNC_7 (struct et131x_adapter*) ;
 int FUNC_8 (struct et131x_adapter*) ;
 int FUNC_9 (struct et131x_adapter*) ;
 int FUNC_10 (struct et131x_adapter*) ;
 int FUNC_11 (struct et131x_adapter*) ;
 int FUNC_12 (struct et131x_adapter*) ;
 int FUNC_13 (struct et131x_adapter*) ;
 int FUNC_14 (struct et131x_adapter*) ;
 int VAR_2 ;
 int FUNC_15 (int ,int ,int ) ;
 struct et131x_adapter* FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct net_device*) ;
 int FUNC_18 (struct net_device*) ;

int FUNC_19(struct net_device *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 struct et131x_adapter *VAR_6 = FUNC_16(VAR_3);


 if (VAR_4 < 64 || VAR_4 > 9216)
  return -VAR_0;


 FUNC_17(VAR_3);


 FUNC_9(VAR_6);
 FUNC_13(VAR_6);


 FUNC_4(VAR_6);
 FUNC_7(VAR_6);
 FUNC_6(VAR_6);


 VAR_3->mtu = VAR_4;


 FUNC_2(VAR_6);


 VAR_6->RegistryJumboPacket = VAR_4 + 14;
 FUNC_12(VAR_6);


 VAR_5 = FUNC_1(VAR_6);
 if (VAR_5 != 0) {
  FUNC_0(&VAR_6->pdev->dev,
   "Change MTU failed; couldn't re-alloc DMA memory\n");
  return VAR_5;
 }

 FUNC_8(VAR_6);

 FUNC_11(VAR_6);
 FUNC_15(VAR_3->dev_addr, VAR_6->CurrentAddress, VAR_1);


 FUNC_3(VAR_6);


 if (VAR_6->Flags & VAR_2)
  FUNC_5(VAR_6);


 FUNC_10(VAR_6);
 FUNC_14(VAR_6);


 FUNC_18(VAR_3);
 return VAR_5;
}
