
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_vf {int dummy; } ;
struct efx_nic {unsigned int vf_init_count; struct efx_vf* vf; } ;
struct efx_buffer {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct efx_nic*,struct efx_buffer*,int ) ;
 int FUNC_2 (struct efx_nic*,struct efx_buffer*) ;
 int FUNC_3 (struct efx_nic*,int,int *,int *) ;
 int FUNC_4 (struct efx_vf*,struct efx_buffer*) ;
 int FUNC_5 (struct efx_nic*,int) ;

void FUNC_6(struct efx_nic *VAR_1)
{
 unsigned int VAR_2;
 struct efx_buffer VAR_3;
 struct efx_vf *VAR_4;

 FUNC_0();

 if (VAR_1->vf_init_count == 0)
  return;

 FUNC_5(VAR_1, 1);
 (void)FUNC_3(VAR_1, 1, ((void*)0), ((void*)0));

 if (FUNC_1(VAR_1, &VAR_3, VAR_0))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->vf_init_count; ++VAR_2) {
  VAR_4 = VAR_1->vf + VAR_2;
  FUNC_4(VAR_4, &VAR_3);
 }

 FUNC_2(VAR_1, &VAR_3);
}
