
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* type; int net_dev; } ;
struct TYPE_2__ {int (* init ) (struct efx_nic*) ;int (* fini ) (struct efx_nic*) ;} ;


 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*) ;
 int FUNC_6 (struct efx_nic*) ;
 int FUNC_7 (struct efx_nic*,int) ;
 int FUNC_8 (struct efx_nic*,int ,int ,char*) ;
 int VAR_0 ;
 int FUNC_9 (struct efx_nic*) ;
 int FUNC_10 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_11(struct efx_nic *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2)
  goto fail1;

 FUNC_2(VAR_1);

 VAR_2 = VAR_1->type->init(VAR_1);
 if (VAR_2) {
  FUNC_8(VAR_1, VAR_0, VAR_1->net_dev,
     "failed to initialise NIC\n");
  goto fail3;
 }

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2) {
  FUNC_8(VAR_1, VAR_0, VAR_1->net_dev,
     "failed to initialise port\n");
  goto fail4;
 }

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2)
  goto fail5;
 FUNC_7(VAR_1, 0);

 return 0;

 fail5:
 FUNC_1(VAR_1);
 fail4:
 VAR_1->type->fini(VAR_1);
 fail3:
 FUNC_0(VAR_1);
 FUNC_6(VAR_1);
 fail1:
 return VAR_2;
}
