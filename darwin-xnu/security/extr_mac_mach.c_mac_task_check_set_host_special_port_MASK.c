
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task {int dummy; } ;
struct proc {int dummy; } ;
struct ipc_port {int dummy; } ;
typedef int kauth_cred_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,struct ipc_port*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (int *) ;
 struct proc* FUNC_3 (struct task*) ;
 int VAR_1 ;
 int FUNC_4 (struct proc*) ;

int
FUNC_5(struct task *VAR_2, int VAR_3, struct ipc_port *VAR_4)
{
 int VAR_5;

 struct proc *VAR_6 = FUNC_3(VAR_2);
 if (VAR_6 == ((void*)0))
  return VAR_0;

 kauth_cred_t VAR_7 = FUNC_1(VAR_6);
 FUNC_0(VAR_1, VAR_7, VAR_3, VAR_4);
 FUNC_2(&VAR_7);
 FUNC_4(VAR_6);
 return (VAR_5);
}
