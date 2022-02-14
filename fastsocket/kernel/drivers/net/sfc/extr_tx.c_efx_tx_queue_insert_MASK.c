
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {unsigned int insert_count; unsigned int ptr_mask; scalar_t__ read_count; struct efx_tx_buffer* buffer; struct efx_nic* efx; } ;
struct efx_tx_buffer {int len; int unmap_len; int flags; unsigned int dma_addr; } ;
struct efx_nic {scalar_t__ txq_entries; } ;
typedef unsigned int dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (struct efx_nic*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct efx_tx_queue *VAR_1,
    dma_addr_t VAR_2, unsigned VAR_3,
    struct efx_tx_buffer **VAR_4)
{
 struct efx_tx_buffer *VAR_5;
 struct efx_nic *VAR_6 = VAR_1->efx;
 unsigned VAR_7, VAR_8;

 FUNC_0(VAR_3 <= 0);

 while (1) {
  VAR_8 = VAR_1->insert_count & VAR_1->ptr_mask;
  VAR_5 = &VAR_1->buffer[VAR_8];
  ++VAR_1->insert_count;

  FUNC_0(VAR_1->insert_count -
        VAR_1->read_count >=
        VAR_6->txq_entries);

  FUNC_0(VAR_5->len);
  FUNC_0(VAR_5->unmap_len);
  FUNC_0(VAR_5->flags);

  VAR_5->dma_addr = VAR_2;

  VAR_7 = FUNC_1(VAR_6, VAR_2);


  if (VAR_7 >= VAR_3)
   break;

  VAR_5->len = VAR_7;
  VAR_5->flags = VAR_0;
  VAR_2 += VAR_7;
  VAR_3 -= VAR_7;
 }

 FUNC_0(!VAR_3);
 VAR_5->len = VAR_3;
 *VAR_4 = VAR_5;
}
