
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_nlink; int i_gid; int i_uid; int * i_fop; int * i_op; int i_mode; } ;
struct cifs_tcon {scalar_t__ ipc; int resource_id; scalar_t__ unix_ext; } ;
struct cifs_sb_info {int mnt_gid; int mnt_uid; } ;
struct TYPE_2__ {int uniqueid; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct cifs_sb_info* FUNC_1 (struct super_block*) ;
 long VAR_0 ;
 struct inode* FUNC_2 (long) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*) ;
 char* FUNC_6 (struct cifs_sb_info*,struct cifs_tcon*) ;
 long FUNC_7 (struct inode**,char*,int *,struct super_block*,int,int *) ;
 long FUNC_8 (struct inode**,char*,struct super_block*,int) ;
 int VAR_2 ;
 struct cifs_tcon* FUNC_9 (struct cifs_sb_info*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (char*) ;
 int VAR_3 ;

struct inode *FUNC_12(struct super_block *VAR_4)
{
 int VAR_5;
 struct cifs_sb_info *VAR_6 = FUNC_1(VAR_4);
 struct inode *VAR_7 = ((void*)0);
 long VAR_8;
 char *VAR_9;
 struct cifs_tcon *VAR_10 = FUNC_9(VAR_6);

 VAR_9 = FUNC_6(VAR_6, VAR_10);
 if (VAR_9 == ((void*)0))
  return FUNC_2(-VAR_0);

 VAR_5 = FUNC_3();
 if (VAR_10->unix_ext)
  VAR_8 = FUNC_8(&VAR_7, VAR_9, VAR_4, VAR_5);
 else
  VAR_8 = FUNC_7(&VAR_7, VAR_9, ((void*)0), VAR_4,
      VAR_5, ((void*)0));

 if (!VAR_7) {
  VAR_7 = FUNC_2(VAR_8);
  goto out;
 }






 if (VAR_8 && VAR_10->ipc) {
  FUNC_5(1, "ipc connection - fake read inode");
  VAR_7->i_mode |= VAR_1;
  VAR_7->i_nlink = 2;
  VAR_7->i_op = &VAR_2;
  VAR_7->i_fop = &VAR_3;
  VAR_7->i_uid = VAR_6->mnt_uid;
  VAR_7->i_gid = VAR_6->mnt_gid;
 } else if (VAR_8) {
  FUNC_10(VAR_7);
  VAR_7 = FUNC_2(VAR_8);
 }

out:
 FUNC_11(VAR_9);



 FUNC_4(VAR_5);
 return VAR_7;
}
