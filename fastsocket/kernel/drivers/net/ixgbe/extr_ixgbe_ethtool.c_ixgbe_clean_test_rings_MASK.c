
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ixgbe_adv_rx_desc {int dummy; } ixgbe_adv_rx_desc ;
typedef size_t u16 ;
struct ixgbe_tx_buffer {int dummy; } ;
struct ixgbe_rx_buffer {int dma; } ;
struct ixgbe_ring {size_t next_to_clean; size_t count; struct ixgbe_tx_buffer* tx_buffer_info; int dev; struct ixgbe_rx_buffer* rx_buffer_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 union ixgbe_adv_rx_desc* FUNC_0 (struct ixgbe_ring*,size_t) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct ixgbe_ring*,size_t) ;
 scalar_t__ FUNC_4 (struct ixgbe_rx_buffer*,unsigned int) ;
 int FUNC_5 (struct ixgbe_ring*) ;
 scalar_t__ FUNC_6 (union ixgbe_adv_rx_desc*,int ) ;
 int FUNC_7 (struct ixgbe_ring*,struct ixgbe_tx_buffer*) ;

__attribute__((used)) static u16 FUNC_8(struct ixgbe_ring *VAR_2,
      struct ixgbe_ring *VAR_3,
      unsigned int VAR_4)
{
 union ixgbe_adv_rx_desc *VAR_5;
 struct ixgbe_rx_buffer *VAR_6;
 struct ixgbe_tx_buffer *VAR_7;
 u16 VAR_8, VAR_9, VAR_10 = 0;


 VAR_8 = VAR_2->next_to_clean;
 VAR_9 = VAR_3->next_to_clean;
 VAR_5 = FUNC_0(VAR_2, VAR_8);

 while (FUNC_6(VAR_5, VAR_1)) {

  VAR_6 = &VAR_2->rx_buffer_info[VAR_8];


  FUNC_1(VAR_2->dev,
     VAR_6->dma,
     FUNC_5(VAR_2),
     VAR_0);


  if (FUNC_4(VAR_6, VAR_4))
   VAR_10++;


  FUNC_2(VAR_2->dev,
        VAR_6->dma,
        FUNC_5(VAR_2),
        VAR_0);


  VAR_7 = &VAR_3->tx_buffer_info[VAR_9];
  FUNC_7(VAR_3, VAR_7);


  VAR_8++;
  if (VAR_8 == VAR_2->count)
   VAR_8 = 0;
  VAR_9++;
  if (VAR_9 == VAR_3->count)
   VAR_9 = 0;


  VAR_5 = FUNC_0(VAR_2, VAR_8);
 }


 FUNC_3(VAR_2, VAR_10);
 VAR_2->next_to_clean = VAR_8;
 VAR_3->next_to_clean = VAR_9;

 return VAR_10;
}
