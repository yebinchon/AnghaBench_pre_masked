
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {int queue; int flush_outstanding; struct efx_nic* efx; } ;
struct efx_nic {int dummy; } ;
typedef int efx_oword_t ;


 int FUNC_0 (int ,int ,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct efx_nic*,int *,int ) ;

__attribute__((used)) static void FUNC_5(struct efx_tx_queue *VAR_3)
{
 struct efx_nic *VAR_4 = VAR_3->efx;
 efx_oword_t VAR_5;

 FUNC_1(FUNC_2(&VAR_3->flush_outstanding));
 FUNC_3(&VAR_3->flush_outstanding, 1);

 FUNC_0(VAR_5,
        VAR_1, 1,
        VAR_0, VAR_3->queue);
 FUNC_4(VAR_4, &VAR_5, VAR_2);
}
