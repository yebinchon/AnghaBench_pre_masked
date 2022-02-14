
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_rx_queue {int scatter_n; int removed_count; int ptr_mask; struct efx_nic* efx; } ;
struct efx_nic {int net_dev; } ;
struct efx_channel {int n_rx_nodesc_trunc; } ;


 scalar_t__ FUNC_0 (struct efx_nic*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct efx_channel* FUNC_1 (struct efx_rx_queue*) ;
 int FUNC_2 (struct efx_nic*,int ) ;
 int FUNC_3 (struct efx_nic*,int ,int ,char*,unsigned int,unsigned int,unsigned int) ;
 int VAR_2 ;

__attribute__((used)) static bool
FUNC_4(struct efx_rx_queue *VAR_3, unsigned VAR_4)
{
 struct efx_channel *VAR_5 = FUNC_1(VAR_3);
 struct efx_nic *VAR_6 = VAR_3->efx;
 unsigned VAR_7, VAR_8;

 if (VAR_3->scatter_n &&
     VAR_4 == ((VAR_3->removed_count + VAR_3->scatter_n - 1) &
        VAR_3->ptr_mask)) {
  ++VAR_5->n_rx_nodesc_trunc;
  return 1;
 }

 VAR_7 = VAR_3->removed_count & VAR_3->ptr_mask;
 VAR_8 = (VAR_4 - VAR_7) & VAR_3->ptr_mask;
 FUNC_3(VAR_6, VAR_2, VAR_6->net_dev,
     "dropped %d events (index=%d expected=%d)\n",
     VAR_8, VAR_4, VAR_7);

 FUNC_2(VAR_6, FUNC_0(VAR_6) ?
      VAR_1 : VAR_0);
 return 0;
}
