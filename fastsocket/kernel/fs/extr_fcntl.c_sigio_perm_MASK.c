
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct fown_struct {scalar_t__ euid; scalar_t__ uid; } ;
struct cred {scalar_t__ suid; scalar_t__ uid; } ;


 struct cred* FUNC_0 (struct task_struct*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct task_struct*,struct fown_struct*,int) ;

__attribute__((used)) static inline int FUNC_4(struct task_struct *VAR_0,
                             struct fown_struct *VAR_1, int VAR_2)
{
 const struct cred *VAR_3;
 int VAR_4;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_0);
 VAR_4 = ((VAR_1->euid == 0 ||
  VAR_1->euid == VAR_3->suid || VAR_1->euid == VAR_3->uid ||
  VAR_1->uid == VAR_3->suid || VAR_1->uid == VAR_3->uid) &&
        !FUNC_3(VAR_0, VAR_1, VAR_2));
 FUNC_2();
 return VAR_4;
}
