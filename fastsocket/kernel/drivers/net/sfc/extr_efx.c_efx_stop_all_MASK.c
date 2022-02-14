
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {int net_dev; TYPE_1__* type; int port_enabled; } ;
struct TYPE_2__ {int (* stop_stats ) (struct efx_nic*) ;} ;


 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct efx_nic*) ;

__attribute__((used)) static void FUNC_9(struct efx_nic *VAR_0)
{
 FUNC_0(VAR_0);


 if (!VAR_0->port_enabled)
  return;

 VAR_0->type->stop_stats(VAR_0);
 FUNC_4(VAR_0);


 FUNC_2(VAR_0);





 FUNC_1(FUNC_6(VAR_0->net_dev) &&
  FUNC_5(VAR_0->net_dev));
 FUNC_7(VAR_0->net_dev);

 FUNC_3(VAR_0);
}
