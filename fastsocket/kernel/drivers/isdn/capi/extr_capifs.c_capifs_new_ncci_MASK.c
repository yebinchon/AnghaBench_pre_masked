
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {unsigned int i_ino; int i_ctime; int i_atime; int i_mtime; int i_gid; int i_uid; } ;
struct dentry {int d_inode; } ;
typedef int dev_t ;
struct TYPE_8__ {int mnt_sb; } ;
struct TYPE_7__ {TYPE_1__* d_inode; } ;
struct TYPE_6__ {int mode; int gid; scalar_t__ setgid; int uid; scalar_t__ setuid; } ;
struct TYPE_5__ {int i_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_4 (unsigned int) ;
 int FUNC_5 (struct inode*,int,int ) ;
 int FUNC_6 (int *) ;
 struct inode* FUNC_7 (int ) ;

void FUNC_8(unsigned int VAR_5, dev_t VAR_6)
{
 struct dentry *VAR_7;
 struct inode *VAR_8 = FUNC_7(VAR_2->mnt_sb);
 if (!VAR_8)
  return;
 VAR_8->i_ino = VAR_5+2;

 VAR_7 = FUNC_4(VAR_5);


 VAR_8->i_uid = VAR_4.setuid ? VAR_4.uid : FUNC_2();
 VAR_8->i_gid = VAR_4.setgid ? VAR_4.gid : FUNC_1();
 VAR_8->i_mtime = VAR_8->i_atime = VAR_8->i_ctime = VAR_0;
 FUNC_5(VAR_8, VAR_1|VAR_4.mode, VAR_6);


 if (!FUNC_0(VAR_7) && !VAR_7->d_inode)
  FUNC_3(VAR_7, VAR_8);
 FUNC_6(&VAR_3->d_inode->i_mutex);
}
