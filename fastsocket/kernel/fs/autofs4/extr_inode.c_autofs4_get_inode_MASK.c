
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {TYPE_2__* s_root; } ;
struct inode {int i_nlink; int * i_op; int i_size; int * i_fop; int i_ctime; int i_mtime; int i_atime; int i_gid; int i_uid; int i_mode; } ;
struct autofs_info {int size; int mode; } ;
struct TYPE_4__ {TYPE_1__* d_inode; } ;
struct TYPE_3__ {int i_gid; int i_uid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct inode* FUNC_2 (struct super_block*) ;

struct inode *FUNC_3(struct super_block *VAR_4,
    struct autofs_info *VAR_5)
{
 struct inode *VAR_6 = FUNC_2(VAR_4);

 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_6->i_mode = VAR_5->mode;
 if (VAR_4->s_root) {
  VAR_6->i_uid = VAR_4->s_root->d_inode->i_uid;
  VAR_6->i_gid = VAR_4->s_root->d_inode->i_gid;
 }
 VAR_6->i_atime = VAR_6->i_mtime = VAR_6->i_ctime = VAR_0;

 if (FUNC_0(VAR_5->mode)) {
  VAR_6->i_nlink = 2;
  VAR_6->i_op = &VAR_1;
  VAR_6->i_fop = &VAR_2;
 } else if (FUNC_1(VAR_5->mode)) {
  VAR_6->i_size = VAR_5->size;
  VAR_6->i_op = &VAR_3;
 }

 return VAR_6;
}
