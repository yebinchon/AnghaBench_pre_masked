
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int dummy; } ;
typedef enum reset_type { ____Placeholder_reset_type } reset_type ;


 int VAR_0 ;
 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_3(struct efx_nic *VAR_1, enum reset_type VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  return VAR_3;

 if (VAR_2 == VAR_0)
  return FUNC_1(VAR_1);
 else
  return FUNC_2(VAR_1);
}
