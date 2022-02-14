
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int entry_number; } ;
struct uml_tls_struct {int flushed; TYPE_3__ tls; int present; } ;
struct TYPE_6__ {struct uml_tls_struct* tls_array; } ;
struct TYPE_7__ {TYPE_1__ arch; } ;
struct task_struct {TYPE_2__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(int VAR_3, struct task_struct *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = VAR_1; VAR_6 < VAR_0; VAR_6++) {
  struct uml_tls_struct* VAR_7 =
   &VAR_4->thread.arch.tls_array[VAR_6 - VAR_1];





  if (!VAR_7->present) {
   if (!VAR_7->flushed) {
    FUNC_2(&VAR_7->tls);
    VAR_7->tls.entry_number = VAR_6;
   } else {
    FUNC_1(!FUNC_0(&VAR_7->tls));
    continue;
   }
  }

  if (!(VAR_3 & VAR_2) && VAR_7->flushed)
   continue;

  VAR_5 = FUNC_3(&VAR_7->tls);
  if (VAR_5)
   goto out;

  VAR_7->flushed = 1;
 }
out:
 return VAR_5;
}
