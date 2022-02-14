
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int block; } ;
struct nlm_rqst {TYPE_1__ a_args; } ;
struct nlm_host {int dummy; } ;
struct file_lock {scalar_t__ fl_type; TYPE_2__* fl_ops; } ;
struct TYPE_4__ {int (* fl_release_private ) (struct file_lock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 () ;
 struct nlm_rqst* FUNC_5 (struct nlm_host*) ;
 int FUNC_6 (struct nlm_host*) ;
 int FUNC_7 (struct nlm_rqst*,struct file_lock*) ;
 int FUNC_8 (struct file_lock*,struct nlm_host*) ;
 int FUNC_9 (struct nlm_rqst*,struct file_lock*) ;
 int FUNC_10 (struct nlm_rqst*,struct file_lock*) ;
 int FUNC_11 (struct nlm_rqst*,struct file_lock*) ;
 int FUNC_12 (struct file_lock*) ;
 int FUNC_13 () ;

int FUNC_14(struct nlm_host *VAR_3, int VAR_4, struct file_lock *VAR_5)
{
 struct nlm_rqst *VAR_6;
 int VAR_7;

 FUNC_6(VAR_3);
 VAR_6 = FUNC_5(VAR_3);
 if (VAR_6 == ((void*)0))
  return -VAR_1;

 FUNC_8(VAR_5, VAR_3);

 FUNC_9(VAR_6, VAR_5);

 FUNC_4();
 if (FUNC_1(VAR_4) || FUNC_2(VAR_4)) {
  if (VAR_5->fl_type != VAR_2) {
   VAR_6->a_args.block = FUNC_2(VAR_4) ? 1 : 0;
   VAR_7 = FUNC_7(VAR_6, VAR_5);
  } else
   VAR_7 = FUNC_11(VAR_6, VAR_5);
 } else if (FUNC_0(VAR_4))
  VAR_7 = FUNC_10(VAR_6, VAR_5);
 else
  VAR_7 = -VAR_0;

 VAR_5->fl_ops->fl_release_private(VAR_5);
 VAR_5->fl_ops = ((void*)0);
 FUNC_13();

 FUNC_3("lockd: clnt proc returns %d\n", VAR_7);
 return VAR_7;
}
