
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_func_state_params {int cmd; unsigned long ramrod_flags; struct bnx2x_func_sp_obj* f_obj; } ;
struct bnx2x_func_sp_obj {unsigned long pending; int (* check_transition ) (struct bnx2x*,struct bnx2x_func_sp_obj*,struct bnx2x_func_state_params*) ;int (* send_cmd ) (struct bnx2x*,struct bnx2x_func_state_params*) ;int (* wait_comp ) (struct bnx2x*,struct bnx2x_func_sp_obj*,int) ;int next_state; int one_pending_mutex; } ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_func_cmd { ____Placeholder_bnx2x_func_cmd } bnx2x_func_cmd ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_func_sp_obj*,int) ;
 int FUNC_2 (int,unsigned long*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,unsigned long*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct bnx2x*,struct bnx2x_func_sp_obj*,struct bnx2x_func_state_params*) ;
 int FUNC_9 (struct bnx2x*,struct bnx2x_func_sp_obj*,struct bnx2x_func_state_params*) ;
 int FUNC_10 (struct bnx2x*,struct bnx2x_func_state_params*) ;
 int FUNC_11 (struct bnx2x*,struct bnx2x_func_sp_obj*,int) ;
 scalar_t__ FUNC_12 (int,unsigned long*) ;

int FUNC_13(struct bnx2x *VAR_5,
       struct bnx2x_func_state_params *VAR_6)
{
 struct bnx2x_func_sp_obj *VAR_7 = VAR_6->f_obj;
 int VAR_8, VAR_9 = 300;
 enum bnx2x_func_cmd VAR_10 = VAR_6->cmd;
 unsigned long *VAR_11 = &VAR_7->pending;

 FUNC_4(&VAR_7->one_pending_mutex);


 VAR_8 = VAR_7->check_transition(VAR_5, VAR_7, VAR_6);
 if ((VAR_8 == -VAR_1) &&
     (FUNC_12(VAR_4, &VAR_6->ramrod_flags))) {
  while ((VAR_8 == -VAR_1) && (--VAR_9 > 0)) {
   FUNC_5(&VAR_7->one_pending_mutex);
   FUNC_3(10);
   FUNC_4(&VAR_7->one_pending_mutex);
   VAR_8 = VAR_7->check_transition(VAR_5, VAR_7, VAR_6);
  }
  if (VAR_8 == -VAR_1) {
   FUNC_5(&VAR_7->one_pending_mutex);
   FUNC_0("timeout waiting for previous ramrod completion\n");
   return VAR_8;
  }
 } else if (VAR_8) {
  FUNC_5(&VAR_7->one_pending_mutex);
  return VAR_8;
 }


 FUNC_6(VAR_10, VAR_11);


 if (FUNC_12(VAR_3, &VAR_6->ramrod_flags)) {
  FUNC_1(VAR_5, VAR_7, VAR_10);
  FUNC_5(&VAR_7->one_pending_mutex);
 } else {

  VAR_8 = VAR_7->send_cmd(VAR_5, VAR_6);

  FUNC_5(&VAR_7->one_pending_mutex);

  if (VAR_8) {
   VAR_7->next_state = VAR_0;
   FUNC_2(VAR_10, VAR_11);
   FUNC_7();
   return VAR_8;
  }

  if (FUNC_12(VAR_2, &VAR_6->ramrod_flags)) {
   VAR_8 = VAR_7->wait_comp(VAR_5, VAR_7, VAR_10);
   if (VAR_8)
    return VAR_8;

   return 0;
  }
 }

 return !!FUNC_12(VAR_10, VAR_11);
}
