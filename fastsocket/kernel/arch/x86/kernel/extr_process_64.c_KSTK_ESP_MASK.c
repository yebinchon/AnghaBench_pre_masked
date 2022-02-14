
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long usersp; } ;
struct task_struct {TYPE_1__ thread; } ;
struct TYPE_4__ {unsigned long sp; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct task_struct*) ;
 scalar_t__ FUNC_1 (struct task_struct*,int ) ;

unsigned long FUNC_2(struct task_struct *VAR_1)
{
 return (FUNC_1(VAR_1, VAR_0)) ?
   (FUNC_0(VAR_1)->sp) : ((VAR_1)->thread.usersp);
}
