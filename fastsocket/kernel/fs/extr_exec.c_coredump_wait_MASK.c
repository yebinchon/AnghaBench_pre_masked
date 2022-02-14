
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {struct completion* vfork_done; struct mm_struct* mm; } ;
struct mm_struct {int mmap_sem; } ;
struct core_thread {struct core_thread* next; int task; } ;
struct TYPE_2__ {struct core_thread* next; struct task_struct* task; } ;
struct core_state {TYPE_1__ dumper; int startup; } ;
struct completion {int dummy; } ;


 int FUNC_0 (struct completion*) ;
 struct task_struct* VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct task_struct*,struct mm_struct*,struct core_state*,int) ;

__attribute__((used)) static int FUNC_7(int VAR_1, struct core_state *VAR_2)
{
 struct task_struct *VAR_3 = VAR_0;
 struct mm_struct *VAR_4 = VAR_3->mm;
 struct completion *VAR_5;
 int VAR_6;

 FUNC_1(&VAR_2->startup);
 VAR_2->dumper.task = VAR_3;
 VAR_2->dumper.next = ((void*)0);
 VAR_6 = FUNC_6(VAR_3, VAR_4, VAR_2, VAR_1);
 FUNC_3(&VAR_4->mmap_sem);

 if (FUNC_2(VAR_6 < 0))
  goto fail;





 VAR_5 = VAR_3->vfork_done;
 if (VAR_5) {
  VAR_3->vfork_done = ((void*)0);
  FUNC_0(VAR_5);
 }

 if (VAR_6) {
  struct core_thread *VAR_7;

  FUNC_4(&VAR_2->startup);





  VAR_7 = VAR_2->dumper.next;
  while (VAR_7 != ((void*)0)) {
   FUNC_5(VAR_7->task, 0);
   VAR_7 = VAR_7->next;
  }
 }
fail:
 return VAR_6;
}
