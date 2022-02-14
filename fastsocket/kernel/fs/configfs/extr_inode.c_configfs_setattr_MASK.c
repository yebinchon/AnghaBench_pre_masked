
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct inode {int i_gid; TYPE_1__* i_sb; } ;
struct iattr {unsigned int ia_valid; int ia_mode; void* ia_ctime; void* ia_mtime; void* ia_atime; scalar_t__ ia_gid; scalar_t__ ia_uid; } ;
struct dentry {struct configfs_dirent* d_fsdata; struct inode* d_inode; } ;
struct configfs_dirent {int s_mode; struct iattr* s_iattr; } ;
struct TYPE_2__ {int s_time_gran; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,struct iattr*) ;
 int FUNC_3 (struct inode*,struct iattr*) ;
 struct iattr* FUNC_4 (int,int ) ;
 void* FUNC_5 (void*,int ) ;

int FUNC_6(struct dentry * VAR_12, struct iattr * VAR_13)
{
 struct inode * VAR_14 = VAR_12->d_inode;
 struct configfs_dirent * VAR_15 = VAR_12->d_fsdata;
 struct iattr * VAR_16;
 unsigned int VAR_17 = VAR_13->ia_valid;
 int VAR_18;

 if (!VAR_15)
  return -VAR_8;

 VAR_16 = VAR_15->s_iattr;

 VAR_18 = FUNC_2(VAR_14, VAR_13);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_3(VAR_14, VAR_13);
 if (VAR_18)
  return VAR_18;

 if (!VAR_16) {

  VAR_16 = FUNC_4(sizeof(struct iattr), VAR_10);
  if (!VAR_16)
   return -VAR_9;

  VAR_16->ia_mode = VAR_15->s_mode;
  VAR_16->ia_uid = 0;
  VAR_16->ia_gid = 0;
  VAR_16->ia_atime = VAR_16->ia_mtime = VAR_16->ia_ctime = VAR_7;
  VAR_15->s_iattr = VAR_16;
 }



 if (VAR_17 & VAR_5)
  VAR_16->ia_uid = VAR_13->ia_uid;
 if (VAR_17 & VAR_2)
  VAR_16->ia_gid = VAR_13->ia_gid;
 if (VAR_17 & VAR_0)
  VAR_16->ia_atime = FUNC_5(VAR_13->ia_atime,
      VAR_14->i_sb->s_time_gran);
 if (VAR_17 & VAR_4)
  VAR_16->ia_mtime = FUNC_5(VAR_13->ia_mtime,
      VAR_14->i_sb->s_time_gran);
 if (VAR_17 & VAR_1)
  VAR_16->ia_ctime = FUNC_5(VAR_13->ia_ctime,
      VAR_14->i_sb->s_time_gran);
 if (VAR_17 & VAR_3) {
  umode_t VAR_19 = VAR_13->ia_mode;

  if (!FUNC_1(VAR_14->i_gid) && !FUNC_0(VAR_6))
   VAR_19 &= ~VAR_11;
  VAR_16->ia_mode = VAR_15->s_mode = VAR_19;
 }

 return VAR_18;
}
