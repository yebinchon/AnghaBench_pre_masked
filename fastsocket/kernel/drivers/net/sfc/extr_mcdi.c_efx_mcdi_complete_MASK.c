
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_mcdi_iface {int wq; int state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct efx_mcdi_iface *VAR_2)
{






 if (FUNC_0(&VAR_2->state,
      VAR_1,
      VAR_0) == VAR_1) {
  FUNC_1(&VAR_2->wq);
  return 1;
 }

 return 0;
}
