
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kpc_config_remote {int classes; int pmc_mask; struct kpc_config_remote* configv; } ;
typedef struct kpc_config_remote kpc_config_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kpc_config_remote*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct kpc_config_remote*,int ) ;
 int FUNC_4 (struct kpc_config_remote*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3)
{

 struct kpc_config_remote *VAR_4 = VAR_3;
 kpc_config_t *VAR_5 = ((void*)0);
 uint32_t VAR_6 = 0, VAR_7 = 0;
 boolean_t VAR_8;

 FUNC_0(VAR_4);
 FUNC_0(VAR_4->configv);
 VAR_6 = VAR_4->classes;
 VAR_5 = VAR_4->configv;

 VAR_8 = FUNC_5(VAR_0);

 if (VAR_6 & VAR_2)
 {
  FUNC_4(&VAR_5[VAR_7]);
  VAR_7 += FUNC_1(VAR_2);
 }

 if (VAR_6 & VAR_1) {
  FUNC_3(&VAR_5[VAR_7], VAR_4->pmc_mask);
  VAR_7 += FUNC_2(VAR_4->pmc_mask);
 }

 FUNC_5(VAR_8);
}
