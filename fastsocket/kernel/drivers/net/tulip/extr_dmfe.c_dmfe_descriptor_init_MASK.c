
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_desc {unsigned char* tx_buf_ptr; struct tx_desc* next_tx_desc; void* tdes3; void* tdes2; void* tdes1; void* tdes0; } ;
struct rx_desc {struct rx_desc* next_rx_desc; void* rdes3; void* rdes1; void* rdes0; } ;
struct dmfe_board_info {int first_tx_desc_dma; int first_rx_desc_dma; unsigned char* buf_pool_start; int buf_pool_dma_start; struct rx_desc* first_rx_desc; struct tx_desc* first_tx_desc; struct rx_desc* rx_ready_ptr; struct rx_desc* rx_insert_ptr; struct tx_desc* tx_remove_ptr; struct tx_desc* tx_insert_ptr; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct dmfe_board_info*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct dmfe_board_info *VAR_5, unsigned long VAR_6)
{
 struct tx_desc *VAR_7;
 struct rx_desc *VAR_8;
 unsigned char *VAR_9;
 dma_addr_t VAR_10, VAR_11;
 dma_addr_t VAR_12;
 int VAR_13;

 FUNC_0(0, "dmfe_descriptor_init()", 0);


 VAR_5->tx_insert_ptr = VAR_5->first_tx_desc;
 VAR_5->tx_remove_ptr = VAR_5->first_tx_desc;
 FUNC_3(VAR_5->first_tx_desc_dma, VAR_6 + VAR_1);


 VAR_5->first_rx_desc = (void *)VAR_5->first_tx_desc +
   sizeof(struct tx_desc) * VAR_4;

 VAR_5->first_rx_desc_dma = VAR_5->first_tx_desc_dma +
   sizeof(struct tx_desc) * VAR_4;
 VAR_5->rx_insert_ptr = VAR_5->first_rx_desc;
 VAR_5->rx_ready_ptr = VAR_5->first_rx_desc;
 FUNC_3(VAR_5->first_rx_desc_dma, VAR_6 + VAR_0);


 VAR_9 = VAR_5->buf_pool_start;
 VAR_12 = VAR_5->buf_pool_dma_start;
 VAR_10 = VAR_5->first_tx_desc_dma;
 for (VAR_7 = VAR_5->first_tx_desc, VAR_13 = 0; VAR_13 < VAR_4; VAR_13++, VAR_7++) {
  VAR_7->tx_buf_ptr = VAR_9;
  VAR_7->tdes0 = FUNC_2(0);
  VAR_7->tdes1 = FUNC_2(0x81000000);
  VAR_7->tdes2 = FUNC_2(VAR_12);
  VAR_10 += sizeof(struct tx_desc);
  VAR_7->tdes3 = FUNC_2(VAR_10);
  VAR_7->next_tx_desc = VAR_7 + 1;
  VAR_9 = VAR_9 + VAR_3;
  VAR_12 = VAR_12 + VAR_3;
 }
 (--VAR_7)->tdes3 = FUNC_2(VAR_5->first_tx_desc_dma);
 VAR_7->next_tx_desc = VAR_5->first_tx_desc;


 VAR_11=VAR_5->first_rx_desc_dma;
 for (VAR_8 = VAR_5->first_rx_desc, VAR_13 = 0; VAR_13 < VAR_2; VAR_13++, VAR_8++) {
  VAR_8->rdes0 = FUNC_2(0);
  VAR_8->rdes1 = FUNC_2(0x01000600);
  VAR_11 += sizeof(struct rx_desc);
  VAR_8->rdes3 = FUNC_2(VAR_11);
  VAR_8->next_rx_desc = VAR_8 + 1;
 }
 (--VAR_8)->rdes3 = FUNC_2(VAR_5->first_rx_desc_dma);
 VAR_8->next_rx_desc = VAR_5->first_rx_desc;


 FUNC_1(VAR_5);
}
