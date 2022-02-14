
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file_lock {scalar_t__ fl_type; scalar_t__ fl_end; scalar_t__ fl_start; int fl_flags; } ;
struct TYPE_14__ {TYPE_5__* dentry; } ;
struct file {TYPE_6__ f_path; TYPE_1__* f_mapping; } ;
struct TYPE_16__ {int (* lock_check_bounds ) (struct file_lock*) ;} ;
struct TYPE_15__ {int flags; } ;
struct TYPE_12__ {int name; } ;
struct TYPE_13__ {TYPE_4__ d_name; TYPE_3__* d_parent; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_11__ {TYPE_2__ d_name; } ;
struct TYPE_9__ {struct inode* host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_8__* FUNC_1 (struct inode*) ;
 TYPE_7__* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct file*,int,struct file_lock*,int) ;
 int FUNC_5 (struct file*,int,struct file_lock*,int) ;
 int FUNC_6 (struct file*,int,struct file_lock*,int) ;
 int FUNC_7 (char*,int ,int ,scalar_t__,int ,long long,long long) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (struct file_lock*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_4, int VAR_5, struct file_lock *VAR_6)
{
 struct inode *VAR_7 = VAR_4->f_mapping->host;
 int VAR_8 = -VAR_0;
 int VAR_9 = 0;

 FUNC_7("NFS: lock(%s/%s, t=%x, fl=%x, r=%lld:%lld)\n",
   VAR_4->f_path.dentry->d_parent->d_name.name,
   VAR_4->f_path.dentry->d_name.name,
   VAR_6->fl_type, VAR_6->fl_flags,
   (long long)VAR_6->fl_start, (long long)VAR_6->fl_end);

 FUNC_8(VAR_7, VAR_2);


 if (FUNC_3(VAR_7) && VAR_6->fl_type != VAR_1)
  goto out_err;

 if (FUNC_2(VAR_7)->flags & VAR_3)
  VAR_9 = 1;

 if (FUNC_1(VAR_7)->lock_check_bounds != ((void*)0)) {
  VAR_8 = FUNC_1(VAR_7)->lock_check_bounds(VAR_6);
  if (VAR_8 < 0)
   goto out_err;
 }

 if (FUNC_0(VAR_5))
  VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_9);
 else if (VAR_6->fl_type == VAR_1)
  VAR_8 = FUNC_6(VAR_4, VAR_5, VAR_6, VAR_9);
 else
  VAR_8 = FUNC_5(VAR_4, VAR_5, VAR_6, VAR_9);
out_err:
 return VAR_8;
}
