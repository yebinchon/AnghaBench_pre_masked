
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kpc_running_remote {int cfg_state_mask; int cfg_target_mask; } ;
typedef int event_t ;


 int FUNC_0 (struct kpc_running_remote*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4( void *VAR_1 )
{
 struct kpc_running_remote *VAR_2 = (struct kpc_running_remote*) VAR_1;
 FUNC_0(VAR_2);

 FUNC_2(VAR_2->cfg_target_mask,
     VAR_2->cfg_state_mask);

 if (FUNC_1(&VAR_0, 1) == 0)
  FUNC_3((event_t) &VAR_0);
}
