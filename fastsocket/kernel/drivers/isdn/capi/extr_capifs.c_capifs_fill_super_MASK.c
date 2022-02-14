
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; int s_blocksize_bits; int s_time_gran; int s_root; int * s_op; int s_magic; } ;
struct inode {int i_ino; int i_mode; int i_nlink; int * i_fop; int * i_op; int i_ctime; int i_atime; int i_mtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct super_block*) ;
 int FUNC_3 (char*) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_4(struct super_block *VAR_11, void *VAR_12, int VAR_13)
{
 struct inode * VAR_14;

 VAR_11->s_blocksize = 1024;
 VAR_11->s_blocksize_bits = 10;
 VAR_11->s_magic = VAR_0;
 VAR_11->s_op = &VAR_8;
 VAR_11->s_time_gran = 1;

 VAR_14 = FUNC_2(VAR_11);
 if (!VAR_14)
  goto fail;
 VAR_14->i_ino = 1;
 VAR_14->i_mtime = VAR_14->i_atime = VAR_14->i_ctime = VAR_1;
 VAR_14->i_mode = VAR_3 | VAR_4 | VAR_6 | VAR_5;
 VAR_14->i_op = &VAR_9;
 VAR_14->i_fop = &VAR_10;
 VAR_14->i_nlink = 2;

 VAR_7 = VAR_11->s_root = FUNC_0(VAR_14);
 if (VAR_11->s_root)
  return 0;

 FUNC_3("capifs: get root dentry failed\n");
 FUNC_1(VAR_14);
fail:
 return -VAR_2;
}
