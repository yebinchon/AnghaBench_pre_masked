
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_hba {scalar_t__ cardtype; unsigned int mu_status; TYPE_1__* host; int reset_waitq; scalar_t__ out_req_cnt; scalar_t__ status_tail; scalar_t__ status_head; scalar_t__ req_tail; scalar_t__ req_head; } ;
struct TYPE_2__ {int host_lock; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct st_hba*) ;
 int FUNC_3 (struct st_hba*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct st_hba *VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;
 unsigned int VAR_7;

 VAR_5 = (VAR_4->cardtype == VAR_3) ?
  FUNC_3(VAR_4) : FUNC_2(VAR_4);
 FUNC_0(VAR_4->host->host_lock, VAR_6);
 VAR_7 = VAR_4->mu_status;
 if (VAR_5 == 0) {
  VAR_4->req_head = 0;
  VAR_4->req_tail = 0;
  VAR_4->status_head = 0;
  VAR_4->status_tail = 0;
  VAR_4->out_req_cnt = 0;
  VAR_4->mu_status = VAR_2;
 } else
  VAR_4->mu_status = VAR_0;
 if (VAR_7 == VAR_1)
  FUNC_4(&VAR_4->reset_waitq);
 FUNC_1(VAR_4->host->host_lock, VAR_6);
 return VAR_5;
}
