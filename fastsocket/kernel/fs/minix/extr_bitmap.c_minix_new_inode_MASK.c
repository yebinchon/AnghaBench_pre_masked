
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; } ;
struct minix_sb_info {int s_imap_blocks; unsigned long s_ninodes; struct buffer_head** s_imap; } ;
struct inode {int i_mode; unsigned long i_ino; scalar_t__ i_blocks; int i_ctime; int i_atime; int i_mtime; int i_gid; int i_uid; struct super_block* i_sb; } ;
struct buffer_head {int b_data; } ;
struct TYPE_2__ {int u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int *,int ,int) ;
 unsigned long FUNC_7 (int ,int) ;
 TYPE_1__* FUNC_8 (struct inode*) ;
 struct minix_sb_info* FUNC_9 (struct super_block*) ;
 scalar_t__ FUNC_10 (unsigned long,int ) ;
 struct inode* FUNC_11 (struct super_block*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

struct inode * FUNC_15(const struct inode * VAR_5, int * VAR_6)
{
 struct super_block *VAR_7 = VAR_5->i_sb;
 struct minix_sb_info *VAR_8 = FUNC_9(VAR_7);
 struct inode *VAR_9 = FUNC_11(VAR_7);
 struct buffer_head * VAR_10;
 int VAR_11 = 8 * VAR_7->s_blocksize;
 unsigned long VAR_12;
 int VAR_13;

 if (!VAR_9) {
  *VAR_6 = -VAR_1;
  return ((void*)0);
 }
 VAR_12 = VAR_11;
 VAR_10 = ((void*)0);
 *VAR_6 = -VAR_2;
 FUNC_13(&VAR_4);
 for (VAR_13 = 0; VAR_13 < VAR_8->s_imap_blocks; VAR_13++) {
  VAR_10 = VAR_8->s_imap[VAR_13];
  VAR_12 = FUNC_7(VAR_10->b_data, VAR_11);
  if (VAR_12 < VAR_11)
   break;
 }
 if (!VAR_10 || VAR_12 >= VAR_11) {
  FUNC_14(&VAR_4);
  FUNC_3(VAR_9);
  return ((void*)0);
 }
 if (FUNC_10(VAR_12, VAR_10->b_data)) {
  FUNC_14(&VAR_4);
  FUNC_12("minix_new_inode: bit already set\n");
  FUNC_3(VAR_9);
  return ((void*)0);
 }
 FUNC_14(&VAR_4);
 FUNC_4(VAR_10);
 VAR_12 += VAR_13 * VAR_11;
 if (!VAR_12 || VAR_12 > VAR_8->s_ninodes) {
  FUNC_3(VAR_9);
  return ((void*)0);
 }
 VAR_9->i_uid = FUNC_1();
 VAR_9->i_gid = (VAR_5->i_mode & VAR_3) ? VAR_5->i_gid : FUNC_0();
 VAR_9->i_ino = VAR_12;
 VAR_9->i_mtime = VAR_9->i_atime = VAR_9->i_ctime = VAR_0;
 VAR_9->i_blocks = 0;
 FUNC_6(&FUNC_8(VAR_9)->u, 0, sizeof(FUNC_8(VAR_9)->u));
 FUNC_2(VAR_9);
 FUNC_5(VAR_9);

 *VAR_6 = 0;
 return VAR_9;
}
