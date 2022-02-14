
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_desc {int dummy; } ;
struct thread_struct {struct desc_struct* tls_array; } ;
struct task_struct {struct thread_struct thread; } ;
struct desc_struct {scalar_t__ b; scalar_t__ a; } ;
struct TYPE_2__ {struct thread_struct thread; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct user_desc const*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct desc_struct*,struct user_desc const*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct thread_struct*,int) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct task_struct *VAR_2, int VAR_3,
    const struct user_desc *VAR_4, int VAR_5)
{
 struct thread_struct *VAR_6 = &VAR_2->thread;
 struct desc_struct *VAR_7 = &VAR_6->tls_array[VAR_3 - VAR_0];
 int VAR_8;




 VAR_8 = FUNC_2();

 while (VAR_5-- > 0) {
  if (FUNC_0(VAR_4))
   VAR_7->a = VAR_7->b = 0;
  else
   FUNC_1(VAR_7, VAR_4);
  ++VAR_4;
  ++VAR_7;
 }

 if (VAR_6 == &VAR_1->thread)
  FUNC_3(VAR_6, VAR_8);

 FUNC_4();
}
