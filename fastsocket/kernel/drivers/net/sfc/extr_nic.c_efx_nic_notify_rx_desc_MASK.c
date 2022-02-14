
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_rx_queue {unsigned int notified_count; unsigned int added_count; int ptr_mask; struct efx_nic* efx; } ;
struct efx_nic {int dummy; } ;
typedef int efx_dword_t ;


 int FUNC_0 (int ,int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct efx_rx_queue*,int) ;
 int FUNC_2 (struct efx_rx_queue*) ;
 int FUNC_3 (struct efx_nic*,int *,int ,int ) ;
 int FUNC_4 () ;

void FUNC_5(struct efx_rx_queue *VAR_2)
{
 struct efx_nic *VAR_3 = VAR_2->efx;
 efx_dword_t VAR_4;
 unsigned VAR_5;

 while (VAR_2->notified_count != VAR_2->added_count) {
  FUNC_1(
   VAR_2,
   VAR_2->notified_count & VAR_2->ptr_mask);
  ++VAR_2->notified_count;
 }

 FUNC_4();
 VAR_5 = VAR_2->added_count & VAR_2->ptr_mask;
 FUNC_0(VAR_4, VAR_0, VAR_5);
 FUNC_3(VAR_3, &VAR_4, VAR_1,
   FUNC_2(VAR_2));
}
