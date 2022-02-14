
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct proc {int dummy; } ;
struct necp_fd_data {int dummy; } ;
struct necp_client_action_args {int action; int necp_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct proc*,struct necp_fd_data*,struct necp_client_action_args*,int*) ;
 int FUNC_3 (struct necp_fd_data*,struct necp_client_action_args*,int*) ;
 int FUNC_4 (struct necp_fd_data*,struct necp_client_action_args*,int*) ;
 int FUNC_5 (struct necp_fd_data*,struct necp_client_action_args*,int*) ;
 int FUNC_6 (struct necp_fd_data*,struct necp_client_action_args*,int*) ;
 int FUNC_7 (struct necp_fd_data*,struct necp_client_action_args*,int*) ;
 int FUNC_8 (struct necp_fd_data*,struct necp_client_action_args*,int*) ;
 int FUNC_9 (struct necp_fd_data*,struct necp_client_action_args*,int*) ;
 int FUNC_10 (struct necp_fd_data*,struct necp_client_action_args*,int*) ;
 int FUNC_11 (struct necp_fd_data*,struct necp_client_action_args*,int*) ;
 int FUNC_12 (struct necp_fd_data*,struct necp_client_action_args*,int*) ;
 int FUNC_13 (int ,struct necp_fd_data**) ;

int
FUNC_14(struct proc *VAR_2, struct necp_client_action_args *VAR_3, int *VAR_4)
{
#pragma unused(p)
 int VAR_5 = 0;
 int VAR_6 = 0;
 struct necp_fd_data *VAR_7 = ((void*)0);
 VAR_5 = FUNC_13(VAR_3->necp_fd, &VAR_7);
 if (VAR_5 != 0) {
  FUNC_0(VAR_1, "necp_client_action find fd error (%d)", VAR_5);
  return (VAR_5);
 }

 u_int32_t VAR_8 = VAR_3->action;
 switch (VAR_8) {
  case 140: {
   VAR_6 = FUNC_2(VAR_2, VAR_7, VAR_3, VAR_4);
   break;
  }
  case 129: {
   VAR_6 = FUNC_11(VAR_7, VAR_3, VAR_4);
   break;
  }
  case 133:
  case 132:
  case 130: {
   VAR_6 = FUNC_5(VAR_7, VAR_3, VAR_4);
   break;
  }
  case 134: {
   VAR_6 = FUNC_10(VAR_7, VAR_3, VAR_4);
   break;
  }
  case 139: {
   VAR_6 = FUNC_3(VAR_7, VAR_3, VAR_4);
   break;
  }
  case 137: {
   VAR_6 = FUNC_6(VAR_7, VAR_3, VAR_4);
   break;
  }
  case 138: {
   VAR_6 = FUNC_4(VAR_7, VAR_3, VAR_4);
   break;
  }
  case 135: {
   VAR_6 = FUNC_8(VAR_7, VAR_3, VAR_4);
   break;
  }
  case 131: {
   VAR_6 = FUNC_9(VAR_7, VAR_3, VAR_4);
   break;
  }
  case 128: {
   VAR_6 = FUNC_12(VAR_7, VAR_3, VAR_4);
   break;
  }
  case 136: {
   VAR_6 = FUNC_7(VAR_7, VAR_3, VAR_4);
   break;
  }
  default: {
   FUNC_0(VAR_1, "necp_client_action unknown action (%u)", VAR_8);
   VAR_6 = VAR_0;
   break;
  }
 }

 FUNC_1(VAR_3->necp_fd);

 return (VAR_6);
}
