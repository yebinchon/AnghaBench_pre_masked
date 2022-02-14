
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c4iw_ep_common {int state; int mutex; } ;
typedef enum c4iw_ep_state { ____Placeholder_c4iw_ep_state } c4iw_ep_state ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static enum c4iw_ep_state FUNC_2(struct c4iw_ep_common *VAR_0)
{
 enum c4iw_ep_state VAR_1;

 FUNC_0(&VAR_0->mutex);
 VAR_1 = VAR_0->state;
 FUNC_1(&VAR_0->mutex);
 return VAR_1;
}
