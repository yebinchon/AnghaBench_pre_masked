
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct svc_rqst {int rq_server; } ;
struct TYPE_4__ {int * fl_lmops; int fl_flags; } ;
struct TYPE_5__ {TYPE_1__ fl; } ;
struct TYPE_6__ {int cookie; TYPE_2__ lock; } ;
struct nlm_rqst {struct nlm_block* a_block; int a_flags; TYPE_3__ a_args; } ;
struct nlm_lock {int dummy; } ;
struct nlm_host {int dummy; } ;
struct nlm_file {int f_blocks; int f_count; } ;
struct nlm_cookie {int dummy; } ;
struct nlm_block {struct nlm_rqst* b_call; int b_flist; int * b_fl; struct nlm_file* b_file; struct nlm_host* b_host; int b_daemon; int b_list; int b_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (char*,struct nlm_block*) ;
 int FUNC_2 (struct nlm_block*) ;
 int FUNC_3 (int *) ;
 struct nlm_block* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 struct nlm_rqst* FUNC_6 (struct nlm_host*) ;
 int FUNC_7 (struct nlm_host*) ;
 int FUNC_8 (struct nlm_rqst*) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;
 int FUNC_10 (struct nlm_rqst*,struct nlm_lock*) ;

__attribute__((used)) static struct nlm_block *
FUNC_11(struct svc_rqst *VAR_4, struct nlm_host *VAR_5,
      struct nlm_file *VAR_6, struct nlm_lock *VAR_7,
      struct nlm_cookie *VAR_8)
{
 struct nlm_block *VAR_9;
 struct nlm_rqst *VAR_10 = ((void*)0);

 FUNC_7(VAR_5);
 VAR_10 = FUNC_6(VAR_5);
 if (VAR_10 == ((void*)0))
  return ((void*)0);


 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_1);
 if (VAR_9 == ((void*)0))
  goto failed;
 FUNC_3(&VAR_9->b_count);
 FUNC_0(&VAR_9->b_list);
 FUNC_0(&VAR_9->b_flist);

 if (!FUNC_10(VAR_10, VAR_7))
  goto failed_free;


 VAR_10->a_args.lock.fl.fl_flags |= VAR_0;
 VAR_10->a_args.lock.fl.fl_lmops = &VAR_3;
 FUNC_9(&VAR_10->a_args.cookie);

 FUNC_1("lockd: created block %p...\n", VAR_9);


 VAR_9->b_daemon = VAR_4->rq_server;
 VAR_9->b_host = VAR_5;
 VAR_9->b_file = VAR_6;
 VAR_9->b_fl = ((void*)0);
 VAR_6->f_count++;


 FUNC_5(&VAR_9->b_flist, &VAR_6->f_blocks);


 VAR_9->b_call = VAR_10;
 VAR_10->a_flags = VAR_2;
 VAR_10->a_block = VAR_9;

 return VAR_9;

failed_free:
 FUNC_2(VAR_9);
failed:
 FUNC_8(VAR_10);
 return ((void*)0);
}
