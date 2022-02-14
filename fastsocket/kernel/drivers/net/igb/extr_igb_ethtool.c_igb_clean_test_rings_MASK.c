
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union e1000_adv_rx_desc {int dummy; } e1000_adv_rx_desc ;
typedef size_t u16 ;
struct igb_tx_buffer {int dummy; } ;
struct igb_rx_buffer {int dma; } ;
struct igb_ring {size_t next_to_clean; size_t count; struct igb_tx_buffer* tx_buffer_info; int dev; struct igb_rx_buffer* rx_buffer_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 union e1000_adv_rx_desc* FUNC_0 (struct igb_ring*,size_t) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct igb_ring*,size_t) ;
 scalar_t__ FUNC_4 (struct igb_rx_buffer*,unsigned int) ;
 scalar_t__ FUNC_5 (union e1000_adv_rx_desc*,int ) ;
 int FUNC_6 (struct igb_ring*,struct igb_tx_buffer*) ;

__attribute__((used)) static int FUNC_7(struct igb_ring *VAR_3,
    struct igb_ring *VAR_4,
    unsigned int VAR_5)
{
 union e1000_adv_rx_desc *VAR_6;
 struct igb_rx_buffer *VAR_7;
 struct igb_tx_buffer *VAR_8;
 u16 VAR_9, VAR_10, VAR_11 = 0;


 VAR_9 = VAR_3->next_to_clean;
 VAR_10 = VAR_4->next_to_clean;
 VAR_6 = FUNC_0(VAR_3, VAR_9);

 while (FUNC_5(VAR_6, VAR_1)) {

  VAR_7 = &VAR_3->rx_buffer_info[VAR_9];


  FUNC_1(VAR_3->dev,
     VAR_7->dma,
     VAR_2,
     VAR_0);


  if (FUNC_4(VAR_7, VAR_5))
   VAR_11++;


  FUNC_2(VAR_3->dev,
        VAR_7->dma,
        VAR_2,
        VAR_0);


  VAR_8 = &VAR_4->tx_buffer_info[VAR_10];
  FUNC_6(VAR_4, VAR_8);


  VAR_9++;
  if (VAR_9 == VAR_3->count)
   VAR_9 = 0;
  VAR_10++;
  if (VAR_10 == VAR_4->count)
   VAR_10 = 0;


  VAR_6 = FUNC_0(VAR_3, VAR_9);
 }


 FUNC_3(VAR_3, VAR_11);
 VAR_3->next_to_clean = VAR_9;
 VAR_4->next_to_clean = VAR_10;

 return VAR_11;
}
