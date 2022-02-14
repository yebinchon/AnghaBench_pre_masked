
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct kpc_config_remote {struct kpc_config_remote* configv; int pmc_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kpc_config_remote*) ;
 int FUNC_1 (struct kpc_config_remote) ;
 int FUNC_2 (int *,int ,int ,struct kpc_config_remote*) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_4(struct kpc_config_remote *VAR_6)
{
 uint32_t VAR_7 = FUNC_3(VAR_6->pmc_mask);

 FUNC_0(VAR_6);
 FUNC_0(VAR_6->configv);


 for (uint32_t VAR_8 = 0; VAR_8 < VAR_7; ++VAR_8) {
  if (!VAR_5 && !FUNC_1(VAR_6->configv[VAR_8])) {
   return VAR_0;
  }
 }


 FUNC_2(&VAR_2, VAR_1, VAR_4, VAR_6);

 VAR_3 = 1;

 return 0;
}
