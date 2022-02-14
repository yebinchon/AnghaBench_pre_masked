
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct linux_binprm {int per_clear; int * mm; int file; } ;
struct TYPE_3__ {int personality; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct linux_binprm*,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(struct linux_binprm * VAR_2)
{
 int VAR_3;





 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  goto out;

 FUNC_4(VAR_2->mm, VAR_2->file);




 FUNC_0(VAR_2, 0);
 VAR_3 = FUNC_2(VAR_2->mm);
 if (VAR_3)
  goto out;

 VAR_2->mm = ((void*)0);

 VAR_1->flags &= ~VAR_0;
 FUNC_3();
 VAR_1->personality &= ~VAR_2->per_clear;

 return 0;

out:
 return VAR_3;
}
