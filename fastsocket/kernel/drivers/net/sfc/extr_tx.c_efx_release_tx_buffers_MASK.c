
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {size_t read_count; size_t write_count; size_t ptr_mask; struct efx_tx_buffer* buffer; } ;
struct efx_tx_buffer {int dummy; } ;


 int FUNC_0 (struct efx_tx_queue*,struct efx_tx_buffer*) ;

void FUNC_1(struct efx_tx_queue *VAR_0)
{
 struct efx_tx_buffer *VAR_1;

 if (!VAR_0->buffer)
  return;


 while (VAR_0->read_count != VAR_0->write_count) {
  VAR_1 = &VAR_0->buffer[VAR_0->read_count & VAR_0->ptr_mask];
  FUNC_0(VAR_0, VAR_1);

  ++VAR_0->read_count;
 }
}
