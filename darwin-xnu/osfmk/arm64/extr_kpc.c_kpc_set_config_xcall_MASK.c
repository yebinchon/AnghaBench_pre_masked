
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kpc_config_remote {int classes; int pmc_mask; struct kpc_config_remote* configv; } ;
typedef struct kpc_config_remote kpc_config_t ;
typedef int event_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct kpc_config_remote*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kpc_config_remote*,int ) ;
 int FUNC_4 (struct kpc_config_remote*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(void *VAR_4)
{
 struct kpc_config_remote *VAR_5 = VAR_4;
 kpc_config_t *VAR_6 = ((void*)0);
 uint32_t VAR_7 = 0ULL;

 FUNC_0(VAR_5);
 FUNC_0(VAR_5->configv);
 VAR_7 = VAR_5->classes;
 VAR_6 = VAR_5->configv;

 if (VAR_7 & VAR_0) {
  FUNC_3(VAR_6, VAR_5->pmc_mask);
  VAR_6 += FUNC_2(VAR_5->pmc_mask);
 }

 if (VAR_7 & VAR_1) {
  FUNC_4(VAR_6);
  VAR_6 += VAR_2;
 }

 if (FUNC_1(&VAR_3, 1) == 0)
  FUNC_5((event_t) &VAR_3);
}
