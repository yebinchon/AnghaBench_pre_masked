
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fs_uid; scalar_t__ fs_gid; scalar_t__ quiet; } ;
struct msdos_sb_info {TYPE_1__ options; } ;
struct inode {scalar_t__ i_size; } ;
struct iattr {int ia_valid; scalar_t__ ia_size; scalar_t__ ia_uid; scalar_t__ ia_gid; int ia_mode; } ;
struct dentry {struct inode* d_inode; int d_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct msdos_sb_info* FUNC_0 (int ) ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_1 (struct msdos_sb_info*,struct inode*) ;
 int FUNC_2 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct msdos_sb_info*,struct inode*,int*) ;
 int FUNC_4 (struct inode*,struct iattr*) ;
 int FUNC_5 (struct inode*,struct iattr*) ;

int FUNC_6(struct dentry *VAR_7, struct iattr *VAR_8)
{
 struct msdos_sb_info *VAR_9 = FUNC_0(VAR_7->d_sb);
 struct inode *VAR_10 = VAR_7->d_inode;
 unsigned int VAR_11;
 int VAR_12;






 if (VAR_8->ia_valid & VAR_2) {
  if (VAR_8->ia_size > VAR_10->i_size) {
   VAR_12 = FUNC_2(VAR_10, VAR_8->ia_size);
   if (VAR_12 || VAR_8->ia_valid == VAR_2)
    goto out;
   VAR_8->ia_valid &= ~VAR_2;
  }
 }


 VAR_11 = VAR_8->ia_valid;
 if (VAR_11 & VAR_6) {
  if (FUNC_1(VAR_9, VAR_10))
   VAR_8->ia_valid &= ~VAR_6;
 }

 VAR_12 = FUNC_4(VAR_10, VAR_8);
 VAR_8->ia_valid = VAR_11;
 if (VAR_12) {
  if (VAR_9->options.quiet)
   VAR_12 = 0;
  goto out;
 }

 if (((VAR_8->ia_valid & VAR_3) &&
      (VAR_8->ia_uid != VAR_9->options.fs_uid)) ||
     ((VAR_8->ia_valid & VAR_0) &&
      (VAR_8->ia_gid != VAR_9->options.fs_gid)) ||
     ((VAR_8->ia_valid & VAR_1) &&
      (VAR_8->ia_mode & ~VAR_5)))
  VAR_12 = -VAR_4;

 if (VAR_12) {
  if (VAR_9->options.quiet)
   VAR_12 = 0;
  goto out;
 }





 if (VAR_8->ia_valid & VAR_1) {
  if (FUNC_3(VAR_9, VAR_10, &VAR_8->ia_mode) < 0)
   VAR_8->ia_valid &= ~VAR_1;
 }

 if (VAR_8->ia_valid)
  VAR_12 = FUNC_5(VAR_10, VAR_8);
out:
 return VAR_12;
}
