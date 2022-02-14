
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jfs_sb_info {int dummy; } ;
struct jfs_inode_info {int active_ag; int agno; int ixpxd; } ;
struct inode {int i_ino; int i_sb; } ;
struct iag {int agstart; int * inoext; } ;


 int FUNC_0 (int ,struct jfs_sb_info*) ;
 struct jfs_inode_info* FUNC_1 (struct inode*) ;
 struct jfs_sb_info* FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline void
FUNC_4(struct inode *VAR_1, int VAR_2, int VAR_3, int VAR_4, struct iag * VAR_5)
{
 struct jfs_sb_info *VAR_6 = FUNC_2(VAR_1->i_sb);
 struct jfs_inode_info *VAR_7 = FUNC_1(VAR_1);

 VAR_1->i_ino = (VAR_2 << VAR_0) + VAR_3;
 VAR_7->ixpxd = VAR_5->inoext[VAR_4];
 VAR_7->agno = FUNC_0(FUNC_3(VAR_5->agstart), VAR_6);
 VAR_7->active_ag = -1;
}
