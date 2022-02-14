
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct net_device {int name; } ;
struct TYPE_5__ {int type; } ;
struct e1000_hw {TYPE_2__ mac; } ;
struct igb_adapter {int flags; int test_icr; TYPE_3__* msix_entries; TYPE_1__* pdev; struct net_device* netdev; struct e1000_hw hw; } ;
struct TYPE_6__ {int vector; } ;
struct TYPE_4__ {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,char*) ;







 int FUNC_1 (int,struct igb_adapter*) ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ,int ,int ,struct igb_adapter*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct igb_adapter *VAR_8, u64 *VAR_9)
{
 struct e1000_hw *VAR_10 = &VAR_8->hw;
 struct net_device *VAR_11 = VAR_8->netdev;
 u32 VAR_12, VAR_13, VAR_14 = 0, VAR_15 = 1;
 u32 VAR_16 = VAR_8->pdev->irq;

 *VAR_9 = 0;


 if (VAR_8->msix_entries) {
  if (FUNC_3(VAR_8->msix_entries[0].vector,
                  VAR_7, 0, VAR_11->name, VAR_8)) {
   *VAR_9 = 1;
   return -1;
  }
 } else if (VAR_8->flags & VAR_4) {
  VAR_15 = 0;
  if (FUNC_3(VAR_16,
                  VAR_7, 0, VAR_11->name, VAR_8)) {
   *VAR_9 = 1;
   return -1;
  }
 } else if (!FUNC_3(VAR_16, VAR_7, VAR_5,
    VAR_11->name, VAR_8)) {
  VAR_15 = 0;
 } else if (FUNC_3(VAR_16, VAR_7, VAR_6,
   VAR_11->name, VAR_8)) {
  *VAR_9 = 1;
  return -1;
 }
 FUNC_0(&VAR_8->pdev->dev, "testing %s interrupt\n",
  (VAR_15 ? "shared" : "unshared"));


 FUNC_4(VAR_2, ~0);
 FUNC_5();
 FUNC_2(10);


 switch (VAR_10->mac.type) {
 case 134:
  VAR_13 = 0x37F47EDD;
  break;
 case 133:
  VAR_13 = 0x77D4FBFD;
  break;
 case 132:
  VAR_13 = 0x77DCFED5;
  break;
 case 129:
 case 128:
 case 131:
 case 130:
  VAR_13 = 0x77DCFED5;
  break;
 default:
  VAR_13 = 0x7FFFFFFF;
  break;
 }


 for (; VAR_14 < 31; VAR_14++) {

  VAR_12 = 1 << VAR_14;

  if (!(VAR_12 & VAR_13))
   continue;

  if (!VAR_15) {






   VAR_8->test_icr = 0;


   FUNC_4(VAR_0, ~0);

   FUNC_4(VAR_2, VAR_12);
   FUNC_4(VAR_1, VAR_12);
   FUNC_5();
   FUNC_2(10);

   if (VAR_8->test_icr & VAR_12) {
    *VAR_9 = 3;
    break;
   }
  }







  VAR_8->test_icr = 0;


  FUNC_4(VAR_0, ~0);

  FUNC_4(VAR_3, VAR_12);
  FUNC_4(VAR_1, VAR_12);
  FUNC_5();
  FUNC_2(10);

  if (!(VAR_8->test_icr & VAR_12)) {
   *VAR_9 = 4;
   break;
  }

  if (!VAR_15) {






   VAR_8->test_icr = 0;


   FUNC_4(VAR_0, ~0);

   FUNC_4(VAR_2, ~VAR_12);
   FUNC_4(VAR_1, ~VAR_12);
   FUNC_5();
   FUNC_2(10);

   if (VAR_8->test_icr & VAR_12) {
    *VAR_9 = 5;
    break;
   }
  }
 }


 FUNC_4(VAR_2, ~0);
 FUNC_5();
 FUNC_2(10);


 if (VAR_8->msix_entries)
  FUNC_1(VAR_8->msix_entries[0].vector, VAR_8);
 else
  FUNC_1(VAR_16, VAR_8);

 return *VAR_9;
}
