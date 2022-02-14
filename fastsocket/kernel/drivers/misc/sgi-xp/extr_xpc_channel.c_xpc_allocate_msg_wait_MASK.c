
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_channel {int flags; scalar_t__ reason; int n_on_msg_allocate_wq; int msg_allocate_wq; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

enum xp_retval
FUNC_4(struct xpc_channel *VAR_3)
{
 enum xp_retval VAR_4;

 if (VAR_3->flags & VAR_0) {
  FUNC_0(VAR_3->reason == VAR_1);
  return VAR_3->reason;
 }

 FUNC_2(&VAR_3->n_on_msg_allocate_wq);
 VAR_4 = FUNC_3(&VAR_3->msg_allocate_wq, 1);
 FUNC_1(&VAR_3->n_on_msg_allocate_wq);

 if (VAR_3->flags & VAR_0) {
  VAR_4 = VAR_3->reason;
  FUNC_0(VAR_3->reason == VAR_1);
 } else if (VAR_4 == 0) {
  VAR_4 = VAR_2;
 } else {
  VAR_4 = VAR_1;
 }

 return VAR_4;
}
