
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {scalar_t__ len; int * response; } ;
struct TCP_Server_Info {scalar_t__ srv_count; int tsk; TYPE_1__ session_key; int tcpStatus; int echo; int tcp_ses_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct TCP_Server_Info*) ;
 int FUNC_2 (struct TCP_Server_Info*) ;
 int VAR_3 ;
 int FUNC_3 (int ,struct task_struct*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct task_struct* FUNC_8 (int *,int *) ;

__attribute__((used)) static void
FUNC_9(struct TCP_Server_Info *VAR_4)
{
 struct task_struct *VAR_5;

 FUNC_6(&VAR_3);
 if (--VAR_4->srv_count > 0) {
  FUNC_7(&VAR_3);
  return;
 }

 FUNC_5(&VAR_4->tcp_ses_list);
 FUNC_7(&VAR_3);

 FUNC_0(&VAR_4->echo);

 FUNC_6(&VAR_1);
 VAR_4->tcpStatus = VAR_0;
 FUNC_7(&VAR_1);

 FUNC_1(VAR_4);
 FUNC_2(VAR_4);

 FUNC_4(VAR_4->session_key.response);
 VAR_4->session_key.response = ((void*)0);
 VAR_4->session_key.len = 0;

 VAR_5 = FUNC_8(&VAR_4->tsk, ((void*)0));
 if (VAR_5)
  FUNC_3(VAR_2, VAR_5);
}
