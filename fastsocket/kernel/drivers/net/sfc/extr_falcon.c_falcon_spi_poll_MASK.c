
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int dummy; } ;
typedef int efx_oword_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct efx_nic*,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct efx_nic *VAR_3)
{
 efx_oword_t VAR_4;
 FUNC_1(VAR_3, &VAR_4, VAR_2);
 return FUNC_0(VAR_4, VAR_1) ? -VAR_0 : 0;
}
