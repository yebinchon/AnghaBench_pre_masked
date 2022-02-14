
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file_lock {scalar_t__ fl_type; int fl_flags; int fl_end; scalar_t__ fl_start; scalar_t__ fl_owner; } ;
struct TYPE_13__ {TYPE_5__* dentry; } ;
struct file {TYPE_6__ f_path; TYPE_1__* f_mapping; } ;
typedef scalar_t__ fl_owner_t ;
struct TYPE_14__ {int flags; } ;
struct TYPE_11__ {int name; } ;
struct TYPE_12__ {TYPE_4__ d_name; TYPE_3__* d_parent; } ;
struct TYPE_9__ {int name; } ;
struct TYPE_10__ {TYPE_2__ d_name; } ;
struct TYPE_8__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_7__* FUNC_0 (struct inode*) ;
 int VAR_4 ;
 int FUNC_1 (struct file*,int,struct file_lock*,int) ;
 int FUNC_2 (struct file*,int,struct file_lock*,int) ;
 int FUNC_3 (char*,int ,int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5, int VAR_6, struct file_lock *VAR_7)
{
 struct inode *VAR_8 = VAR_5->f_mapping->host;
 int VAR_9 = 0;

 FUNC_3("NFS: flock(%s/%s, t=%x, fl=%x)\n",
   VAR_5->f_path.dentry->d_parent->d_name.name,
   VAR_5->f_path.dentry->d_name.name,
   VAR_7->fl_type, VAR_7->fl_flags);

 if (!(VAR_7->fl_flags & VAR_1))
  return -VAR_0;

 if (FUNC_0(VAR_8)->flags & VAR_3)
  VAR_9 = 1;


 VAR_7->fl_owner = (fl_owner_t)VAR_5;
 VAR_7->fl_start = 0;
 VAR_7->fl_end = VAR_4;

 if (VAR_7->fl_type == VAR_2)
  return FUNC_2(VAR_5, VAR_6, VAR_7, VAR_9);
 return FUNC_1(VAR_5, VAR_6, VAR_7, VAR_9);
}
