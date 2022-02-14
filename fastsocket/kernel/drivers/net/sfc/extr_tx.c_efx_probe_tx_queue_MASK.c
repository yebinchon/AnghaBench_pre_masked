
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {unsigned int ptr_mask; int queue; int * buffer; int * tsoh_page; struct efx_nic* efx; } ;
struct efx_nic {int txq_entries; int net_dev; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct efx_tx_queue*) ;
 unsigned int FUNC_2 (struct efx_tx_queue*) ;
 void* FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct efx_nic*,int ,int ,char*,int,int ,unsigned int) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;

int FUNC_8(struct efx_tx_queue *VAR_6)
{
 struct efx_nic *VAR_7 = VAR_6->efx;
 unsigned int VAR_8;
 int VAR_9;


 VAR_8 = FUNC_5(FUNC_7(VAR_7->txq_entries), VAR_1);
 FUNC_0(VAR_8 > VAR_0);
 VAR_6->ptr_mask = VAR_8 - 1;

 FUNC_6(VAR_7, VAR_5, VAR_7->net_dev,
    "creating TX queue %d size %#x mask %#x\n",
    VAR_6->queue, VAR_7->txq_entries, VAR_6->ptr_mask);


 VAR_6->buffer = FUNC_3(VAR_8, sizeof(*VAR_6->buffer),
       VAR_4);
 if (!VAR_6->buffer)
  return -VAR_3;

 if (VAR_6->queue & VAR_2) {
  VAR_6->tsoh_page =
   FUNC_3(FUNC_2(VAR_6),
    sizeof(VAR_6->tsoh_page[0]), VAR_4);
  if (!VAR_6->tsoh_page) {
   VAR_9 = -VAR_3;
   goto fail1;
  }
 }


 VAR_9 = FUNC_1(VAR_6);
 if (VAR_9)
  goto fail2;

 return 0;

fail2:
 FUNC_4(VAR_6->tsoh_page);
 VAR_6->tsoh_page = ((void*)0);
fail1:
 FUNC_4(VAR_6->buffer);
 VAR_6->buffer = ((void*)0);
 return VAR_9;
}
