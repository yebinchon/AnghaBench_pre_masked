
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int ioctx_lock; } ;
struct kioctx {int dead; int wait; int list; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int FUNC_0 (struct kioctx*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*,struct kioctx*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct kioctx*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct kioctx*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct kioctx *VAR_1)
{
 struct mm_struct *VAR_2 = VAR_0->mm;
 int VAR_3;


 FUNC_5(&VAR_2->ioctx_lock);
 VAR_3 = VAR_1->dead;
 VAR_1->dead = 1;
 FUNC_2(&VAR_1->list);
 FUNC_6(&VAR_2->ioctx_lock);

 FUNC_1("aio_release(%p)\n", VAR_1);
 if (FUNC_3(!VAR_3))
  FUNC_4(VAR_1);

 FUNC_0(VAR_1);
 FUNC_7(VAR_1);






 FUNC_8(&VAR_1->wait);
 FUNC_4(VAR_1);
}
