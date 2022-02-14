
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct l2t_entry {int state; int lock; int arpq; int neigh; } ;
struct cpl_l2t_write_req {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int,int ) ;
 int FUNC_2 (struct l2t_entry*,struct sk_buff*) ;
 int FUNC_3 (struct t3cdev*,struct sk_buff*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct t3cdev*,struct sk_buff*,struct l2t_entry*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct t3cdev *VAR_1, struct sk_buff *VAR_2,
       struct l2t_entry *VAR_3)
{
again:
 switch (VAR_3->state) {
 case 129:
  FUNC_4(VAR_3->neigh, ((void*)0));
  FUNC_7(&VAR_3->lock);
  if (VAR_3->state == 129)
   VAR_3->state = 128;
  FUNC_8(&VAR_3->lock);
 case 128:
  return FUNC_3(VAR_1, VAR_2);
 case 130:
  FUNC_7(&VAR_3->lock);
  if (VAR_3->state != 130) {

   FUNC_8(&VAR_3->lock);
   goto again;
  }
  FUNC_2(VAR_3, VAR_2);
  FUNC_8(&VAR_3->lock);
  if (!FUNC_4(VAR_3->neigh, ((void*)0))) {
   VAR_2 = FUNC_1(sizeof(struct cpl_l2t_write_req),
     VAR_0);
   if (!VAR_2)
    break;

   FUNC_7(&VAR_3->lock);
   if (!FUNC_6(&VAR_3->arpq))
    FUNC_5(VAR_1, VAR_2, VAR_3);
   else
    FUNC_0(VAR_2);
   FUNC_8(&VAR_3->lock);
  }
 }
 return 0;
}
