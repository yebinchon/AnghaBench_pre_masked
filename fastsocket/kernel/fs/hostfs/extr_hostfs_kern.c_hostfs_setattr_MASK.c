
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iattr {int ia_valid; int ia_ctime; int ia_mtime; int ia_atime; int ia_size; int ia_gid; int ia_uid; int ia_mode; } ;
struct hostfs_iattr {int ia_valid; int ia_ctime; int ia_mtime; int ia_atime; int ia_size; int ia_gid; int ia_uid; int ia_mode; } ;
struct dentry {int d_inode; } ;
struct TYPE_2__ {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ VAR_19 ;
 char* FUNC_1 (struct dentry*,int ) ;
 int FUNC_2 (int ,struct iattr*) ;
 int FUNC_3 (int ,struct iattr*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,struct hostfs_iattr*,int) ;

int FUNC_6(struct dentry *VAR_20, struct iattr *VAR_21)
{
 struct hostfs_iattr VAR_22;
 char *VAR_23;
 int VAR_24;

 int VAR_25 = FUNC_0(VAR_20->d_inode)->fd;

 VAR_24 = FUNC_2(VAR_20->d_inode, VAR_21);
 if (VAR_24)
  return VAR_24;

 if (VAR_19)
  VAR_21->ia_valid &= ~VAR_7;

 VAR_22.ia_valid = 0;
 if (VAR_21->ia_valid & VAR_4) {
  VAR_22.ia_valid |= VAR_14;
  VAR_22.ia_mode = VAR_21->ia_mode;
 }
 if (VAR_21->ia_valid & VAR_8) {
  VAR_22.ia_valid |= VAR_18;
  VAR_22.ia_uid = VAR_21->ia_uid;
 }
 if (VAR_21->ia_valid & VAR_3) {
  VAR_22.ia_valid |= VAR_13;
  VAR_22.ia_gid = VAR_21->ia_gid;
 }
 if (VAR_21->ia_valid & VAR_7) {
  VAR_22.ia_valid |= VAR_17;
  VAR_22.ia_size = VAR_21->ia_size;
 }
 if (VAR_21->ia_valid & VAR_0) {
  VAR_22.ia_valid |= VAR_10;
  VAR_22.ia_atime = VAR_21->ia_atime;
 }
 if (VAR_21->ia_valid & VAR_5) {
  VAR_22.ia_valid |= VAR_15;
  VAR_22.ia_mtime = VAR_21->ia_mtime;
 }
 if (VAR_21->ia_valid & VAR_2) {
  VAR_22.ia_valid |= VAR_12;
  VAR_22.ia_ctime = VAR_21->ia_ctime;
 }
 if (VAR_21->ia_valid & VAR_1) {
  VAR_22.ia_valid |= VAR_11;
 }
 if (VAR_21->ia_valid & VAR_6) {
  VAR_22.ia_valid |= VAR_16;
 }
 VAR_23 = FUNC_1(VAR_20, 0);
 if (VAR_23 == ((void*)0))
  return -VAR_9;
 VAR_24 = FUNC_5(VAR_23, &VAR_22, VAR_25);
 FUNC_4(VAR_23);
 if (VAR_24)
  return VAR_24;

 return FUNC_3(VAR_20->d_inode, VAR_21);
}
