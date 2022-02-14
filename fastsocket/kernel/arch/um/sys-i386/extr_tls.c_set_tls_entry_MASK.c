
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct user_desc {int dummy; } ;
struct TYPE_3__ {TYPE_2__* tls_array; } ;
struct thread_struct {TYPE_1__ arch; } ;
struct task_struct {struct thread_struct thread; } ;
struct TYPE_4__ {int present; int flushed; struct user_desc tls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct task_struct* VAR_3, struct user_desc *VAR_4,
    int VAR_5, int VAR_6)
{
 struct thread_struct *VAR_7 = &VAR_3->thread;

 if (VAR_5 < VAR_2 || VAR_5 > VAR_1)
  return -VAR_0;

 VAR_7->arch.tls_array[VAR_5 - VAR_2].tls = *VAR_4;
 VAR_7->arch.tls_array[VAR_5 - VAR_2].present = 1;
 VAR_7->arch.tls_array[VAR_5 - VAR_2].flushed = VAR_6;

 return 0;
}
