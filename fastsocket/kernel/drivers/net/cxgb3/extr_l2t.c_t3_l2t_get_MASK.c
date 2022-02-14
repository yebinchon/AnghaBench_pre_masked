
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct t3cdev {int dummy; } ;
struct port_info {int port_id; } ;
struct net_device {int ifindex; int priv_flags; } ;
struct neighbour {struct net_device* dev; scalar_t__ primary_key; } ;
struct l2t_entry {scalar_t__ addr; int ifindex; int smt_idx; int lock; int vlan; int refcnt; int state; struct l2t_entry* next; } ;
struct l2t_data {int lock; TYPE_1__* l2tab; } ;
struct dst_entry {struct neighbour* neighbour; } ;
struct TYPE_2__ {struct l2t_entry* first; } ;


 int VAR_0 ;
 struct l2t_data* FUNC_0 (struct t3cdev*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct l2t_entry* FUNC_1 (struct l2t_data*) ;
 int FUNC_2 (scalar_t__,int,struct l2t_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct l2t_data*,struct l2t_entry*) ;
 int FUNC_6 (struct l2t_entry*,struct neighbour*) ;
 struct port_info* FUNC_7 (struct net_device*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct l2t_entry*,struct neighbour*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

struct l2t_entry *FUNC_16(struct t3cdev *VAR_3, struct dst_entry *VAR_4,
        struct net_device *VAR_5)
{
 struct l2t_entry *VAR_6 = ((void*)0);
 struct neighbour *VAR_7;
 struct port_info *VAR_8;
 struct l2t_data *VAR_9;
 int VAR_10;
 u32 VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_8();
 VAR_7 = VAR_4->neighbour;
 if (!VAR_7)
  goto done_rcu;

 VAR_11 = *(u32 *) VAR_7->primary_key;
 VAR_12 = VAR_7->dev->ifindex;

 if (!VAR_5)
  VAR_5 = VAR_7->dev;
 VAR_8 = FUNC_7(VAR_5);
 VAR_13 = VAR_8->port_id;

 VAR_9 = FUNC_0(VAR_3);
 if (!VAR_9)
  goto done_rcu;

 VAR_10 = FUNC_2(VAR_11, VAR_12, VAR_9);

 FUNC_14(&VAR_9->lock);
 for (VAR_6 = VAR_9->l2tab[VAR_10].first; VAR_6; VAR_6 = VAR_6->next)
  if (VAR_6->addr == VAR_11 && VAR_6->ifindex == VAR_12 &&
      VAR_6->smt_idx == VAR_13) {
   FUNC_5(VAR_9, VAR_6);
   if (FUNC_3(&VAR_6->refcnt) == 1)
    FUNC_10(VAR_6, VAR_7);
   goto done_unlock;
  }


 VAR_6 = FUNC_1(VAR_9);
 if (VAR_6) {
  FUNC_11(&VAR_6->lock);
  VAR_6->next = VAR_9->l2tab[VAR_10].first;
  VAR_9->l2tab[VAR_10].first = VAR_6;
  VAR_6->state = VAR_1;
  VAR_6->addr = VAR_11;
  VAR_6->ifindex = VAR_12;
  VAR_6->smt_idx = VAR_13;
  FUNC_4(&VAR_6->refcnt, 1);
  FUNC_6(VAR_6, VAR_7);
  if (VAR_7->dev->priv_flags & VAR_0)
   VAR_6->vlan = FUNC_13(VAR_7->dev);
  else
   VAR_6->vlan = VAR_2;
  FUNC_12(&VAR_6->lock);
 }
done_unlock:
 FUNC_15(&VAR_9->lock);
done_rcu:
 FUNC_9();
 return VAR_6;
}
