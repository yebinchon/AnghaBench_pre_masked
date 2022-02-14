
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int flush_wq; int drain_pending; } ;
struct efx_channel {struct efx_nic* efx; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct efx_channel *VAR_0)
{
 struct efx_nic *VAR_1 = VAR_0->efx;

 FUNC_0(FUNC_2(&VAR_1->drain_pending) == 0);
 FUNC_1(&VAR_1->drain_pending);
 if (FUNC_3(VAR_1))
  FUNC_4(&VAR_1->flush_wq);
}
