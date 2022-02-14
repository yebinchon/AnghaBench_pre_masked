
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_self_tests {int phy_ext; } ;
struct efx_nic {int mac_lock; TYPE_1__* phy_op; } ;
struct TYPE_2__ {int (* run_tests ) (struct efx_nic*,int ,unsigned int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct efx_nic*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct efx_nic *VAR_0, struct efx_self_tests *VAR_1,
   unsigned VAR_2)
{
 int VAR_3;

 if (!VAR_0->phy_op->run_tests)
  return 0;

 FUNC_0(&VAR_0->mac_lock);
 VAR_3 = VAR_0->phy_op->run_tests(VAR_0, VAR_1->phy_ext, VAR_2);
 FUNC_1(&VAR_0->mac_lock);
 return VAR_3;
}
