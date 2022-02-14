
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {char* s_id; } ;
struct inode {unsigned long i_ino; struct super_block* i_sb; int i_ctime; int i_mtime; int i_atime; scalar_t__ i_size; int i_data; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct bfs_sb_info {unsigned long si_lasti; scalar_t__ si_lf_eblk; int bfs_lock; struct buffer_head* si_sbh; int si_imap; int si_freei; int si_freeb; } ;
struct bfs_inode_info {scalar_t__ i_sblock; scalar_t__ i_eblock; scalar_t__ i_dsk_ino; } ;
struct bfs_inode {int dummy; } ;


 struct bfs_inode_info* FUNC_0 (struct inode*) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct bfs_sb_info* FUNC_1 (struct super_block*) ;
 int VAR_2 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (char*,unsigned long) ;
 int FUNC_6 (char*,struct super_block*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (void*,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,...) ;
 struct buffer_head* FUNC_13 (struct super_block*,int) ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static void FUNC_15(struct inode *VAR_3)
{
 unsigned long VAR_4 = VAR_3->i_ino;
 struct bfs_inode *VAR_5;
 struct buffer_head *VAR_6;
 int VAR_7, VAR_8;
 struct super_block *VAR_9 = VAR_3->i_sb;
 struct bfs_sb_info *VAR_10 = FUNC_1(VAR_9);
 struct bfs_inode_info *VAR_11 = FUNC_0(VAR_3);

 FUNC_5("ino=%08lx\n", VAR_4);

 FUNC_14(&VAR_3->i_data, 0);

 if ((VAR_4 < VAR_1) || (VAR_4 > VAR_10->si_lasti)) {
  FUNC_12("invalid ino=%08lx\n", VAR_4);
  return;
 }

 VAR_3->i_size = 0;
 VAR_3->i_atime = VAR_3->i_mtime = VAR_3->i_ctime = VAR_2;
 FUNC_10(&VAR_10->bfs_lock);
 FUNC_8(VAR_3);

 VAR_7 = (VAR_4 - VAR_1) / VAR_0 + 1;
 VAR_6 = FUNC_13(VAR_9, VAR_7);
 if (!VAR_6) {
  FUNC_12("Unable to read inode %s:%08lx\n",
     VAR_3->i_sb->s_id, VAR_4);
  FUNC_11(&VAR_10->bfs_lock);
  return;
 }
 VAR_8 = (VAR_4 - VAR_1) % VAR_0;
 VAR_5 = (struct bfs_inode *)VAR_6->b_data + VAR_8;
 FUNC_9((void *)VAR_5, 0, sizeof(struct bfs_inode));
 FUNC_7(VAR_6);
 FUNC_2(VAR_6);

        if (VAR_11->i_dsk_ino) {
  if (VAR_11->i_sblock)
   VAR_10->si_freeb += VAR_11->i_eblock + 1 - VAR_11->i_sblock;
  VAR_10->si_freei++;
  FUNC_3(VAR_4, VAR_10->si_imap);
  FUNC_6("delete_inode", VAR_9);
        }






 if (VAR_10->si_lf_eblk == VAR_11->i_eblock) {
  VAR_10->si_lf_eblk = VAR_11->i_sblock - 1;
  FUNC_7(VAR_10->si_sbh);
 }
 FUNC_11(&VAR_10->bfs_lock);
 FUNC_4(VAR_3);
}
