
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lockd_ans {int la_flags; scalar_t__ la_pid; scalar_t__ la_start; scalar_t__ la_len; scalar_t__ la_fh_len; int la_fh; } ;
struct TYPE_5__ {scalar_t__ l_pid; scalar_t__ l_start; scalar_t__ l_len; } ;
struct TYPE_6__ {scalar_t__ lm_fh_len; int lm_fh; TYPE_1__ lm_fl; } ;
struct TYPE_7__ {TYPE_2__ lmr_msg; } ;
typedef TYPE_3__ LOCKD_MSG_REQUEST ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

int
FUNC_1(LOCKD_MSG_REQUEST *VAR_1, struct lockd_ans *VAR_2)
{
 if (!(VAR_2->la_flags & VAR_0))
  return 1;
 if (VAR_1->lmr_msg.lm_fl.l_pid != VAR_2->la_pid)
  return 1;
 if (VAR_1->lmr_msg.lm_fl.l_start != VAR_2->la_start)
  return 1;
 if (VAR_1->lmr_msg.lm_fl.l_len != VAR_2->la_len)
  return 1;
 if (VAR_1->lmr_msg.lm_fh_len != VAR_2->la_fh_len)
  return 1;
 if (FUNC_0(VAR_1->lmr_msg.lm_fh, VAR_2->la_fh, VAR_2->la_fh_len))
  return 1;
 return 0;
}
