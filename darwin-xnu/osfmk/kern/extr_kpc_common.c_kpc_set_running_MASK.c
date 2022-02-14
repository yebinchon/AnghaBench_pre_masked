
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kpc_running_remote {int classes; unsigned long long cfg_target_mask; unsigned long long cfg_state_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct kpc_running_remote*) ;

int
FUNC_2(uint32_t VAR_2)
{
 uint32_t VAR_3 = VAR_0 | VAR_1;
 struct kpc_running_remote VAR_4 = {
  .classes = VAR_2, .cfg_target_mask= 0ULL, .cfg_state_mask = 0ULL
 };


 VAR_4.cfg_target_mask = FUNC_0(VAR_3);


 if (VAR_2 & VAR_1)
  VAR_4.classes |= VAR_0;


 VAR_4.cfg_state_mask = FUNC_0(VAR_2);

 return FUNC_1(&VAR_4);
}
