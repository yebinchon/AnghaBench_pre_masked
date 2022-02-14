
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {int reset_pending; int net_dev; int state; int pci_dev; TYPE_1__* type; } ;
typedef enum reset_type { ____Placeholder_reset_type } reset_type ;
struct TYPE_2__ {int (* reset ) (struct efx_nic*,int) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*,int) ;
 int FUNC_4 (struct efx_nic*,int,int) ;
 int FUNC_5 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_8 (struct efx_nic*,int ,int ,char*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct efx_nic*,int) ;

int FUNC_11(struct efx_nic *VAR_4, enum reset_type VAR_5)
{
 int VAR_6, VAR_7;
 bool VAR_8;

 FUNC_8(VAR_4, VAR_3, VAR_4->net_dev, "resetting (%s)\n",
     FUNC_0(VAR_5));

 FUNC_2(VAR_4);
 FUNC_3(VAR_4, VAR_5);

 VAR_6 = VAR_4->type->reset(VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_7(VAR_4, VAR_3, VAR_4->net_dev, "failed to reset hardware\n");
  goto out;
 }




 VAR_4->reset_pending &= -(1 << (VAR_5 + 1));





 FUNC_9(VAR_4->pci_dev);

out:

 VAR_8 = VAR_6 ||
  VAR_5 == VAR_0 ||
  VAR_5 == VAR_1;
 VAR_7 = FUNC_4(VAR_4, VAR_5, !VAR_8);
 if (VAR_7) {
  VAR_8 = 1;
  if (!VAR_6)
   VAR_6 = VAR_7;
 }

 if (VAR_8) {
  FUNC_1(VAR_4->net_dev);
  FUNC_7(VAR_4, VAR_3, VAR_4->net_dev, "has been disabled\n");
  VAR_4->state = VAR_2;
 } else {
  FUNC_5(VAR_4, VAR_3, VAR_4->net_dev, "reset complete\n");
  FUNC_6(VAR_4->net_dev);
 }
 return VAR_6;
}
