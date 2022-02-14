
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct nsproxy {void* mnt_ns; } ;
typedef void mnt_namespace ;


 int FUNC_0 (void*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct nsproxy* FUNC_3 (struct task_struct*) ;

__attribute__((used)) static void *FUNC_4(struct task_struct *VAR_0)
{
 struct mnt_namespace *VAR_1 = ((void*)0);
 struct nsproxy *VAR_2;

 FUNC_1();
 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2) {
  VAR_1 = VAR_2->mnt_ns;
  FUNC_0(VAR_1);
 }
 FUNC_2();

 return VAR_1;
}
