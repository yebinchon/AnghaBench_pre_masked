
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct linux_binprm {struct mm_struct* mm; } ;


 int VAR_0 ;
 int FUNC_0 (struct linux_binprm*) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct mm_struct*) ;
 struct mm_struct* FUNC_2 () ;
 int FUNC_3 (struct mm_struct*) ;

int FUNC_4(struct linux_binprm *VAR_2)
{
 int VAR_3;
 struct mm_struct *VAR_4 = ((void*)0);

 VAR_2->mm = VAR_4 = FUNC_2();
 VAR_3 = -VAR_0;
 if (!VAR_4)
  goto err;

 VAR_3 = FUNC_1(VAR_1, VAR_4);
 if (VAR_3)
  goto err;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  goto err;

 return 0;

err:
 if (VAR_4) {
  VAR_2->mm = ((void*)0);
  FUNC_3(VAR_4);
 }

 return VAR_3;
}
