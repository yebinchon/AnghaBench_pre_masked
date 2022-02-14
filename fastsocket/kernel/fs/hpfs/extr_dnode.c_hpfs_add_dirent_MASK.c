
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct quad_buffer_head {int dummy; } ;
struct inode {int i_sb; int i_version; } ;
struct hpfs_inode_info {int i_dno; } ;
struct hpfs_dirent {scalar_t__ down; int last; int namelen; int name; } ;
struct dnode {int dummy; } ;
typedef int dnode_secno ;
struct TYPE_2__ {scalar_t__ sb_chk; } ;


 int VAR_0 ;
 int FUNC_0 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_1 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_2 (struct dnode*) ;
 struct hpfs_dirent* FUNC_3 (struct dnode*) ;
 int FUNC_4 (struct inode*,int ,unsigned char*,unsigned int,struct hpfs_dirent*,int ) ;
 int FUNC_5 (struct quad_buffer_head*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,unsigned char*,unsigned int,int ,int ,int ) ;
 struct hpfs_inode_info* FUNC_8 (struct inode*) ;
 int FUNC_9 (int ) ;
 struct dnode* FUNC_10 (int ,int ,struct quad_buffer_head*) ;
 TYPE_1__* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int ,int*,int*,char*) ;
 int FUNC_13 (int ) ;

int FUNC_14(struct inode *VAR_1, unsigned char *VAR_2, unsigned VAR_3,
      struct hpfs_dirent *VAR_4, int VAR_5)
{
 struct hpfs_inode_info *VAR_6 = FUNC_8(VAR_1);
 struct dnode *VAR_7;
 struct hpfs_dirent *VAR_8, *VAR_9;
 struct quad_buffer_head VAR_10;
 dnode_secno VAR_11;
 int VAR_12;
 int VAR_13, VAR_14 = 0;
 VAR_11 = VAR_6->i_dno;
 down:
 if (FUNC_11(VAR_1->i_sb)->sb_chk)
  if (FUNC_12(VAR_1->i_sb, VAR_11, &VAR_13, &VAR_14, "hpfs_add_dirent")) return 1;
 if (!(VAR_7 = FUNC_10(VAR_1->i_sb, VAR_11, &VAR_10))) return 1;
 VAR_9 = FUNC_2(VAR_7);
 for (VAR_8 = FUNC_3(VAR_7); VAR_8 < VAR_9; VAR_8 = FUNC_1(VAR_8)) {
  if (!(VAR_12 = FUNC_7(VAR_1->i_sb, VAR_2, VAR_3, VAR_8->name, VAR_8->namelen, VAR_8->last))) {
   FUNC_5(&VAR_10);
   return -1;
  }
  if (VAR_12 < 0) {
   if (VAR_8->down) {
    VAR_11 = FUNC_0(VAR_8);
    FUNC_5(&VAR_10);
    goto down;
   }
   break;
  }
 }
 FUNC_5(&VAR_10);
 if (!VAR_5) FUNC_9(VAR_1->i_sb);
 if (FUNC_6(VAR_1->i_sb, VAR_0)) {
  VAR_12 = 1;
  goto ret;
 }
 VAR_1->i_version++;
 VAR_12 = FUNC_4(VAR_1, VAR_11, VAR_2, VAR_3, VAR_4, 0);
 ret:
 if (!VAR_5) FUNC_13(VAR_1->i_sb);
 return VAR_12;
}
