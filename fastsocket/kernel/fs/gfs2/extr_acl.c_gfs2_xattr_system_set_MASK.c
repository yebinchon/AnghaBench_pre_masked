
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct posix_acl {scalar_t__ a_count; } ;
struct inode {scalar_t__ i_uid; int i_mode; } ;
struct TYPE_2__ {int ar_posix_acl; } ;
struct gfs2_sbd {TYPE_1__ sd_args; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct gfs2_sbd*) ;
 int VAR_7 ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct posix_acl*) ;
 int FUNC_3 (struct posix_acl*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct inode*,int) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (struct inode*,int ,char const*,void const*,size_t,int ) ;
 int FUNC_12 (struct posix_acl*,int *) ;
 struct posix_acl* FUNC_13 (void const*,size_t) ;
 int FUNC_14 (struct posix_acl*) ;
 int FUNC_15 (struct posix_acl*) ;
 int FUNC_16 (struct inode*,int,struct posix_acl*) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_9, const char *VAR_10,
     const void *VAR_11, size_t VAR_12, int VAR_13)
{
 struct gfs2_sbd *VAR_14 = FUNC_1(VAR_9);
 struct posix_acl *VAR_15 = ((void*)0);
 int VAR_16 = 0, VAR_17;

 if (!VAR_14->sd_args.ar_posix_acl)
  return -VAR_5;

 VAR_17 = FUNC_9(VAR_10);
 if (VAR_17 < 0)
  return VAR_17;
 if (VAR_13 & VAR_8)
  return -VAR_4;
 if (VAR_17 == VAR_1 && !FUNC_4(VAR_9->i_mode))
  return VAR_11 ? -VAR_3 : 0;
 if ((FUNC_7() != VAR_9->i_uid) && !FUNC_6(VAR_2))
  return -VAR_6;
 if (FUNC_5(VAR_9->i_mode))
  return -VAR_5;

 if (!VAR_11)
  goto set_acl;

 VAR_15 = FUNC_13(VAR_11, VAR_12);
 if (!VAR_15) {




  goto out;
 }
 if (FUNC_2(VAR_15)) {
  VAR_16 = FUNC_3(VAR_15);
  goto out;
 }

 VAR_16 = FUNC_15(VAR_15);
 if (VAR_16)
  goto out_release;

 VAR_16 = -VAR_4;
 if (VAR_15->a_count > FUNC_0(VAR_14))
  goto out_release;

 if (VAR_17 == VAR_0) {
  mode_t VAR_18 = VAR_9->i_mode;
  VAR_16 = FUNC_12(VAR_15, &VAR_18);

  if (VAR_16 <= 0) {
   FUNC_14(VAR_15);
   VAR_15 = ((void*)0);

   if (VAR_16 < 0)
    return VAR_16;
  }

  VAR_16 = FUNC_10(VAR_9, VAR_18);
  if (VAR_16)
   goto out_release;
 }

set_acl:
 VAR_16 = FUNC_11(VAR_9, VAR_7, VAR_10, VAR_11, VAR_12, 0);
 if (!VAR_16) {
  if (VAR_15)
   FUNC_16(VAR_9, VAR_17, VAR_15);
  else
   FUNC_8(VAR_9, VAR_17);
 }
out_release:
 FUNC_14(VAR_15);
out:
 return VAR_16;
}
