
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ixgbe_ring {int count; } ;
struct ixgbe_adapter {struct ixgbe_ring test_rx_ring; struct ixgbe_ring test_tx_ring; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct ixgbe_ring*,struct ixgbe_ring*,unsigned int) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 int FUNC_3 (struct sk_buff*,struct ixgbe_adapter*,struct ixgbe_ring*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct ixgbe_adapter *VAR_2)
{
 struct ixgbe_ring *VAR_3 = &VAR_2->test_tx_ring;
 struct ixgbe_ring *VAR_4 = &VAR_2->test_rx_ring;
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9 = 0;
 unsigned int VAR_10 = 1024;
 netdev_tx_t VAR_11;
 struct sk_buff *VAR_12;


 VAR_12 = FUNC_0(VAR_10, VAR_0);
 if (!VAR_12)
  return 11;


 FUNC_2(VAR_12, VAR_10);
 FUNC_7(VAR_12, VAR_10);







 if (VAR_4->count <= VAR_3->count)
  VAR_7 = ((VAR_3->count / 64) * 2) + 1;
 else
  VAR_7 = ((VAR_4->count / 64) * 2) + 1;

 for (VAR_6 = 0; VAR_6 <= VAR_7; VAR_6++) {

  VAR_8 = 0;


  for (VAR_5 = 0; VAR_5 < 64; VAR_5++) {
   FUNC_6(VAR_12);
   VAR_11 = FUNC_3(VAR_12,
          VAR_2,
          VAR_3);
   if (VAR_11 == VAR_1)
    VAR_8++;
  }

  if (VAR_8 != 64) {
   VAR_9 = 12;
   break;
  }


  FUNC_5(200);

  VAR_8 = FUNC_1(VAR_4, VAR_3, VAR_10);
  if (VAR_8 != 64) {
   VAR_9 = 13;
   break;
  }
 }


 FUNC_4(VAR_12);

 return VAR_9;
}
