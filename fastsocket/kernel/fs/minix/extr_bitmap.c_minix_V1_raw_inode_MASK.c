
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_id; } ;
struct minix_sb_info {int s_ninodes; int s_imap_blocks; int s_zmap_blocks; } ;
struct minix_inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int ino_t ;


 int VAR_0 ;
 struct minix_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (char*,...) ;
 struct buffer_head* FUNC_2 (struct super_block*,int) ;

struct minix_inode *
FUNC_3(struct super_block *VAR_1, ino_t VAR_2, struct buffer_head **VAR_3)
{
 int VAR_4;
 struct minix_sb_info *VAR_5 = FUNC_0(VAR_1);
 struct minix_inode *VAR_6;

 if (!VAR_2 || VAR_2 > VAR_5->s_ninodes) {
  FUNC_1("Bad inode number on dev %s: %ld is out of range\n",
         VAR_1->s_id, (long)VAR_2);
  return ((void*)0);
 }
 VAR_2--;
 VAR_4 = 2 + VAR_5->s_imap_blocks + VAR_5->s_zmap_blocks +
   VAR_2 / VAR_0;
 *VAR_3 = FUNC_2(VAR_1, VAR_4);
 if (!*VAR_3) {
  FUNC_1("Unable to read inode block\n");
  return ((void*)0);
 }
 VAR_6 = (void *)(*VAR_3)->b_data;
 return VAR_6 + VAR_2 % VAR_0;
}
