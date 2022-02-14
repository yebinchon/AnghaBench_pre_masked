
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


struct TYPE_12__ {int fl_type; scalar_t__ fl_end; scalar_t__ fl_start; int fl_pid; } ;
struct nlm_lock {TYPE_6__ fl; } ;
struct nlm_file {TYPE_5__* f_file; } ;
typedef int __be32 ;
struct TYPE_9__ {TYPE_2__* dentry; } ;
struct TYPE_11__ {TYPE_3__ f_path; } ;
struct TYPE_10__ {int s_id; } ;
struct TYPE_8__ {TYPE_1__* d_inode; } ;
struct TYPE_7__ {int i_ino; TYPE_4__* i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ,long long,long long) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct nlm_file*,struct nlm_lock*) ;
 int FUNC_2 (TYPE_5__*,int ,TYPE_6__*,int *) ;

__be32
FUNC_3(struct nlm_file *VAR_4, struct nlm_lock *VAR_5)
{
 int VAR_6;

 FUNC_0("lockd: nlmsvc_unlock(%s/%ld, pi=%d, %Ld-%Ld)\n",
    VAR_4->f_file->f_path.dentry->d_inode->i_sb->s_id,
    VAR_4->f_file->f_path.dentry->d_inode->i_ino,
    VAR_5->fl.fl_pid,
    (long long)VAR_5->fl.fl_start,
    (long long)VAR_5->fl.fl_end);


 FUNC_1(VAR_4, VAR_5);

 VAR_5->fl.fl_type = VAR_1;
 VAR_6 = FUNC_2(VAR_4->f_file, VAR_0, &VAR_5->fl, ((void*)0));

 return (VAR_6 < 0)? VAR_3 : VAR_2;
}
