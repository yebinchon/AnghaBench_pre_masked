
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
typedef int port_t ;
struct TYPE_2__ {int tx_ring_buffers; int rx_ring_buffers; } ;


 TYPE_1__* FUNC_0 (int *) ;

__attribute__((used)) static inline u16 FUNC_1(port_t *VAR_0, u16 VAR_1, int VAR_2)
{
 return (VAR_1 + 1) % (VAR_2 ? FUNC_0(VAR_0)->tx_ring_buffers
        : FUNC_0(VAR_0)->rx_ring_buffers);
}
