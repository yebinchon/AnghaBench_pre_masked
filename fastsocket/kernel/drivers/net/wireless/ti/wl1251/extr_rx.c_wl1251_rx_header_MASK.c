
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wl1251_rx_descriptor {int dummy; } ;
struct wl1251 {TYPE_1__* data_path; scalar_t__ rx_current_buffer; } ;
struct TYPE_2__ {scalar_t__ rx_packet_ring_chunk_size; int rx_packet_ring_addr; } ;


 int FUNC_0 (struct wl1251*,int ,struct wl1251_rx_descriptor*,int) ;

__attribute__((used)) static void FUNC_1(struct wl1251 *VAR_0,
        struct wl1251_rx_descriptor *VAR_1)
{
 u32 VAR_2;

 VAR_2 = VAR_0->data_path->rx_packet_ring_addr;
 if (VAR_0->rx_current_buffer)
  VAR_2 += VAR_0->data_path->rx_packet_ring_chunk_size;

 FUNC_0(VAR_0, VAR_2, VAR_1, sizeof(*VAR_1));
}
