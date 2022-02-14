
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcon_link {int dummy; } ;
struct inode {int i_sb; } ;
struct dentry {int * d_op; } ;
struct cifs_tcon {scalar_t__ nocase; scalar_t__ unix_ext; } ;
struct cifs_sb_info {int mnt_cifs_flags; int local_nls; } ;


 int FUNC_0 (int,struct cifs_tcon*,char*,char const*,struct cifs_sb_info*) ;
 int FUNC_1 (int,struct cifs_tcon*,char*,char const*,int ) ;
 int VAR_0 ;
 struct cifs_sb_info* FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct tcon_link*) ;
 int FUNC_6 (struct tcon_link*) ;
 char* FUNC_7 (struct dentry*) ;
 int FUNC_8 (int,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (struct inode**,char*,int *,int ,int,int *) ;
 int FUNC_10 (struct inode**,char*,int ,int) ;
 int FUNC_11 (struct tcon_link*) ;
 struct tcon_link* FUNC_12 (struct cifs_sb_info*) ;
 int FUNC_13 (struct dentry*,struct inode*) ;
 int FUNC_14 (char*) ;
 struct cifs_tcon* FUNC_15 (struct tcon_link*) ;

int
FUNC_16(struct inode *VAR_5, struct dentry *VAR_6, const char *VAR_7)
{
 int VAR_8 = -VAR_2;
 int VAR_9;
 struct cifs_sb_info *VAR_10 = FUNC_2(VAR_5->i_sb);
 struct tcon_link *VAR_11;
 struct cifs_tcon *VAR_12;
 char *VAR_13 = ((void*)0);
 struct inode *VAR_14 = ((void*)0);

 VAR_9 = FUNC_4();

 VAR_11 = FUNC_12(VAR_10);
 if (FUNC_5(VAR_11)) {
  VAR_8 = FUNC_6(VAR_11);
  goto symlink_exit;
 }
 VAR_12 = FUNC_15(VAR_11);

 VAR_13 = FUNC_7(VAR_6);
 if (VAR_13 == ((void*)0)) {
  VAR_8 = -VAR_1;
  goto symlink_exit;
 }

 FUNC_8(1, "Full path: %s", VAR_13);
 FUNC_8(1, "symname is %s", VAR_7);


 if (VAR_10->mnt_cifs_flags & VAR_0)
  VAR_8 = FUNC_0(VAR_9, VAR_12, VAR_13, VAR_7,
      VAR_10);
 else if (VAR_12->unix_ext)
  VAR_8 = FUNC_1(VAR_9, VAR_12, VAR_13, VAR_7,
        VAR_10->local_nls);




 if (VAR_8 == 0) {
  if (VAR_12->unix_ext)
   VAR_8 = FUNC_10(&VAR_14, VAR_13,
            VAR_5->i_sb, VAR_9);
  else
   VAR_8 = FUNC_9(&VAR_14, VAR_13, ((void*)0),
       VAR_5->i_sb, VAR_9, ((void*)0));

  if (VAR_8 != 0) {
   FUNC_8(1, "Create symlink ok, getinodeinfo fail rc = %d",
         VAR_8);
  } else {
   if (VAR_12->nocase)
    VAR_6->d_op = &VAR_3;
   else
    VAR_6->d_op = &VAR_4;
   FUNC_13(VAR_6, VAR_14);
  }
 }
symlink_exit:
 FUNC_14(VAR_13);
 FUNC_11(VAR_11);
 FUNC_3(VAR_9);
 return VAR_8;
}
