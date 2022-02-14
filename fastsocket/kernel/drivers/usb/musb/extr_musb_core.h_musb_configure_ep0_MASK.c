
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct musb {TYPE_1__* endpoints; } ;
struct TYPE_2__ {int is_shared_fifo; void* max_packet_sz_rx; void* max_packet_sz_tx; } ;


 void* VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct musb *VAR_1)
{
 VAR_1->endpoints[0].max_packet_sz_tx = VAR_0;
 VAR_1->endpoints[0].max_packet_sz_rx = VAR_0;
 VAR_1->endpoints[0].is_shared_fifo = 1;
}
