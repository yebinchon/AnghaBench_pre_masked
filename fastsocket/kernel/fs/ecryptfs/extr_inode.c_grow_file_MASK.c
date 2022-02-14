
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp_file_info ;
struct inode {int dummy; } ;
struct TYPE_4__ {struct dentry* dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct ecryptfs_file_info {TYPE_1__ f_path; } ;
struct dentry {struct inode* d_inode; } ;
typedef int fake_file ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_2__ crypt_stat; int lower_file; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct file*,int ) ;
 int FUNC_2 (struct file*,struct file*) ;
 int FUNC_3 (struct file*,char*,int ,int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct file*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct dentry *VAR_1)
{
 struct inode *VAR_2 = VAR_1->d_inode;
 struct file VAR_3;
 struct ecryptfs_file_info VAR_4;
 char VAR_5[] = { 0x00 };
 int VAR_6 = 0;

 FUNC_6(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.f_path.dentry = VAR_1;
 FUNC_6(&VAR_4, 0, sizeof(VAR_4));
 FUNC_2(&VAR_3, &VAR_4);
 FUNC_1(
  &VAR_3,
  FUNC_0(VAR_2)->lower_file);
 VAR_6 = FUNC_3(&VAR_3, VAR_5, 0, 1);
 FUNC_5(VAR_2, 0);
 VAR_6 = FUNC_4(VAR_2);
 FUNC_0(VAR_2)->crypt_stat.flags |=
  VAR_0;
 return VAR_6;
}
