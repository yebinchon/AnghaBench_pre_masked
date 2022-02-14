
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct net_device {int name; } ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {int test_icr; struct e1000_hw hw; TYPE_1__* pdev; struct net_device* netdev; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct e1000_hw*,char*,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,struct net_device*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct e1000_adapter *VAR_6, u64 *VAR_7)
{
 struct net_device *VAR_8 = VAR_6->netdev;
 u32 VAR_9, VAR_10 = 0;
 bool VAR_11 = 1;
 u32 VAR_12 = VAR_6->pdev->irq;
 struct e1000_hw *VAR_13 = &VAR_6->hw;

 *VAR_7 = 0;



 if (!FUNC_5(VAR_12, VAR_5, VAR_3, VAR_8->name,
                  VAR_8))
  VAR_11 = 0;
 else if (FUNC_5(VAR_12, VAR_5, VAR_4,
          VAR_8->name, VAR_8)) {
  *VAR_7 = 1;
  return -1;
 }
 FUNC_1(VAR_13, "testing %s interrupt\n", (VAR_11 ?
        "shared" : "unshared"));


 FUNC_2(VAR_1, 0xFFFFFFFF);
 FUNC_0();
 FUNC_4(10);


 for (; VAR_10 < 10; VAR_10++) {


  VAR_9 = 1 << VAR_10;

  if (!VAR_11) {






   VAR_6->test_icr = 0;
   FUNC_2(VAR_1, VAR_9);
   FUNC_2(VAR_0, VAR_9);
   FUNC_0();
   FUNC_4(10);

   if (VAR_6->test_icr & VAR_9) {
    *VAR_7 = 3;
    break;
   }
  }







  VAR_6->test_icr = 0;
  FUNC_2(VAR_2, VAR_9);
  FUNC_2(VAR_0, VAR_9);
  FUNC_0();
  FUNC_4(10);

  if (!(VAR_6->test_icr & VAR_9)) {
   *VAR_7 = 4;
   break;
  }

  if (!VAR_11) {






   VAR_6->test_icr = 0;
   FUNC_2(VAR_1, ~VAR_9 & 0x00007FFF);
   FUNC_2(VAR_0, ~VAR_9 & 0x00007FFF);
   FUNC_0();
   FUNC_4(10);

   if (VAR_6->test_icr) {
    *VAR_7 = 5;
    break;
   }
  }
 }


 FUNC_2(VAR_1, 0xFFFFFFFF);
 FUNC_0();
 FUNC_4(10);


 FUNC_3(VAR_12, VAR_8);

 return *VAR_7;
}
