
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {int channel; int flush_outstanding; } ;
struct efx_nic {int n_tx_channels; } ;
typedef int efx_qword_t ;


 int FUNC_0 (struct efx_tx_queue*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 struct efx_tx_queue* FUNC_3 (struct efx_nic*,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct efx_nic *VAR_2, efx_qword_t *VAR_3)
{
 struct efx_tx_queue *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(*VAR_3, VAR_1);
 if (VAR_5 < VAR_0 * VAR_2->n_tx_channels) {
  VAR_4 = FUNC_3(VAR_2, VAR_5 / VAR_0,
         VAR_5 % VAR_0);
  if (FUNC_2(&VAR_4->flush_outstanding, 1, 0)) {
   FUNC_4(VAR_4->channel,
     FUNC_0(VAR_4));
  }
 }
}
