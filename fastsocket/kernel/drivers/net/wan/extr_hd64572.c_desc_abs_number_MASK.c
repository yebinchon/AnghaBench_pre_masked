
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int chan; TYPE_1__* card; } ;
typedef TYPE_2__ port_t ;
struct TYPE_4__ {int rx_ring_buffers; int tx_ring_buffers; } ;



__attribute__((used)) static inline u16 FUNC_0(port_t *VAR_0, u16 VAR_1, int VAR_2)
{
 u16 VAR_3 = VAR_0->card->rx_ring_buffers;
 u16 VAR_4 = VAR_0->card->tx_ring_buffers;

 VAR_1 %= (VAR_2 ? VAR_4 : VAR_3);
 return VAR_0->chan * (VAR_3 + VAR_4) + VAR_2 * VAR_3 + VAR_1;
}
