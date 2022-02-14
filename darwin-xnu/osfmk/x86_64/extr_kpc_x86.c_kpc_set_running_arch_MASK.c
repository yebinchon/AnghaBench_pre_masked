
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kpc_running_remote {int classes; int cfg_state_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kpc_running_remote*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,struct kpc_running_remote*) ;

int
FUNC_2(struct kpc_running_remote *VAR_5)
{
 FUNC_0(VAR_5);


 FUNC_1(VAR_1, VAR_0, VAR_4, VAR_5);

 VAR_2 = VAR_5->cfg_state_mask;
 VAR_3 = VAR_5->classes;

 return 0;
}
