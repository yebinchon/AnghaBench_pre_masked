
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_struct {struct desc_struct* tls_array; } ;
struct task_struct {struct thread_struct thread; } ;
struct ia32_user_desc {int dummy; } ;
struct desc_struct {scalar_t__ b; scalar_t__ a; } ;
struct TYPE_2__ {struct thread_struct thread; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ia32_user_desc const*) ;
 scalar_t__ FUNC_1 (struct ia32_user_desc const*) ;
 scalar_t__ FUNC_2 (struct ia32_user_desc const*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (struct thread_struct*,int) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct task_struct *VAR_2, int VAR_3,
  const struct ia32_user_desc *VAR_4, int VAR_5)
{
 struct thread_struct *VAR_6 = &VAR_2->thread;
 struct desc_struct *VAR_7 = &VAR_6->tls_array[VAR_3 - VAR_0];
 int VAR_8;




 VAR_8 = FUNC_3();

 while (VAR_5-- > 0) {
  if (FUNC_0(VAR_4)) {
   VAR_7->a = 0;
   VAR_7->b = 0;
  } else {
   VAR_7->a = FUNC_1(VAR_4);
   VAR_7->b = FUNC_2(VAR_4);
  }

  ++VAR_4;
  ++VAR_7;
 }

 if (VAR_6 == &VAR_1->thread)
  FUNC_4(VAR_6, VAR_8);

 FUNC_5();
}
