
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct flock {int l_whence; scalar_t__ l_start; scalar_t__ l_len; int l_type; } ;
struct file_lock {scalar_t__ fl_end; scalar_t__ fl_start; int * fl_lmops; int * fl_ops; int fl_flags; struct file* fl_file; int fl_pid; int fl_owner; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {scalar_t__ f_pos; TYPE_2__ f_path; } ;
typedef scalar_t__ off_t ;
struct TYPE_6__ {int tgid; int files; } ;
struct TYPE_4__ {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;



 int FUNC_0 (struct file_lock*,int ) ;
 TYPE_3__* VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, struct file_lock *VAR_6,
          struct flock *VAR_7)
{
 off_t VAR_8, VAR_9;

 switch (VAR_7->l_whence) {
 case 128:
  VAR_8 = 0;
  break;
 case 130:
  VAR_8 = VAR_5->f_pos;
  break;
 case 129:
  VAR_8 = FUNC_1(VAR_5->f_path.dentry->d_inode);
  break;
 default:
  return -VAR_0;
 }



 VAR_8 += VAR_7->l_start;
 if (VAR_8 < 0)
  return -VAR_0;
 VAR_6->fl_end = VAR_3;
 if (VAR_7->l_len > 0) {
  VAR_9 = VAR_8 + VAR_7->l_len - 1;
  VAR_6->fl_end = VAR_9;
 } else if (VAR_7->l_len < 0) {
  VAR_9 = VAR_8 - 1;
  VAR_6->fl_end = VAR_9;
  VAR_8 += VAR_7->l_len;
  if (VAR_8 < 0)
   return -VAR_0;
 }
 VAR_6->fl_start = VAR_8;
 if (VAR_6->fl_end < VAR_6->fl_start)
  return -VAR_1;

 VAR_6->fl_owner = VAR_4->files;
 VAR_6->fl_pid = VAR_4->tgid;
 VAR_6->fl_file = VAR_5;
 VAR_6->fl_flags = VAR_2;
 VAR_6->fl_ops = ((void*)0);
 VAR_6->fl_lmops = ((void*)0);

 return FUNC_0(VAR_6, VAR_7->l_type);
}
