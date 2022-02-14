
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int dummy; } ;
struct l2t_entry {int state; int neigh; int lock; } ;





 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct t3cdev *VAR_0, struct l2t_entry *VAR_1)
{
again:
 switch (VAR_1->state) {
 case 129:
  FUNC_0(VAR_1->neigh, ((void*)0));
  FUNC_1(&VAR_1->lock);
  if (VAR_1->state == 129) {
   VAR_1->state = 128;
  }
  FUNC_2(&VAR_1->lock);
  return;
 case 128:
  return;
 case 130:
  FUNC_1(&VAR_1->lock);
  if (VAR_1->state != 130) {

   FUNC_2(&VAR_1->lock);
   goto again;
  }
  FUNC_2(&VAR_1->lock);
  FUNC_0(VAR_1->neigh, ((void*)0));
 }
 return;
}
