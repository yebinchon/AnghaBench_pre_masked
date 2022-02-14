
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct done_list_struct {int toggle; int index; } ;
struct asd_seq_data {size_t dl_next; int dl_toggle; int pend_q_lock; int pending; int tc_index_lock; struct done_list_struct* dl; } ;
struct asd_ha_struct {struct asd_seq_data seq; } ;
struct asd_ascb {int (* tasklet_complete ) (struct asd_ascb*,struct done_list_struct*) ;int list; int timer; int uldd_timer; TYPE_2__* scb; } ;
struct TYPE_3__ {scalar_t__ opcode; } ;
struct TYPE_4__ {TYPE_1__ header; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct asd_ascb* FUNC_1 (struct asd_seq_data*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct asd_ascb*,struct done_list_struct*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_3)
{
 struct asd_ha_struct *VAR_4 = (struct asd_ha_struct *) VAR_3;
 struct asd_seq_data *VAR_5 = &VAR_4->seq;
 unsigned long VAR_6;

 while (1) {
  struct done_list_struct *VAR_7 = &VAR_5->dl[VAR_5->dl_next];
  struct asd_ascb *VAR_8;

  if ((VAR_7->toggle & VAR_1) != VAR_5->dl_toggle)
   break;


  FUNC_5(&VAR_5->tc_index_lock, VAR_6);
  VAR_8 = FUNC_1(VAR_5, (int)FUNC_3(VAR_7->index));
  FUNC_6(&VAR_5->tc_index_lock, VAR_6);
  if (FUNC_8(!VAR_8)) {
   FUNC_0("BUG:sequencer:dl:no ascb?!\n");
   goto next_1;
  } else if (VAR_8->scb->header.opcode == VAR_2) {
   goto out;
  } else if (!VAR_8->uldd_timer && !FUNC_2(&VAR_8->timer)) {
   goto next_1;
  }
  FUNC_5(&VAR_5->pend_q_lock, VAR_6);
  FUNC_4(&VAR_8->list);
  VAR_5->pending--;
  FUNC_6(&VAR_5->pend_q_lock, VAR_6);
 out:
  VAR_8->tasklet_complete(VAR_8, VAR_7);

 next_1:
  VAR_5->dl_next = (VAR_5->dl_next + 1) & (VAR_0-1);
  if (!VAR_5->dl_next)
   VAR_5->dl_toggle ^= VAR_1;
 }
}
