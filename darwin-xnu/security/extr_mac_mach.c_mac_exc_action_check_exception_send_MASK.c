
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task {int dummy; } ;
struct proc {int dummy; } ;
struct label {int dummy; } ;
struct exception_action {int label; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct label*,struct exception_action*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 struct proc* FUNC_2 (struct task*) ;
 struct label* FUNC_3 (struct task*) ;
 struct label* FUNC_4 (struct proc*) ;
 int FUNC_5 (struct label*) ;

int
FUNC_6(struct task *VAR_2, struct exception_action *VAR_3)
{
 int VAR_4 = 0;

 struct proc *VAR_5 = FUNC_2(VAR_2);
 struct label *VAR_6 = ((void*)0);
 struct label *VAR_7 = ((void*)0);

 if (VAR_5 != ((void*)0)) {

  VAR_7 = VAR_6 = FUNC_4(VAR_5);
 } else {

  VAR_7 = FUNC_3(VAR_2);
 }

 if (VAR_7 == ((void*)0)) {
  FUNC_1("mac_exc_action_check_exception_send: no exc_action label for process");
  return VAR_0;
 }

 FUNC_0(VAR_1, VAR_7, VAR_3, VAR_3->label);

 if (VAR_6 != ((void*)0)) {
  FUNC_5(VAR_6);
 }

 return (VAR_4);
}
