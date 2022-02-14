
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct procdata {scalar_t__ if_used; int rd_queue; int del_lock; struct log_data* log_head; struct log_data* log_tail; } ;
struct log_data {scalar_t__ usage_cnt; struct log_data* next; struct procdata* proc_ctrl; int log_start; } ;
struct TYPE_3__ {int hysdn_lock; struct procdata* proclog; } ;
typedef TYPE_1__ hysdn_card ;


 int VAR_0 ;
 int FUNC_0 (struct log_data*) ;
 struct log_data* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(hysdn_card * VAR_1, char *VAR_2)
{
 struct log_data *VAR_3;
 struct procdata *VAR_4 = VAR_1->proclog;
 int VAR_5;
 unsigned long VAR_6;

 if (!VAR_4)
  return;
 if (!VAR_2)
  return;
 if (!*VAR_2)
  return;
 if (VAR_4->if_used <= 0)
  return;

 if (!(VAR_3 = FUNC_1(sizeof(struct log_data) + FUNC_5(VAR_2), VAR_0)))
   return;
 FUNC_4(VAR_3->log_start, VAR_2);
 VAR_3->next = ((void*)0);
 VAR_3->proc_ctrl = VAR_4;
 FUNC_2(&VAR_1->hysdn_lock, VAR_6);
 VAR_3->usage_cnt = VAR_4->if_used;
 if (!VAR_4->log_head)
  VAR_4->log_head = VAR_3;
 else
  VAR_4->log_tail->next = VAR_3;
 VAR_4->log_tail = VAR_3;
 VAR_5 = VAR_4->del_lock++;
 FUNC_3(&VAR_1->hysdn_lock, VAR_6);


 if (!VAR_5)
  while (VAR_4->log_head->next) {
   if ((VAR_4->log_head->usage_cnt <= 0) &&
       (VAR_4->log_head->next->usage_cnt <= 0)) {
    VAR_3 = VAR_4->log_head;
    VAR_4->log_head = VAR_4->log_head->next;
    FUNC_0(VAR_3);
   } else
    break;
  }
 VAR_4->del_lock--;
 FUNC_6(&(VAR_4->rd_queue));
}
