
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwch_ep_common {int state; int lock; } ;
typedef enum iwch_ep_state { ____Placeholder_iwch_ep_state } iwch_ep_state ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static enum iwch_ep_state FUNC_2(struct iwch_ep_common *VAR_0)
{
 unsigned long VAR_1;
 enum iwch_ep_state VAR_2;

 FUNC_0(&VAR_0->lock, VAR_1);
 VAR_2 = VAR_0->state;
 FUNC_1(&VAR_0->lock, VAR_1);
 return VAR_2;
}
