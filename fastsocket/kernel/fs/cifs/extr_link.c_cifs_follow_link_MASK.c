
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct nameidata {int dummy; } ;
struct inode {int i_sb; } ;
struct dentry {struct inode* d_inode; } ;
struct cifs_tcon {TYPE_1__* ses; } ;
struct cifs_sb_info {int mnt_cifs_flags; int local_nls; } ;
struct TYPE_2__ {int capabilities; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct cifs_tcon*,char*,char**,int ,int) ;
 int FUNC_1 (int,struct cifs_tcon*,char*,char**,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct cifs_sb_info* FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct tcon_link*) ;
 int FUNC_7 (struct tcon_link*) ;
 char* FUNC_8 (struct dentry*) ;
 int FUNC_9 (int,char*,char*,struct inode*) ;
 int FUNC_10 (struct tcon_link*) ;
 struct tcon_link* FUNC_11 (struct cifs_sb_info*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct nameidata*,char*) ;
 struct cifs_tcon* FUNC_14 (struct tcon_link*) ;

void *
FUNC_15(struct dentry *VAR_5, struct nameidata *VAR_6)
{
 struct inode *VAR_7 = VAR_5->d_inode;
 int VAR_8 = -VAR_4;
 int VAR_9;
 char *VAR_10 = ((void*)0);
 char *VAR_11 = ((void*)0);
 struct cifs_sb_info *VAR_12 = FUNC_2(VAR_7->i_sb);
 struct tcon_link *VAR_13 = ((void*)0);
 struct cifs_tcon *VAR_14;

 VAR_9 = FUNC_5();

 VAR_13 = FUNC_11(VAR_12);
 if (FUNC_6(VAR_13)) {
  VAR_8 = FUNC_7(VAR_13);
  VAR_13 = ((void*)0);
  goto out;
 }
 VAR_14 = FUNC_14(VAR_13);
 if (!(VAR_12->mnt_cifs_flags & VAR_2)
     && !(VAR_14->ses->capabilities & VAR_0)) {
  VAR_8 = -VAR_3;
  goto out;
 }

 VAR_10 = FUNC_8(VAR_5);
 if (!VAR_10)
  goto out;

 FUNC_9(1, "Full path: %s inode = 0x%p", VAR_10, VAR_7);

 VAR_8 = -VAR_3;




 if (VAR_12->mnt_cifs_flags & VAR_2)
  VAR_8 = FUNC_0(VAR_9, VAR_14, VAR_10, &VAR_11,
     VAR_12->local_nls,
     VAR_12->mnt_cifs_flags &
      VAR_1);

 if ((VAR_8 != 0) && (VAR_14->ses->capabilities & VAR_0))
  VAR_8 = FUNC_1(VAR_9, VAR_14, VAR_10, &VAR_11,
          VAR_12->local_nls);

 FUNC_12(VAR_10);
out:
 if (VAR_8 != 0) {
  FUNC_12(VAR_11);
  VAR_11 = FUNC_3(VAR_8);
 }

 FUNC_4(VAR_9);
 if (VAR_13)
  FUNC_10(VAR_13);
 FUNC_13(VAR_6, VAR_11);
 return ((void*)0);
}
