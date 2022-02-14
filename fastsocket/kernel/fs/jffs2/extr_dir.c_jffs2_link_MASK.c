
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct jffs2_sb_info {int dummy; } ;
struct jffs2_inode_info {int sem; TYPE_2__* inocache; } ;
struct inode {int i_mode; int i_count; int i_ctime; int i_mtime; scalar_t__ i_nlink; int i_sb; } ;
struct TYPE_3__ {int len; int name; } ;
struct dentry {struct inode* d_inode; TYPE_1__ d_name; } ;
struct TYPE_4__ {scalar_t__ pino_nlink; int ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct jffs2_inode_info* FUNC_1 (struct inode*) ;
 struct jffs2_sb_info* FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct jffs2_sb_info*,struct jffs2_inode_info*,int ,int,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10 (struct dentry *VAR_4, struct inode *VAR_5, struct dentry *VAR_6)
{
 struct jffs2_sb_info *VAR_7 = FUNC_2(VAR_4->d_inode->i_sb);
 struct jffs2_inode_info *VAR_8 = FUNC_1(VAR_4->d_inode);
 struct jffs2_inode_info *VAR_9 = FUNC_1(VAR_5);
 int VAR_10;
 uint8_t VAR_11;
 uint32_t VAR_12;


 if (!VAR_8->inocache)
  return -VAR_1;

 if (FUNC_3(VAR_4->d_inode->i_mode))
  return -VAR_2;


 VAR_11 = (VAR_4->d_inode->i_mode & VAR_3) >> 12;
 if (!VAR_11) VAR_11 = VAR_0;

 VAR_12 = FUNC_6();
 VAR_10 = FUNC_7(VAR_7, VAR_9, VAR_8->inocache->ino, VAR_11, VAR_6->d_name.name, VAR_6->d_name.len, VAR_12);

 if (!VAR_10) {
  FUNC_8(&VAR_8->sem);
  VAR_4->d_inode->i_nlink = ++VAR_8->inocache->pino_nlink;
  FUNC_9(&VAR_8->sem);
  FUNC_5(VAR_6, VAR_4->d_inode);
  VAR_5->i_mtime = VAR_5->i_ctime = FUNC_0(VAR_12);
  FUNC_4(&VAR_4->d_inode->i_count);
 }
 return VAR_10;
}
