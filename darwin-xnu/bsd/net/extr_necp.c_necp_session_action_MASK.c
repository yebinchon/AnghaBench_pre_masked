
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef int u_int32_t ;
struct proc {int dummy; } ;
struct necp_session_action_args {int action; int necp_fd; } ;
struct necp_session {int proc_pid; int proc_uuid; scalar_t__ proc_locked; } ;
typedef int proc_uuid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct necp_session*) ;
 int FUNC_2 (struct necp_session*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct necp_session*,struct necp_session_action_args*,int*) ;
 int FUNC_6 (struct necp_session*,struct necp_session_action_args*,int*) ;
 int FUNC_7 (struct necp_session*,struct necp_session_action_args*,int*) ;
 int FUNC_8 (struct necp_session*,struct necp_session_action_args*,int*) ;
 int FUNC_9 (struct necp_session*,struct necp_session_action_args*,int*) ;
 int FUNC_10 (int ,struct necp_session**) ;
 int FUNC_11 (struct necp_session*,struct necp_session_action_args*,int*) ;
 int FUNC_12 (struct necp_session*,struct necp_session_action_args*,int*) ;
 int FUNC_13 (struct necp_session*,struct necp_session_action_args*,int*) ;
 int FUNC_14 (struct necp_session*,struct necp_session_action_args*,int*) ;
 int FUNC_15 (struct necp_session*,struct necp_session_action_args*,int*) ;
 int FUNC_16 (struct necp_session*,struct necp_session_action_args*,int*) ;
 int FUNC_17 (int ,int ,int) ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ,int ) ;

int
FUNC_20(struct proc *VAR_3, struct necp_session_action_args *VAR_4, int *VAR_5)
{
#pragma unused(p)
 int VAR_6 = 0;
 int VAR_7 = 0;
 struct necp_session *VAR_8 = ((void*)0);
 VAR_6 = FUNC_10(VAR_4->necp_fd, &VAR_8);
 if (VAR_6 != 0) {
  FUNC_0(VAR_2, "necp_session_action find fd error (%d)", VAR_6);
  return (VAR_6);
 }

 FUNC_1(VAR_8);

 if (VAR_8->proc_locked) {

  uuid_t VAR_9;
  FUNC_17(FUNC_3(), VAR_9, sizeof(VAR_9));
  if (FUNC_19(VAR_9, VAR_8->proc_uuid) != 0) {
   VAR_6 = VAR_1;
   goto done;
  }
 } else {

  FUNC_17(FUNC_3(), VAR_8->proc_uuid, sizeof(VAR_8->proc_uuid));
  VAR_8->proc_pid = FUNC_18(FUNC_3());
 }

 u_int32_t VAR_10 = VAR_4->action;
 switch (VAR_10) {
  case 137: {
   VAR_7 = FUNC_5(VAR_8, VAR_4, VAR_5);
   break;
  }
  case 132: {
   VAR_7 = FUNC_11(VAR_8, VAR_4, VAR_5);
   break;
  }
  case 135: {
   VAR_7 = FUNC_8(VAR_8, VAR_4, VAR_5);
   break;
  }
  case 136: {
   VAR_7 = FUNC_6(VAR_8, VAR_4, VAR_5);
   break;
  }
  case 131: {
   VAR_7 = FUNC_12(VAR_8, VAR_4, VAR_5);
   break;
  }
  case 134: {
   VAR_7 = FUNC_7(VAR_8, VAR_4, VAR_5);
   break;
  }
  case 129: {
   VAR_7 = FUNC_15(VAR_8, VAR_4, VAR_5);
   break;
  }
  case 138: {
   VAR_7 = FUNC_13(VAR_8, VAR_4, VAR_5);
   break;
  }
  case 130: {
   VAR_7 = FUNC_14(VAR_8, VAR_4, VAR_5);
   break;
  }
  case 128: {
   VAR_7 = FUNC_16(VAR_8, VAR_4, VAR_5);
   break;
  }
  case 133: {
   VAR_7 = FUNC_9(VAR_8, VAR_4, VAR_5);
   break;
  }
  default: {
   FUNC_0(VAR_2, "necp_session_action unknown action (%u)", VAR_10);
   VAR_7 = VAR_0;
   break;
  }
 }

done:
 FUNC_2(VAR_8);
 FUNC_4(VAR_4->necp_fd);

 return (VAR_7);
}
