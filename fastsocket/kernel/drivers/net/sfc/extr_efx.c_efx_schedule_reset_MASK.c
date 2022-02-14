
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {scalar_t__ state; int reset_work; int reset_pending; int net_dev; TYPE_1__* type; } ;
typedef enum reset_type { ____Placeholder_reset_type } reset_type ;
struct TYPE_2__ {int (* map_reset_reason ) (int) ;} ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;






 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*,int ,int ,char*,int ,...) ;
 int FUNC_4 (int ,int *) ;
 int VAR_3 ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;

void FUNC_8(struct efx_nic *VAR_4, enum reset_type VAR_5)
{
 enum reset_type VAR_6;

 if (VAR_4->state == VAR_1) {
  FUNC_3(VAR_4, VAR_2, VAR_4->net_dev,
     "recovering: skip scheduling %s reset\n",
     FUNC_1(VAR_5));
  return;
 }

 switch (VAR_5) {
 case 131:
 case 133:
 case 130:
 case 128:
 case 132:
 case 129:
  VAR_6 = VAR_5;
  FUNC_3(VAR_4, VAR_2, VAR_4->net_dev, "scheduling %s reset\n",
     FUNC_1(VAR_6));
  break;
 default:
  VAR_6 = VAR_4->type->map_reset_reason(VAR_5);
  FUNC_3(VAR_4, VAR_2, VAR_4->net_dev,
     "scheduling %s reset for %s\n",
     FUNC_1(VAR_6), FUNC_1(VAR_5));
  break;
 }

 FUNC_5(VAR_6, &VAR_4->reset_pending);
 FUNC_6();




 if (FUNC_0(VAR_4->state) != VAR_0)
  return;



 FUNC_2(VAR_4);

 FUNC_4(VAR_3, &VAR_4->reset_work);
}
