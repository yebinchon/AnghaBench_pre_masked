
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_mode; int i_ctime; int i_mtime; int i_atime; int i_gid; int i_uid; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct inode* FUNC_2 (struct super_block*) ;

__attribute__((used)) static struct inode *
FUNC_3(struct super_block *VAR_1, int VAR_2)
{
 struct inode *VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3)
  goto out;

 VAR_3->i_mode = VAR_2;
 VAR_3->i_uid = FUNC_1();
 VAR_3->i_gid = FUNC_0();
 VAR_3->i_atime = VAR_3->i_mtime = VAR_3->i_ctime = VAR_0;
out:
 return VAR_3;
}
