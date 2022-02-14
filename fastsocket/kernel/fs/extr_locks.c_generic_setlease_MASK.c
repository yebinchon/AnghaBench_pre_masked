
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {scalar_t__ i_uid; struct file_lock* i_flock; int i_count; int i_writecount; int i_mode; } ;
struct file_lock {long fl_type; TYPE_2__* fl_lmops; struct file_lock* fl_next; } ;
struct TYPE_3__ {struct dentry* dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct dentry {int d_count; struct inode* d_inode; } ;
struct TYPE_4__ {int (* fl_change ) (struct file_lock**,long) ;scalar_t__ (* fl_mylease ) (struct file_lock*,struct file_lock*) ;int fl_break; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 long VAR_7 ;
 long VAR_8 ;
 scalar_t__ FUNC_1 (struct file_lock*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 int VAR_9 ;
 struct file_lock* FUNC_6 () ;
 int FUNC_7 (struct file_lock*,struct file_lock*) ;
 int FUNC_8 (struct file_lock*) ;
 int FUNC_9 (struct file_lock**,struct file_lock*) ;
 int FUNC_10 (struct file*,long) ;
 scalar_t__ FUNC_11 (struct file_lock*,struct file_lock*) ;
 int FUNC_12 (struct file_lock**,long) ;
 int FUNC_13 (struct inode*) ;

int FUNC_14(struct file *VAR_10, long VAR_11, struct file_lock **VAR_12)
{
 struct file_lock *VAR_13, **VAR_14, **VAR_15 = ((void*)0), *VAR_16;
 struct file_lock *VAR_17 = ((void*)0);
 struct dentry *VAR_18 = VAR_10->f_path.dentry;
 struct inode *VAR_19 = VAR_18->d_inode;
 int VAR_20, VAR_21 = 0, VAR_22 = 0;

 if ((FUNC_5() != VAR_19->i_uid) && !FUNC_4(VAR_0))
  return -VAR_1;
 if (!FUNC_2(VAR_19->i_mode))
  return -VAR_3;
 VAR_20 = FUNC_10(VAR_10, VAR_11);
 if (VAR_20)
  return VAR_20;

 FUNC_13(VAR_19);

 FUNC_0(!(*VAR_12)->fl_lmops->fl_break);

 VAR_16 = *VAR_12;

 if (VAR_11 != VAR_7) {
  VAR_20 = -VAR_4;
  VAR_17 = FUNC_6();
  if (VAR_17 == ((void*)0))
   goto out;

  VAR_20 = -VAR_2;
  if ((VAR_11 == VAR_6) && (FUNC_3(&VAR_19->i_writecount) > 0))
   goto out;
  if ((VAR_11 == VAR_8)
      && ((FUNC_3(&VAR_18->d_count) > 1)
   || (FUNC_3(&VAR_19->i_count) > 1)))
   goto out;
 }
 for (VAR_14 = &VAR_19->i_flock;
   ((VAR_13 = *VAR_14) != ((void*)0)) && FUNC_1(VAR_13);
   VAR_14 = &VAR_13->fl_next) {
  if (VAR_16->fl_lmops->fl_mylease(VAR_13, VAR_16))
   VAR_15 = VAR_14;
  else if (VAR_13->fl_type == (VAR_5 | VAR_7))





   VAR_22++;
  else
   VAR_21++;
 }

 VAR_20 = -VAR_2;
 if ((VAR_11 == VAR_6 && (VAR_22 > 0)) ||
     (VAR_11 == VAR_8 && ((VAR_21 + VAR_22) > 0)))
  goto out;

 if (VAR_15 != ((void*)0)) {
  *VAR_12 = *VAR_15;
  VAR_20 = VAR_16->fl_lmops->fl_change(VAR_15, VAR_11);
  goto out;
 }

 VAR_20 = 0;
 if (VAR_11 == VAR_7)
  goto out;

 VAR_20 = -VAR_3;
 if (!VAR_9)
  goto out;

 FUNC_7(VAR_17, VAR_16);
 FUNC_9(VAR_14, VAR_17);

 *VAR_12 = VAR_17;
 return 0;

out:
 if (VAR_17 != ((void*)0))
  FUNC_8(VAR_17);
 return VAR_20;
}
