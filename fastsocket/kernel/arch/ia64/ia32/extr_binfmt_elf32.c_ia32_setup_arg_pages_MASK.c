
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct linux_binprm {int dummy; } ;
struct TYPE_3__ {int ppl; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct linux_binprm*,int ,int) ;

int
FUNC_2 (struct linux_binprm *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_0, VAR_3);
 if (!VAR_4) {




  VAR_1->thread.ppl = FUNC_0();
 }

 return VAR_4;
}
