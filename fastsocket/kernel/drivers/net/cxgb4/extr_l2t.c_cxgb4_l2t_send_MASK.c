
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct l2t_entry {int state; int lock; int arpq_head; int neigh; } ;
struct adapter {int dummy; } ;






 int FUNC_0 (struct l2t_entry*,struct sk_buff*) ;
 int FUNC_1 (int ,int *) ;
 struct adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct adapter*,struct sk_buff*) ;
 int FUNC_6 (struct adapter*,struct l2t_entry*,int) ;

int FUNC_7(struct net_device *VAR_0, struct sk_buff *VAR_1,
     struct l2t_entry *VAR_2)
{
 struct adapter *VAR_3 = FUNC_2(VAR_0);

again:
 switch (VAR_2->state) {
 case 130:
  FUNC_1(VAR_2->neigh, ((void*)0));
  FUNC_3(&VAR_2->lock);
  if (VAR_2->state == 130)
   VAR_2->state = 128;
  FUNC_4(&VAR_2->lock);
 case 128:
  return FUNC_5(VAR_3, VAR_1);
 case 131:
 case 129:
  FUNC_3(&VAR_2->lock);
  if (VAR_2->state != 129 &&
      VAR_2->state != 131) {
   FUNC_4(&VAR_2->lock);
   goto again;
  }
  FUNC_0(VAR_2, VAR_1);
  FUNC_4(&VAR_2->lock);

  if (VAR_2->state == 131 &&
      !FUNC_1(VAR_2->neigh, ((void*)0))) {
   FUNC_3(&VAR_2->lock);
   if (VAR_2->state == 131 && VAR_2->arpq_head)
    FUNC_6(VAR_3, VAR_2, 1);
   FUNC_4(&VAR_2->lock);
  }
 }
 return 0;
}
