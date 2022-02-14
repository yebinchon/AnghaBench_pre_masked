
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int dummy; } ;
typedef int efx_oword_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*,int *,int ) ;
 int FUNC_3 (struct efx_nic*,int *,int ) ;
 int FUNC_4 (struct efx_nic*) ;

__attribute__((used)) static void FUNC_5(struct efx_nic *VAR_3)
{
 efx_oword_t VAR_4;

 if (FUNC_1(VAR_3) < VAR_0)
  return;


 FUNC_2(VAR_3, &VAR_4, VAR_2);
 FUNC_0(VAR_4, VAR_1, 0);
 FUNC_3(VAR_3, &VAR_4, VAR_2);


 FUNC_4(VAR_3);
}
