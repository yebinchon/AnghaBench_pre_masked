
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_work {int list; } ;
struct ubi_device {scalar_t__ works_count; int wl_lock; int bgt_thread; scalar_t__ thread_enabled; int works; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ubi_device *VAR_0, struct ubi_work *VAR_1)
{
 FUNC_1(&VAR_0->wl_lock);
 FUNC_0(&VAR_1->list, &VAR_0->works);
 FUNC_3(VAR_0->works_count >= 0);
 VAR_0->works_count += 1;
 if (VAR_0->thread_enabled)
  FUNC_4(VAR_0->bgt_thread);
 FUNC_2(&VAR_0->wl_lock);
}
