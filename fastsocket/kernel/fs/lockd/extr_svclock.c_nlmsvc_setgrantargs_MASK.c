
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int len; int * data; } ;
struct TYPE_8__ {TYPE_1__ oh; int svid; int caller; int fh; int fl; } ;
struct TYPE_9__ {TYPE_2__ lock; } ;
struct nlm_rqst {TYPE_3__ a_args; int * a_owner; } ;
struct TYPE_10__ {int len; int * data; } ;
struct TYPE_12__ {int fl_pid; } ;
struct nlm_lock {TYPE_4__ oh; TYPE_6__ fl; int fh; } ;
struct TYPE_11__ {int nodename; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,TYPE_6__*) ;
 int FUNC_2 (int *,int *,int) ;
 TYPE_5__* FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct nlm_rqst *VAR_2, struct nlm_lock *VAR_3)
{
 FUNC_1(&VAR_2->a_args.lock.fl, &VAR_3->fl);
 FUNC_2(&VAR_2->a_args.lock.fh, &VAR_3->fh, sizeof(VAR_2->a_args.lock.fh));
 VAR_2->a_args.lock.caller = FUNC_3()->nodename;
 VAR_2->a_args.lock.oh.len = VAR_3->oh.len;


 VAR_2->a_args.lock.oh.data = VAR_2->a_owner;
 VAR_2->a_args.lock.svid = VAR_3->fl.fl_pid;

 if (VAR_3->oh.len > VAR_1) {
  void *VAR_4 = FUNC_0(VAR_3->oh.len, VAR_0);
  if (!VAR_4)
   return 0;
  VAR_2->a_args.lock.oh.data = (u8 *) VAR_4;
 }

 FUNC_2(VAR_2->a_args.lock.oh.data, VAR_3->oh.data, VAR_3->oh.len);
 return 1;
}
