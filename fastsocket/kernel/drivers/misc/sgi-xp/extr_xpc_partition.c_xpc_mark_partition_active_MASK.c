
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_partition {scalar_t__ act_state; scalar_t__ reason; int act_lock; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct xpc_partition*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

enum xp_retval
FUNC_5(struct xpc_partition *VAR_4)
{
 unsigned long VAR_5;
 enum xp_retval VAR_6;

 FUNC_2(VAR_3, "setting partition %d to ACTIVE\n", FUNC_1(VAR_4));

 FUNC_3(&VAR_4->act_lock, VAR_5);
 if (VAR_4->act_state == VAR_0) {
  VAR_4->act_state = VAR_1;
  VAR_6 = VAR_2;
 } else {
  FUNC_0(VAR_4->reason == VAR_2);
  VAR_6 = VAR_4->reason;
 }
 FUNC_4(&VAR_4->act_lock, VAR_5);

 return VAR_6;
}
