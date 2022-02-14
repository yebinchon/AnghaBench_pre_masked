
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aem_ipmi_data {int bmc_device; } ;
struct aem_find_instance_resp {int major; int module_handle; } ;


 int FUNC_0 (struct aem_ipmi_data*,struct aem_find_instance_resp*,int) ;
 int FUNC_1 (struct aem_ipmi_data*,struct aem_find_instance_resp*) ;
 int FUNC_2 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_3(struct aem_ipmi_data *VAR_0)
{
 struct aem_find_instance_resp VAR_1;
 int VAR_2;
 int VAR_3 = 0;

 while (!FUNC_0(VAR_0, &VAR_1, VAR_3)) {
  if (VAR_1.major != 2) {
   FUNC_2(VAR_0->bmc_device, "Unknown AEM v%d; please "
    "report this to the maintainer.\n",
    VAR_1.major);
   VAR_3++;
   continue;
  }
  VAR_2 = FUNC_1(VAR_0, &VAR_1);
  if (VAR_2) {
   FUNC_2(VAR_0->bmc_device,
    "Error %d initializing AEM2 0x%X\n",
    VAR_2, VAR_1.module_handle);
   return VAR_2;
  }
  VAR_3++;
 }

 return 0;
}
