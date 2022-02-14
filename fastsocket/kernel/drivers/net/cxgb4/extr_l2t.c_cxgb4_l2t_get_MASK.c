
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct neighbour {TYPE_3__* dev; scalar_t__ primary_key; TYPE_1__* tbl; } ;
struct l2t_entry {int ifindex; scalar_t__ vlan; scalar_t__ lport; int hash; int v6; int lock; struct l2t_entry* next; int refcnt; int addr; int state; } ;
struct l2t_data {int lock; TYPE_2__* l2tab; } ;
struct TYPE_8__ {scalar_t__ tx_chan; scalar_t__ lport; } ;
struct TYPE_7__ {int ifindex; int flags; int priv_flags; } ;
struct TYPE_6__ {struct l2t_entry* first; } ;
struct TYPE_5__ {int key_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct l2t_entry*,int *) ;
 struct l2t_entry* FUNC_2 (struct l2t_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct l2t_data*,struct l2t_entry*) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (struct l2t_entry*,struct neighbour*) ;
 TYPE_4__* FUNC_8 (struct net_device const*) ;
 int FUNC_9 (struct l2t_entry*,struct neighbour*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

struct l2t_entry *FUNC_15(struct l2t_data *VAR_4, struct neighbour *VAR_5,
    const struct net_device *VAR_6,
    unsigned int VAR_7)
{
 u8 VAR_8;
 u16 VAR_9;
 struct l2t_entry *VAR_10;
 int VAR_11 = VAR_5->tbl->key_len;
 u32 *VAR_12 = (u32 *)VAR_5->primary_key;
 int VAR_13 = VAR_5->dev->ifindex;
 int VAR_14 = FUNC_0(VAR_12, VAR_11, VAR_13);

 if (VAR_5->dev->flags & VAR_1)
  VAR_8 = FUNC_8(VAR_6)->tx_chan + 4;
 else
  VAR_8 = FUNC_8(VAR_6)->lport;

 if (VAR_5->dev->priv_flags & VAR_0)
  VAR_9 = FUNC_12(VAR_5->dev);
 else
  VAR_9 = VAR_3;

 FUNC_13(&VAR_4->lock);
 for (VAR_10 = VAR_4->l2tab[VAR_14].first; VAR_10; VAR_10 = VAR_10->next)
  if (!FUNC_1(VAR_10, VAR_12) && VAR_10->ifindex == VAR_13 &&
      VAR_10->vlan == VAR_9 && VAR_10->lport == VAR_8) {
   FUNC_5(VAR_4, VAR_10);
   if (FUNC_3(&VAR_10->refcnt) == 1)
    FUNC_9(VAR_10, VAR_5);
   goto done;
  }


 VAR_10 = FUNC_2(VAR_4);
 if (VAR_10) {
  FUNC_10(&VAR_10->lock);
  VAR_10->state = VAR_2;
  FUNC_6(VAR_10->addr, VAR_12, VAR_11);
  VAR_10->ifindex = VAR_13;
  VAR_10->hash = VAR_14;
  VAR_10->lport = VAR_8;
  VAR_10->v6 = VAR_11 == 16;
  FUNC_4(&VAR_10->refcnt, 1);
  FUNC_7(VAR_10, VAR_5);
  VAR_10->vlan = VAR_9;
  VAR_10->next = VAR_4->l2tab[VAR_14].first;
  VAR_4->l2tab[VAR_14].first = VAR_10;
  FUNC_11(&VAR_10->lock);
 }
done:
 FUNC_14(&VAR_4->lock);
 return VAR_10;
}
