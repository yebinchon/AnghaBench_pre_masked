
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int s_time_gran; int s_blocksize_bits; int * s_export_op; int s_root; int s_blocksize; int * s_op; int s_magic; int s_maxbytes; int s_flags; } ;
struct inode {int dummy; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;
struct TYPE_4__ {TYPE_1__* ses; } ;
struct TYPE_3__ {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cifs_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*) ;
 int VAR_9 ;
 struct inode* FUNC_5 (struct super_block*) ;
 TYPE_2__* FUNC_6 (struct cifs_sb_info*) ;
 int VAR_10 ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;

__attribute__((used)) static int
FUNC_9(struct super_block *VAR_11)
{
 struct inode *VAR_12;
 struct cifs_sb_info *VAR_13;
 int VAR_14 = 0;

 VAR_13 = FUNC_0(VAR_11);

 if (VAR_13->mnt_cifs_flags & VAR_3)
  VAR_11->s_flags |= VAR_8;

 if (FUNC_6(VAR_13)->ses->capabilities & VAR_0)
  VAR_11->s_maxbytes = VAR_6;
 else
  VAR_11->s_maxbytes = VAR_7;


 VAR_11->s_time_gran = 100;

 VAR_11->s_magic = VAR_1;
 VAR_11->s_op = &VAR_10;
 VAR_11->s_blocksize = VAR_2;
 VAR_11->s_blocksize_bits = 14;
 VAR_12 = FUNC_5(VAR_11);

 if (FUNC_1(VAR_12)) {
  VAR_14 = FUNC_2(VAR_12);
  VAR_12 = ((void*)0);
  goto out_no_root;
 }

 VAR_11->s_root = FUNC_7(VAR_12);

 if (!VAR_11->s_root) {
  VAR_14 = -VAR_5;
  goto out_no_root;
 }
 return 0;

out_no_root:
 FUNC_3(1, "cifs_read_super: get root inode failed");
 if (VAR_12)
  FUNC_8(VAR_12);

 return VAR_14;
}
