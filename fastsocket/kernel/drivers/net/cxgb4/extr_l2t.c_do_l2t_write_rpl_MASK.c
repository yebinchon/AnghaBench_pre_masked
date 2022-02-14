
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct l2t_entry {scalar_t__ state; int lock; TYPE_2__* neigh; } ;
struct cpl_l2t_write_rpl {scalar_t__ status; } ;
struct adapter {TYPE_1__* l2t; int pdev_dev; } ;
struct TYPE_4__ {int nud_state; } ;
struct TYPE_3__ {struct l2t_entry* l2tab; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct cpl_l2t_write_rpl const*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,scalar_t__,unsigned int) ;
 int FUNC_2 (struct adapter*,struct l2t_entry*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(struct adapter *VAR_7, const struct cpl_l2t_write_rpl *VAR_8)
{
 unsigned int VAR_9 = FUNC_0(VAR_8);
 unsigned int VAR_10 = VAR_9 & (VAR_2 - 1);

 if (FUNC_5(VAR_8->status != VAR_0)) {
  FUNC_1(VAR_7->pdev_dev,
   "Unexpected L2T_WRITE_RPL status %u for entry %u\n",
   VAR_8->status, VAR_10);
  return;
 }

 if (VAR_9 & VAR_1) {
  struct l2t_entry *VAR_11 = &VAR_7->l2t->l2tab[VAR_10];

  FUNC_3(&VAR_11->lock);
  if (VAR_11->state != VAR_4) {
   FUNC_2(VAR_7, VAR_11);
   VAR_11->state = (VAR_11->neigh->nud_state & VAR_6) ?
     VAR_3 : VAR_5;
  }
  FUNC_4(&VAR_11->lock);
 }
}
