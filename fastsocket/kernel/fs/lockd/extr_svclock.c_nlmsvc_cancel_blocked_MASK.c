
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_17__ {scalar_t__ fl_end; scalar_t__ fl_start; int fl_pid; } ;
struct nlm_lock {TYPE_6__ fl; } ;
struct nlm_file {int f_mutex; TYPE_5__* f_file; } ;
struct nlm_block {TYPE_10__* b_call; TYPE_7__* b_file; } ;
typedef int __be32 ;
struct TYPE_19__ {int fl; } ;
struct TYPE_20__ {TYPE_8__ lock; } ;
struct TYPE_18__ {int f_file; } ;
struct TYPE_15__ {TYPE_3__* dentry; } ;
struct TYPE_16__ {TYPE_4__ f_path; } ;
struct TYPE_14__ {TYPE_2__* d_inode; } ;
struct TYPE_13__ {int i_ino; TYPE_1__* i_sb; } ;
struct TYPE_12__ {int s_id; } ;
struct TYPE_11__ {TYPE_9__ a_args; } ;


 int FUNC_0 (char*,int ,int ,int ,long long,long long) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nlm_block* FUNC_4 (struct nlm_file*,struct nlm_lock*) ;
 int FUNC_5 (struct nlm_block*) ;
 int FUNC_6 (struct nlm_block*) ;
 int FUNC_7 (int ,int *) ;

__be32
FUNC_8(struct nlm_file *VAR_3, struct nlm_lock *VAR_4)
{
 struct nlm_block *VAR_5;
 int VAR_6 = 0;

 FUNC_0("lockd: nlmsvc_cancel(%s/%ld, pi=%d, %Ld-%Ld)\n",
    VAR_3->f_file->f_path.dentry->d_inode->i_sb->s_id,
    VAR_3->f_file->f_path.dentry->d_inode->i_ino,
    VAR_4->fl.fl_pid,
    (long long)VAR_4->fl.fl_start,
    (long long)VAR_4->fl.fl_end);

 if (FUNC_1())
  return VAR_2;

 FUNC_2(&VAR_3->f_mutex);
 VAR_5 = FUNC_4(VAR_3, VAR_4);
 FUNC_3(&VAR_3->f_mutex);
 if (VAR_5 != ((void*)0)) {
  FUNC_7(VAR_5->b_file->f_file,
    &VAR_5->b_call->a_args.lock.fl);
  VAR_6 = FUNC_6(VAR_5);
  FUNC_5(VAR_5);
 }
 return VAR_6 ? VAR_1 : VAR_0;
}
