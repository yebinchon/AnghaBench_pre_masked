
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {unsigned int ptr_mask; unsigned int read_count; int queue; struct efx_tx_buffer* buffer; struct efx_nic* efx; } ;
struct efx_tx_buffer {scalar_t__ len; } ;
struct efx_nic {int net_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct efx_tx_queue*,struct efx_tx_buffer*) ;
 int FUNC_1 (struct efx_nic*,int ) ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*,int ,unsigned int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct efx_tx_queue *VAR_2,
    unsigned int VAR_3)
{
 struct efx_nic *VAR_4 = VAR_2->efx;
 unsigned int VAR_5, VAR_6;

 VAR_5 = (VAR_3 + 1) & VAR_2->ptr_mask;
 VAR_6 = VAR_2->read_count & VAR_2->ptr_mask;

 while (VAR_6 != VAR_5) {
  struct efx_tx_buffer *VAR_7 = &VAR_2->buffer[VAR_6];
  if (FUNC_3(VAR_7->len == 0)) {
   FUNC_2(VAR_4, VAR_1, VAR_4->net_dev,
      "TX queue %d spurious TX completion id %x\n",
      VAR_2->queue, VAR_6);
   FUNC_1(VAR_4, VAR_0);
   return;
  }

  FUNC_0(VAR_2, VAR_7);

  ++VAR_2->read_count;
  VAR_6 = VAR_2->read_count & VAR_2->ptr_mask;
 }
}
