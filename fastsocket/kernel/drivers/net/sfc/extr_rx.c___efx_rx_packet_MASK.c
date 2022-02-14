
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct efx_rx_buffer {int flags; int len; } ;
struct efx_nic {int loopback_selftest; int rx_checksum_enabled; } ;
struct efx_channel {int rx_pkt_n_frags; TYPE_1__* type; int rx_pkt_index; int rx_queue; struct efx_nic* efx; } ;
struct TYPE_2__ {int receive_skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efx_rx_buffer*) ;
 int FUNC_1 (struct efx_nic*,int *,int ) ;
 int * FUNC_2 (struct efx_rx_buffer*) ;
 struct efx_rx_buffer* FUNC_3 (int *,int ) ;
 int FUNC_4 (struct efx_channel*,int *,struct efx_rx_buffer*,int ) ;
 int FUNC_5 (struct efx_channel*,struct efx_rx_buffer*,int ,int *) ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(struct efx_channel *VAR_2)
{
 struct efx_nic *VAR_3 = VAR_2->efx;
 struct efx_rx_buffer *VAR_4 =
  FUNC_3(&VAR_2->rx_queue, VAR_2->rx_pkt_index);
 u8 *VAR_5 = FUNC_2(VAR_4);




 if (FUNC_6(VAR_3->loopback_selftest)) {
  FUNC_1(VAR_3, VAR_5, VAR_4->len);
  FUNC_0(VAR_4);
  goto out;
 }

 if (FUNC_6(!VAR_3->rx_checksum_enabled))
  VAR_4->flags &= ~VAR_0;

 if ((VAR_4->flags & VAR_1) && !VAR_2->type->receive_skb)
  FUNC_5(VAR_2, VAR_4, VAR_2->rx_pkt_n_frags, VAR_5);
 else
  FUNC_4(VAR_2, VAR_5, VAR_4, VAR_2->rx_pkt_n_frags);
out:
 VAR_2->rx_pkt_n_frags = 0;
}
