
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int * nic_data; int irq_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct efx_nic*,int,int *) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct efx_nic*,int ) ;

__attribute__((used)) static void FUNC_5(struct efx_nic *VAR_1)
{
 FUNC_1(VAR_1);

 FUNC_2(VAR_1, &VAR_1->irq_status);

 FUNC_4(VAR_1, VAR_0);


 FUNC_0(VAR_1, 0, ((void*)0));


 FUNC_3(VAR_1->nic_data);
 VAR_1->nic_data = ((void*)0);
}
