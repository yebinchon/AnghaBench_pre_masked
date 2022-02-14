
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_tx_buffer {int * skb; int * next_to_watch; } ;
struct ixgbe_ring {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbe_tx_buffer*,int ) ;
 scalar_t__ FUNC_2 (struct ixgbe_tx_buffer*,int ) ;
 int FUNC_3 (struct ixgbe_tx_buffer*,int ,int ) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;
 int FUNC_5 (int ,int ,scalar_t__,int ) ;
 int VAR_2 ;

void FUNC_6(struct ixgbe_ring *VAR_3,
          struct ixgbe_tx_buffer *VAR_4)
{
 if (VAR_4->skb) {
  FUNC_0(VAR_4->skb);
  if (FUNC_2(VAR_4, VAR_2))
   FUNC_5(VAR_3->dev,
      FUNC_1(VAR_4, VAR_1),
      FUNC_2(VAR_4, VAR_2),
      VAR_0);
 } else if (FUNC_2(VAR_4, VAR_2)) {
  FUNC_4(VAR_3->dev,
          FUNC_1(VAR_4, VAR_1),
          FUNC_2(VAR_4, VAR_2),
          VAR_0);
 }
 VAR_4->next_to_watch = ((void*)0);
 VAR_4->skb = ((void*)0);
 FUNC_3(VAR_4, VAR_2, 0);

}
