
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds_info {int num_ds_states; struct ds_cap_state* ds_states; scalar_t__ hs_state; } ;
struct ds_cap_state {int state; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ds_info *VAR_1)
{
 int VAR_2;

 VAR_1->hs_state = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_ds_states; VAR_2++) {
  struct ds_cap_state *VAR_3 = &VAR_1->ds_states[VAR_2];

  VAR_3->state = VAR_0;
 }
}
