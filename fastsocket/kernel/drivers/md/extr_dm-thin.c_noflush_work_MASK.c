
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thin_c {TYPE_1__* pool; } ;
struct noflush_work {int complete; int wait; int worker; struct thin_c* tc; } ;
struct TYPE_2__ {int wq; } ;


 int FUNC_0 (int *,void (*) (struct work_struct*)) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct thin_c *VAR_0, void (*VAR_1)(struct work_struct *))
{
 struct noflush_work VAR_2;

 FUNC_0(&VAR_2.worker, VAR_1);
 VAR_2.tc = VAR_0;
 FUNC_2(&VAR_2.complete, 0);
 FUNC_3(&VAR_2.wait);

 FUNC_4(VAR_0->pool->wq, &VAR_2.worker);

 FUNC_5(VAR_2.wait, FUNC_1(&VAR_2.complete));
}
