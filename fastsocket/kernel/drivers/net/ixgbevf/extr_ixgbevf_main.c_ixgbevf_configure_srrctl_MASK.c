
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbevf_ring {int rx_buf_len; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbevf_adapter {struct ixgbevf_ring* rx_ring; struct ixgbe_hw hw; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ixgbevf_adapter *VAR_3, int VAR_4)
{
 struct ixgbevf_ring *VAR_5;
 struct ixgbe_hw *VAR_6 = &VAR_3->hw;
 u32 VAR_7;

 VAR_5 = &VAR_3->rx_ring[VAR_4];

 VAR_7 = VAR_2;

 VAR_7 |= VAR_1;

 VAR_7 |= FUNC_0(VAR_5->rx_buf_len, 1024) >>
    VAR_0;

 FUNC_2(VAR_6, FUNC_1(VAR_4), VAR_7);
}
