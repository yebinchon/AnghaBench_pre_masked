
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; int i_ino; } ;
struct hpfs_inode_info {unsigned int i_file_sec; unsigned int i_n_secs; unsigned int i_disk_sec; int mmu_private; } ;
struct fnode {int btree; } ;
struct buffer_head {int dummy; } ;
typedef unsigned int secno ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ,struct inode*,int *,unsigned int,struct buffer_head*) ;
 scalar_t__ FUNC_2 (int ,unsigned int,int,char*) ;
 struct hpfs_inode_info* FUNC_3 (struct inode*) ;
 struct fnode* FUNC_4 (int ,int ,struct buffer_head**) ;

__attribute__((used)) static secno FUNC_5(struct inode *VAR_0, unsigned VAR_1)
{
 struct hpfs_inode_info *VAR_2 = FUNC_3(VAR_0);
 unsigned VAR_3, VAR_4;
 struct fnode *VAR_5;
 struct buffer_head *VAR_6;
 if (FUNC_0(FUNC_3(VAR_0)->mmu_private) <= VAR_1) return 0;
 VAR_3 = VAR_1 - VAR_2->i_file_sec;
 if (VAR_3 < VAR_2->i_n_secs) return VAR_2->i_disk_sec + VAR_3;
 if (!(VAR_5 = FUNC_4(VAR_0->i_sb, VAR_0->i_ino, &VAR_6))) return 0;
 VAR_4 = FUNC_1(VAR_0->i_sb, VAR_0, &VAR_5->btree, VAR_1, VAR_6);
 if (VAR_4 == -1) return 0;
 if (FUNC_2(VAR_0->i_sb, VAR_4, 1, "bmap")) return 0;
 return VAR_4;
}
