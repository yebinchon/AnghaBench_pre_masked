
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aem_ipmi_data {int bmc_device; } ;


 int FUNC_0 (struct aem_ipmi_data*) ;
 int FUNC_1 (struct aem_ipmi_data*,int) ;
 int FUNC_2 (int ,char*,int,int) ;

__attribute__((used)) static int FUNC_3(struct aem_ipmi_data *VAR_0)
{
 int VAR_1, VAR_2, VAR_3;

 VAR_1 = FUNC_0(VAR_0);
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_3 = FUNC_1(VAR_0, VAR_2);
  if (VAR_3) {
   FUNC_2(VAR_0->bmc_device,
    "Error %d initializing AEM1 0x%X\n",
    VAR_3, VAR_2);
   return VAR_3;
  }
 }

 return 0;
}
