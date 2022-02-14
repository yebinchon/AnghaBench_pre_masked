
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcon_link {int dummy; } ;
struct inode {int i_sb; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int mnt_cifs_flags; int local_nls; } ;
struct cifs_ntsd {int dummy; } ;
typedef int __u32 ;
typedef int __u16 ;


 int FUNC_0 (int,struct cifs_tcon*,int ) ;
 int FUNC_1 (int,struct cifs_tcon*,char const*,int ,int,int,int *,int*,int *,int ,int) ;
 int FUNC_2 (int,struct cifs_tcon*,int ,struct cifs_ntsd*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cifs_sb_info* FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct tcon_link*) ;
 int FUNC_7 (struct tcon_link*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (struct cifs_sb_info*) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (struct tcon_link*) ;
 struct tcon_link* FUNC_12 (struct cifs_sb_info*) ;
 struct cifs_tcon* FUNC_13 (struct tcon_link*) ;

int FUNC_14(struct cifs_ntsd *VAR_8, __u32 VAR_9,
   struct inode *VAR_10, const char *VAR_11, int VAR_12)
{
 int VAR_13 = 0;
 int VAR_14, VAR_15, VAR_16, VAR_17 = 0;
 __u16 VAR_18;
 struct cifs_tcon *VAR_19;
 struct cifs_sb_info *VAR_20 = FUNC_3(VAR_10->i_sb);
 struct tcon_link *VAR_21 = FUNC_12(VAR_20);

 if (FUNC_6(VAR_21))
  return FUNC_7(VAR_21);

 VAR_19 = FUNC_13(VAR_21);
 VAR_14 = FUNC_5();

 if (FUNC_8(VAR_20))
  VAR_17 |= VAR_3;

 if (VAR_12 == VAR_1 || VAR_12 == VAR_0)
  VAR_16 = VAR_7;
 else
  VAR_16 = VAR_6;

 VAR_15 = FUNC_1(VAR_14, VAR_19, VAR_11, VAR_5, VAR_16,
   VAR_17, &VAR_18, &VAR_13, ((void*)0), VAR_20->local_nls,
   VAR_20->mnt_cifs_flags & VAR_2);
 if (VAR_15) {
  FUNC_9(1, "Unable to open file to set ACL");
  goto out;
 }

 VAR_15 = FUNC_2(VAR_14, VAR_19, VAR_18, VAR_8, VAR_9, VAR_12);
 FUNC_10(VAR_4, "SetCIFSACL rc = %d", VAR_15);

 FUNC_0(VAR_14, VAR_19, VAR_18);
out:
 FUNC_4(VAR_14);
 FUNC_11(VAR_21);
 return VAR_15;
}
