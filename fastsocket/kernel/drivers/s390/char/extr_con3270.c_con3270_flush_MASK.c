
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int dev; } ;
struct con3270 {scalar_t__ update_flags; TYPE_1__ view; scalar_t__ nr_up; } ;


 int FUNC_0 (struct con3270*) ;
 int FUNC_1 (struct con3270*) ;
 int FUNC_2 (struct con3270*) ;
 int FUNC_3 (struct con3270*) ;
 struct con3270* VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_7(void)
{
 struct con3270 *VAR_1;
 unsigned long VAR_2;

 VAR_1 = VAR_0;
 if (!VAR_1->view.dev)
  return;
 FUNC_4(&VAR_1->view);
 FUNC_5(&VAR_1->view.lock, VAR_2);
 FUNC_3(VAR_1);
 VAR_1->nr_up = 0;
 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
 while (VAR_1->update_flags != 0) {
  FUNC_6(&VAR_1->view.lock, VAR_2);
  FUNC_1(VAR_1);
  FUNC_5(&VAR_1->view.lock, VAR_2);
  FUNC_3(VAR_1);
 }
 FUNC_6(&VAR_1->view.lock, VAR_2);
}
