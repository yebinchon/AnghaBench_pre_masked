
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct neighbour {int nud_state; int ha; TYPE_2__* dev; scalar_t__ primary_key; TYPE_1__* tbl; } ;
struct l2t_entry {int ifindex; scalar_t__ state; int lock; int dmac; struct sk_buff* arpq_head; int * arpq_tail; struct neighbour* neigh; int refcnt; struct l2t_entry* next; } ;
struct l2t_data {int lock; TYPE_3__* l2tab; } ;
struct adapter {struct l2t_data* l2t; } ;
struct TYPE_6__ {struct l2t_entry* first; } ;
struct TYPE_5__ {int ifindex; } ;
struct TYPE_4__ {int key_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct l2t_entry*,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct adapter*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct l2t_entry*,struct neighbour*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct adapter*,struct l2t_entry*,int) ;

void FUNC_13(struct adapter *VAR_6, struct neighbour *VAR_7)
{
 struct l2t_entry *VAR_8;
 struct sk_buff *VAR_9 = ((void*)0);
 struct l2t_data *VAR_10 = VAR_6->l2t;
 int VAR_11 = VAR_7->tbl->key_len;
 u32 *VAR_12 = (u32 *) VAR_7->primary_key;
 int VAR_13 = VAR_7->dev->ifindex;
 int VAR_14 = FUNC_0(VAR_12, VAR_11, VAR_13);

 FUNC_6(&VAR_10->lock);
 for (VAR_8 = VAR_10->l2tab[VAR_14].first; VAR_8; VAR_8 = VAR_8->next)
  if (!FUNC_1(VAR_8, VAR_12) && VAR_8->ifindex == VAR_13) {
   FUNC_9(&VAR_8->lock);
   if (FUNC_2(&VAR_8->refcnt))
    goto found;
   FUNC_10(&VAR_8->lock);
   break;
  }
 FUNC_8(&VAR_10->lock);
 return;

 found:
 FUNC_7(&VAR_10->lock);

 if (VAR_7 != VAR_8->neigh)
  FUNC_5(VAR_8, VAR_7);

 if (VAR_8->state == VAR_0) {
  if (VAR_7->nud_state & VAR_4) {
   VAR_9 = VAR_8->arpq_head;
   VAR_8->arpq_head = VAR_8->arpq_tail = ((void*)0);
  } else if ((VAR_7->nud_state & (VAR_3 | VAR_5)) &&
      VAR_8->arpq_head) {
   FUNC_12(VAR_6, VAR_8, 1);
  }
 } else {
  VAR_8->state = VAR_7->nud_state & VAR_3 ?
   VAR_2 : VAR_1;
  if (FUNC_4(VAR_8->dmac, VAR_7->ha, sizeof(VAR_8->dmac)))
   FUNC_12(VAR_6, VAR_8, 0);
 }

 FUNC_11(&VAR_8->lock);

 if (VAR_9)
  FUNC_3(VAR_6, VAR_9);
}
