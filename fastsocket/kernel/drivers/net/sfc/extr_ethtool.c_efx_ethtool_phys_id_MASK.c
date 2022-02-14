
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct efx_nic {TYPE_1__* type; } ;
struct TYPE_2__ {int (* set_id_led ) (struct efx_nic*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct efx_nic* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct efx_nic*,int ) ;
 int FUNC_4 (struct efx_nic*,int ) ;
 int FUNC_5 (struct efx_nic*,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_5, u32 VAR_6)
{
 struct efx_nic *VAR_7 = FUNC_0(VAR_5);

 do {
  VAR_7->type->set_id_led(VAR_7, VAR_2);
  FUNC_1(VAR_3 / 2);

  VAR_7->type->set_id_led(VAR_7, VAR_1);
  FUNC_1(VAR_3 / 2);
 } while (!FUNC_2(VAR_4) && --VAR_6 != 0);

 VAR_7->type->set_id_led(VAR_7, VAR_0);
 return 0;
}
