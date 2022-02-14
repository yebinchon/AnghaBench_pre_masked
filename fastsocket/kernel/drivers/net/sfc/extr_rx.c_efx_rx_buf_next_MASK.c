
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_rx_queue {int ptr_mask; } ;
struct efx_rx_buffer {int dummy; } ;


 struct efx_rx_buffer* FUNC_0 (struct efx_rx_queue*,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline struct efx_rx_buffer *
FUNC_2(struct efx_rx_queue *VAR_0, struct efx_rx_buffer *VAR_1)
{
 if (FUNC_1(VAR_1 == FUNC_0(VAR_0, VAR_0->ptr_mask)))
  return FUNC_0(VAR_0, 0);
 else
  return VAR_1 + 1;
}
