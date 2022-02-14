
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct journal_head* t_locked_list; struct journal_head* t_reserved_list; struct journal_head* t_log_list; struct journal_head* t_shadow_list; struct journal_head* t_iobuf_list; struct journal_head* t_forget; struct journal_head* t_buffers; int t_nr_buffers; struct journal_head* t_sync_datalist; TYPE_1__* t_journal; } ;
typedef TYPE_2__ transaction_t ;
struct journal_head {int b_jlist; int b_frozen_data; int b_committed_data; TYPE_2__* b_transaction; } ;
struct buffer_head {int dummy; } ;
struct TYPE_4__ {int j_list_lock; } ;
 int VAR_0 ;
 int FUNC_0 (struct journal_head*,int) ;
 int FUNC_1 (struct journal_head**,struct journal_head*) ;
 int FUNC_2 (struct journal_head*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 struct buffer_head* FUNC_6 (struct journal_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 scalar_t__ FUNC_8 (struct buffer_head*) ;
 scalar_t__ FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;

void FUNC_11(struct journal_head *VAR_1,
   transaction_t *VAR_2, int VAR_3)
{
 struct journal_head **VAR_4 = ((void*)0);
 int VAR_5 = 0;
 struct buffer_head *VAR_6 = FUNC_6(VAR_1);

 FUNC_0(VAR_1, FUNC_5(VAR_6));
 FUNC_3(&VAR_2->t_journal->j_list_lock);

 FUNC_0(VAR_1, VAR_1->b_jlist < VAR_0);
 FUNC_0(VAR_1, VAR_1->b_transaction == VAR_2 ||
    VAR_1->b_transaction == ((void*)0));

 if (VAR_1->b_transaction && VAR_1->b_jlist == VAR_3)
  return;

 if (VAR_3 == 132 || VAR_3 == 130 ||
     VAR_3 == 129 || VAR_3 == 136) {







  if (FUNC_4(VAR_6))
   FUNC_10(VAR_6);
  if (FUNC_8(VAR_6) ||
      FUNC_9(VAR_6))
   VAR_5 = 1;
 }

 if (VAR_1->b_transaction)
  FUNC_2(VAR_1);
 VAR_1->b_transaction = VAR_2;

 switch (VAR_3) {
 case 131:
  FUNC_0(VAR_1, !VAR_1->b_committed_data);
  FUNC_0(VAR_1, !VAR_1->b_frozen_data);
  return;
 case 128:
  VAR_4 = &VAR_2->t_sync_datalist;
  break;
 case 132:
  VAR_2->t_nr_buffers++;
  VAR_4 = &VAR_2->t_buffers;
  break;
 case 136:
  VAR_4 = &VAR_2->t_forget;
  break;
 case 135:
  VAR_4 = &VAR_2->t_iobuf_list;
  break;
 case 129:
  VAR_4 = &VAR_2->t_shadow_list;
  break;
 case 133:
  VAR_4 = &VAR_2->t_log_list;
  break;
 case 130:
  VAR_4 = &VAR_2->t_reserved_list;
  break;
 case 134:
  VAR_4 = &VAR_2->t_locked_list;
  break;
 }

 FUNC_1(VAR_4, VAR_1);
 VAR_1->b_jlist = VAR_3;

 if (VAR_5)
  FUNC_7(VAR_6);
}
