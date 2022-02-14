
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct net_device {int name; } ;
struct ixgbe_adapter {int flags; int test_icr; int hw; scalar_t__ msix_entries; TYPE_1__* pdev; struct net_device* netdev; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int,struct net_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int,int ,int ,int ,struct net_device*) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct ixgbe_adapter *VAR_8, u64 *VAR_9)
{
 struct net_device *VAR_10 = VAR_8->netdev;
 u32 VAR_11, VAR_12 = 0, VAR_13 = 1;
 u32 VAR_14 = VAR_8->pdev->irq;

 *VAR_9 = 0;


 if (VAR_8->msix_entries) {

  return 0;
 } else if (VAR_8->flags & VAR_5) {
  VAR_13 = 0;
  if (FUNC_4(VAR_14, VAR_7, 0, VAR_10->name,
    VAR_10)) {
   *VAR_9 = 1;
   return -1;
  }
 } else if (!FUNC_4(VAR_14, VAR_7, VAR_0,
                         VAR_10->name, VAR_10)) {
  VAR_13 = 0;
 } else if (FUNC_4(VAR_14, VAR_7, VAR_1,
                        VAR_10->name, VAR_10)) {
  *VAR_9 = 1;
  return -1;
 }
 FUNC_2(VAR_6, "testing %s interrupt\n", VAR_13 ?
        "shared" : "unshared");


 FUNC_1(&VAR_8->hw, VAR_3, 0xFFFFFFFF);
 FUNC_0(&VAR_8->hw);
 FUNC_5(10000, 20000);


 for (; VAR_12 < 10; VAR_12++) {

  VAR_11 = 1 << VAR_12;

  if (!VAR_13) {







   VAR_8->test_icr = 0;
   FUNC_1(&VAR_8->hw, VAR_3,
                   ~VAR_11 & 0x00007FFF);
   FUNC_1(&VAR_8->hw, VAR_2,
                   ~VAR_11 & 0x00007FFF);
   FUNC_0(&VAR_8->hw);
   FUNC_5(10000, 20000);

   if (VAR_8->test_icr & VAR_11) {
    *VAR_9 = 3;
    break;
   }
  }







  VAR_8->test_icr = 0;
  FUNC_1(&VAR_8->hw, VAR_4, VAR_11);
  FUNC_1(&VAR_8->hw, VAR_2, VAR_11);
  FUNC_0(&VAR_8->hw);
  FUNC_5(10000, 20000);

  if (!(VAR_8->test_icr &VAR_11)) {
   *VAR_9 = 4;
   break;
  }

  if (!VAR_13) {







   VAR_8->test_icr = 0;
   FUNC_1(&VAR_8->hw, VAR_3,
                   ~VAR_11 & 0x00007FFF);
   FUNC_1(&VAR_8->hw, VAR_2,
                   ~VAR_11 & 0x00007FFF);
   FUNC_0(&VAR_8->hw);
   FUNC_5(10000, 20000);

   if (VAR_8->test_icr) {
    *VAR_9 = 5;
    break;
   }
  }
 }


 FUNC_1(&VAR_8->hw, VAR_3, 0xFFFFFFFF);
 FUNC_0(&VAR_8->hw);
 FUNC_5(10000, 20000);


 FUNC_3(VAR_14, VAR_10);

 return *VAR_9;
}
