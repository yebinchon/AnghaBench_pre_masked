
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* phy_op; } ;
struct TYPE_2__ {int (* reconfigure ) (struct efx_nic*) ;int (* poll ) (struct efx_nic*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct efx_nic*) ;
 scalar_t__ FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*) ;
 int FUNC_6 (struct efx_nic*) ;
 int FUNC_7 (struct efx_nic*) ;
 int FUNC_8 (struct efx_nic*) ;
 int FUNC_9 (struct efx_nic*) ;
 int FUNC_10 (struct efx_nic*) ;
 int FUNC_11 (struct efx_nic*) ;
 int FUNC_12 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_13(struct efx_nic *VAR_1)
{
 int VAR_2;

 FUNC_2(FUNC_4(VAR_1) > VAR_0);





 if (FUNC_1(VAR_1))
  FUNC_6(VAR_1);
 else
  VAR_1->phy_op->poll(VAR_1);

 FUNC_10(VAR_1);
 FUNC_5(VAR_1);

 FUNC_8(VAR_1);

 VAR_1->phy_op->reconfigure(VAR_1);
 VAR_2 = FUNC_7(VAR_1);
 FUNC_0(VAR_2);

 FUNC_9(VAR_1);


 FUNC_3(VAR_1);

 return 0;
}
