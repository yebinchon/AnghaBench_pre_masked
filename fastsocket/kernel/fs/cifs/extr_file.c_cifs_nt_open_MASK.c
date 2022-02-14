
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct cifs_tcon {scalar_t__ unix_ext; TYPE_1__* ses; } ;
struct cifs_sb_info {int mnt_cifs_flags; int local_nls; } ;
typedef int __u32 ;
typedef int __u16 ;
struct TYPE_2__ {int capabilities; } ;
typedef int FILE_ALL_INFO ;


 int VAR_0 ;
 int FUNC_0 (int,struct cifs_tcon*,char*,int,int,int,int *,int *,int *,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,struct cifs_tcon*,char*,int,int,int,int *,int *,int *,int ,int) ;
 scalar_t__ FUNC_2 (struct cifs_sb_info*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct inode**,char*,int *,int ,int,int *) ;
 int FUNC_6 (struct inode**,char*,int ,int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int,int ) ;

__attribute__((used)) static int
FUNC_9(char *VAR_6, struct inode *VAR_7, struct cifs_sb_info *VAR_8,
      struct cifs_tcon *VAR_9, unsigned int VAR_10, __u32 *VAR_11,
      __u16 *VAR_12, int VAR_13)
{
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17 = VAR_2;
 FILE_ALL_INFO *VAR_18;

 VAR_15 = FUNC_3(VAR_10);
 VAR_16 = FUNC_4(VAR_10);



 VAR_18 = FUNC_8(sizeof(FILE_ALL_INFO), VAR_5);
 if (!VAR_18)
  return -VAR_4;

 if (FUNC_2(VAR_8))
  VAR_17 |= VAR_3;

 if (VAR_9->ses->capabilities & VAR_0)
  VAR_14 = FUNC_0(VAR_13, VAR_9, VAR_6, VAR_16,
    VAR_15, VAR_17, VAR_12, VAR_11, VAR_18,
    VAR_8->local_nls, VAR_8->mnt_cifs_flags
     & VAR_1);
 else
  VAR_14 = FUNC_1(VAR_13, VAR_9, VAR_6, VAR_16,
   VAR_15, VAR_2, VAR_12, VAR_11, VAR_18,
   VAR_8->local_nls, VAR_8->mnt_cifs_flags
    & VAR_1);

 if (VAR_14)
  goto out;

 if (VAR_9->unix_ext)
  VAR_14 = FUNC_6(&VAR_7, VAR_6, VAR_7->i_sb,
           VAR_13);
 else
  VAR_14 = FUNC_5(&VAR_7, VAR_6, VAR_18, VAR_7->i_sb,
      VAR_13, VAR_12);

out:
 FUNC_7(VAR_18);
 return VAR_14;
}
