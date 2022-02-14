
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_eventh {int head; } ;
struct nouveau_event {int index_nr; int lock; scalar_t__ toggle_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nouveau_event*,int,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;

void
FUNC_6(struct nouveau_event *VAR_0, int VAR_1,
    struct nouveau_eventh *VAR_2)
{
 unsigned long VAR_3;

 if (VAR_1 >= VAR_0->index_nr)
  return;

 FUNC_3(&VAR_0->lock, VAR_3);
 FUNC_0(&VAR_2->head);

 if (VAR_0->toggle_lock)
  FUNC_2(VAR_0->toggle_lock);
 FUNC_1(VAR_0, VAR_1, 1);
 if (VAR_0->toggle_lock)
  FUNC_4(VAR_0->toggle_lock);

 FUNC_5(&VAR_0->lock, VAR_3);
}
