
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct lockd_ans {scalar_t__ la_version; int la_flags; scalar_t__ la_errno; int la_len; int la_start; int la_pid; int la_xid; } ;
typedef int proc_t ;
struct TYPE_8__ {int l_type; int l_len; int l_start; int l_pid; } ;
struct TYPE_9__ {int lm_flags; TYPE_1__ lm_fl; } ;
struct TYPE_10__ {scalar_t__ lmr_errno; int lmr_answered; TYPE_2__ lmr_msg; } ;
typedef TYPE_3__ LOCKD_MSG_REQUEST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (TYPE_3__*,struct lockd_ans*) ;
 TYPE_3__* FUNC_3 (struct lockd_ans*) ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;

int
FUNC_7(proc_t VAR_14, struct lockd_ans *VAR_15)
{
 LOCKD_MSG_REQUEST *VAR_16;
 int VAR_17;


 VAR_17 = FUNC_5(VAR_14);
 if (VAR_17)
  return (VAR_17);


 if (VAR_15->la_version != VAR_9)
  return (VAR_0);

 FUNC_0(VAR_13);


 VAR_16 = FUNC_4(VAR_15->la_xid);
 if (VAR_15->la_flags & VAR_6) {






  if (!VAR_16 || FUNC_2(VAR_16, VAR_15))
   VAR_16 = FUNC_3(VAR_15);




  if (VAR_16 && (VAR_16->lmr_msg.lm_flags & VAR_10))
   VAR_16 = ((void*)0);
 }
 if (!VAR_16) {
  FUNC_1(VAR_13);
  return (VAR_1);
 }

 VAR_16->lmr_errno = VAR_15->la_errno;
 if ((VAR_16->lmr_msg.lm_flags & VAR_12) && VAR_16->lmr_errno == 0) {
  if (VAR_15->la_flags & VAR_8) {
   if (VAR_15->la_flags & VAR_7)
    VAR_16->lmr_msg.lm_fl.l_type = VAR_4;
   else
    VAR_16->lmr_msg.lm_fl.l_type = VAR_2;
   VAR_16->lmr_msg.lm_fl.l_pid = VAR_15->la_pid;
   VAR_16->lmr_msg.lm_fl.l_start = VAR_15->la_start;
   VAR_16->lmr_msg.lm_fl.l_len = VAR_15->la_len;
  } else {
   VAR_16->lmr_msg.lm_fl.l_type = VAR_3;
  }
 }
 if (VAR_15->la_flags & VAR_5)
  VAR_16->lmr_msg.lm_flags |= VAR_11;

 VAR_16->lmr_answered = 1;
 FUNC_1(VAR_13);
 FUNC_6(VAR_16);

 return (0);
}
