
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_mac_info {int max_msix_vectors; int max_tx_queues; int max_rx_queues; int num_rar_entries; int vft_size; int mcft_size; } ;
struct ixgbe_hw {struct ixgbe_mac_info mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_5)
{
 struct ixgbe_mac_info *VAR_6 = &VAR_5->mac;


 FUNC_1(VAR_5);

 VAR_6->mcft_size = VAR_2;
 VAR_6->vft_size = VAR_4;
 VAR_6->num_rar_entries = VAR_3;
 VAR_6->max_rx_queues = VAR_0;
 VAR_6->max_tx_queues = VAR_1;
 VAR_6->max_msix_vectors = FUNC_0(VAR_5);

 return 0;
}
