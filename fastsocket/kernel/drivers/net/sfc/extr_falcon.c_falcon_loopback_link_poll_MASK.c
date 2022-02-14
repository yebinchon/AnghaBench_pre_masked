
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_link_state {int fd; int up; int speed; int fc; } ;
struct efx_nic {struct efx_link_state link_state; int wanted_fc; int mac_lock; } ;


 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct efx_link_state*,struct efx_link_state*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(struct efx_nic *VAR_0)
{
 struct efx_link_state VAR_1 = VAR_0->link_state;

 FUNC_1(!FUNC_3(&VAR_0->mac_lock));
 FUNC_1(!FUNC_0(VAR_0));

 VAR_0->link_state.fd = 1;
 VAR_0->link_state.fc = VAR_0->wanted_fc;
 VAR_0->link_state.up = 1;
 VAR_0->link_state.speed = 10000;

 return !FUNC_2(&VAR_0->link_state, &VAR_1);
}
