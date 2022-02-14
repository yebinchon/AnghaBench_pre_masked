
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct TYPE_2__ {scalar_t__ name; } ;
struct dentry {scalar_t__ d_parent; TYPE_1__ d_name; int d_sb; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int mnt_cifs_flags; int local_nls; } ;
typedef int __u16 ;


 int FUNC_0 (int,struct cifs_tcon*,int ) ;
 int FUNC_1 (int,struct cifs_tcon*,char const*,int ,int ,int ,int *,int*,int *,int ,int) ;
 int FUNC_2 (int,struct cifs_tcon*,char const*,char const*,int ,int) ;
 int FUNC_3 (int,struct cifs_tcon*,int ,char const*,int ,int) ;
 int VAR_0 ;
 struct cifs_sb_info* FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (struct tcon_link*) ;
 int FUNC_6 (struct tcon_link*) ;
 int FUNC_7 (struct tcon_link*) ;
 struct tcon_link* FUNC_8 (struct cifs_sb_info*) ;
 struct cifs_tcon* FUNC_9 (struct tcon_link*) ;

__attribute__((used)) static int
FUNC_10(int VAR_5, struct dentry *VAR_6, const char *VAR_7,
  struct dentry *VAR_8, const char *VAR_9)
{
 struct cifs_sb_info *VAR_10 = FUNC_4(VAR_6->d_sb);
 struct tcon_link *VAR_11;
 struct cifs_tcon *VAR_12;
 __u16 VAR_13;
 int VAR_14, VAR_15;

 VAR_11 = FUNC_8(VAR_10);
 if (FUNC_5(VAR_11))
  return FUNC_6(VAR_11);
 VAR_12 = FUNC_9(VAR_11);


 VAR_15 = FUNC_2(VAR_5, VAR_12, VAR_7, VAR_9, VAR_10->local_nls,
      VAR_10->mnt_cifs_flags &
    VAR_0);






 if (VAR_15 == 0 || VAR_15 != -VAR_3)
  goto do_rename_exit;


 if (VAR_8->d_parent != VAR_6->d_parent)
  goto do_rename_exit;


 VAR_15 = FUNC_1(VAR_5, VAR_12, VAR_7, VAR_4, VAR_2,
    VAR_1, &VAR_13, &VAR_14, ((void*)0),
    VAR_10->local_nls, VAR_10->mnt_cifs_flags &
    VAR_0);

 if (VAR_15 == 0) {
  VAR_15 = FUNC_3(VAR_5, VAR_12, VAR_13,
    (const char *) VAR_8->d_name.name,
    VAR_10->local_nls, VAR_10->mnt_cifs_flags &
     VAR_0);

  FUNC_0(VAR_5, VAR_12, VAR_13);
 }
do_rename_exit:
 FUNC_7(VAR_11);
 return VAR_15;
}
