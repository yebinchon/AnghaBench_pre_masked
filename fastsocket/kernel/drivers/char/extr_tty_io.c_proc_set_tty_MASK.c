
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct task_struct {TYPE_1__* sighand; } ;
struct TYPE_2__ {int siglock; } ;


 int FUNC_0 (struct task_struct*,struct tty_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct task_struct *VAR_0, struct tty_struct *VAR_1)
{
 FUNC_1(&VAR_0->sighand->siglock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->sighand->siglock);
}
