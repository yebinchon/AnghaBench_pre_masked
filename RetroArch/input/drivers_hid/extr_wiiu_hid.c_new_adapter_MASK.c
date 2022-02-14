
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int max_packet_size_tx; int max_packet_size_rx; int interface_index; int handle; } ;
typedef TYPE_1__ wiiu_attach_event ;
struct TYPE_7__ {int connected; int tx_size; int tx_buffer; int rx_size; int rx_buffer; int interface_index; int handle; } ;
typedef TYPE_2__ wiiu_adapter_t ;


 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (int ,int *,int *) ;

__attribute__((used)) static wiiu_adapter_t *FUNC_2(wiiu_attach_event *VAR_0)
{
   wiiu_adapter_t *VAR_1 = FUNC_0(32, sizeof(wiiu_adapter_t));

   if (!VAR_1)
      return ((void*)0);

   VAR_1->handle = VAR_0->handle;
   VAR_1->interface_index = VAR_0->interface_index;
   FUNC_1(VAR_0->max_packet_size_rx, &VAR_1->rx_buffer, &VAR_1->rx_size);
   FUNC_1(VAR_0->max_packet_size_tx, &VAR_1->tx_buffer, &VAR_1->tx_size);
   VAR_1->connected = 1;

   return VAR_1;
}
