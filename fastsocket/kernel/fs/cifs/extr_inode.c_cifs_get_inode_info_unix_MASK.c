
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcon_link {int dummy; } ;
struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int mnt_cifs_flags; int local_nls; } ;
struct cifs_fattr {int dummy; } ;
typedef int FILE_UNIX_BASIC_INFO ;


 int FUNC_0 (struct cifs_fattr*,unsigned char const*,struct cifs_sb_info*,int) ;
 int FUNC_1 (int,struct cifs_tcon*,unsigned char const*,int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct cifs_sb_info* FUNC_2 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct tcon_link*) ;
 int FUNC_4 (struct tcon_link*) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (struct cifs_fattr*,struct super_block*) ;
 int FUNC_7 (struct inode*,struct cifs_fattr*) ;
 int FUNC_8 (struct super_block*,struct cifs_fattr*) ;
 struct inode* FUNC_9 (struct super_block*,struct cifs_fattr*) ;
 int FUNC_10 (struct tcon_link*) ;
 struct tcon_link* FUNC_11 (struct cifs_sb_info*) ;
 int FUNC_12 (struct cifs_fattr*,int *,struct cifs_sb_info*) ;
 struct cifs_tcon* FUNC_13 (struct tcon_link*) ;

int FUNC_14(struct inode **VAR_4,
        const unsigned char *VAR_5,
        struct super_block *VAR_6, int VAR_7)
{
 int VAR_8;
 FILE_UNIX_BASIC_INFO VAR_9;
 struct cifs_fattr VAR_10;
 struct cifs_tcon *VAR_11;
 struct tcon_link *VAR_12;
 struct cifs_sb_info *VAR_13 = FUNC_2(VAR_6);

 FUNC_5(1, "Getting info on %s", VAR_5);

 VAR_12 = FUNC_11(VAR_13);
 if (FUNC_3(VAR_12))
  return FUNC_4(VAR_12);
 VAR_11 = FUNC_13(VAR_12);


 VAR_8 = FUNC_1(VAR_7, VAR_11, VAR_5, &VAR_9,
      VAR_13->local_nls, VAR_13->mnt_cifs_flags &
     VAR_0);
 FUNC_10(VAR_12);

 if (!VAR_8) {
  FUNC_12(&VAR_10, &VAR_9, VAR_13);
 } else if (VAR_8 == -VAR_3) {
  FUNC_6(&VAR_10, VAR_6);
  VAR_8 = 0;
 } else {
  return VAR_8;
 }


 if (VAR_13->mnt_cifs_flags & VAR_1) {
  int VAR_14 = FUNC_0(&VAR_10, VAR_5, VAR_13, VAR_7);
  if (VAR_14)
   FUNC_5(1, "CIFSCheckMFSymlink: %d", VAR_14);
 }

 if (*VAR_4 == ((void*)0)) {

  FUNC_8(VAR_6, &VAR_10);
  *VAR_4 = FUNC_9(VAR_6, &VAR_10);
  if (!*VAR_4)
   VAR_8 = -VAR_2;
 } else {

  FUNC_7(*VAR_4, &VAR_10);
 }

 return VAR_8;
}
