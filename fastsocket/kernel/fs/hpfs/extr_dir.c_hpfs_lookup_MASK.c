
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct quad_buffer_head {int dummy; } ;
struct nameidata {int dummy; } ;
struct TYPE_15__ {int * a_ops; } ;
struct TYPE_14__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct TYPE_13__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct TYPE_12__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct inode {int i_state; int i_mode; int i_nlink; int i_size; int i_blocks; TYPE_5__ i_data; TYPE_4__ i_atime; TYPE_6__* i_sb; TYPE_3__ i_mtime; TYPE_2__ i_ctime; int i_ino; int * i_fop; int * i_op; } ;
struct hpfs_inode_info {int mmu_private; int i_ea_mode; scalar_t__ i_ea_size; int i_parent_dir; int i_dno; } ;
struct hpfs_dirent {int file_size; scalar_t__ directory; scalar_t__ read_only; scalar_t__ ea_size; int read_date; int write_date; int creation_date; scalar_t__ has_xtd_perm; scalar_t__ has_acl; int fnode; } ;
struct TYPE_11__ {char* name; unsigned int len; } ;
struct dentry {TYPE_1__ d_name; } ;
typedef int ino_t ;
struct TYPE_17__ {scalar_t__ sb_eas; } ;
struct TYPE_16__ {int s_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 int VAR_5 ;
 int FUNC_2 (struct quad_buffer_head*) ;
 int FUNC_3 (char*,unsigned int*) ;
 int FUNC_4 (struct inode*,char*,unsigned int) ;
 int FUNC_5 (TYPE_6__*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct hpfs_inode_info* FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 TYPE_8__* FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (struct dentry*) ;
 struct inode* FUNC_11 (TYPE_6__*,int ) ;
 void* FUNC_12 (TYPE_6__*,int ) ;
 int FUNC_13 () ;
 struct hpfs_dirent* FUNC_14 (struct inode*,int ,char*,unsigned int,int *,struct quad_buffer_head*) ;
 int FUNC_15 () ;
 int FUNC_16 (struct inode*) ;

struct dentry *FUNC_17(struct inode *VAR_8, struct dentry *VAR_9, struct nameidata *VAR_10)
{
 const char *VAR_11 = VAR_9->d_name.name;
 unsigned VAR_12 = VAR_9->d_name.len;
 struct quad_buffer_head VAR_13;
 struct hpfs_dirent *VAR_14;
 ino_t VAR_15;
 int VAR_16;
 struct inode *VAR_17 = ((void*)0);
 struct hpfs_inode_info *VAR_18;

 FUNC_13();
 if ((VAR_16 = FUNC_3((char *)VAR_11, &VAR_12))) {
  if (VAR_16 == -VAR_0) {
   FUNC_15();
   return FUNC_0(-VAR_0);
  }
  goto end_add;
 }





 VAR_14 = FUNC_14(VAR_8, FUNC_6(VAR_8)->i_dno, (char *) VAR_11, VAR_12, ((void*)0), &VAR_13);





 if (!VAR_14) goto end;





 VAR_15 = VAR_14->fnode;





 VAR_17 = FUNC_11(VAR_8->i_sb, VAR_15);
 if (!VAR_17) {
  FUNC_5(VAR_8->i_sb, "hpfs_lookup: can't get inode");
  goto bail1;
 }
 if (VAR_17->i_state & VAR_2) {
  FUNC_7(VAR_17);
  if (VAR_14->directory)
   FUNC_8(VAR_17);
  else if (VAR_14->ea_size && FUNC_9(VAR_8->i_sb)->sb_eas)
   FUNC_8(VAR_17);
  else {
   VAR_17->i_mode |= VAR_4;
   VAR_17->i_mode &= ~0111;
   VAR_17->i_op = &VAR_6;
   VAR_17->i_fop = &VAR_7;
   VAR_17->i_nlink = 1;
  }
  FUNC_16(VAR_17);
 }
 VAR_18 = FUNC_6(VAR_17);
 if (!VAR_14->directory) VAR_18->i_parent_dir = VAR_8->i_ino;

 FUNC_4(VAR_17, (char *)VAR_11, VAR_12);

 if (VAR_14->has_acl || VAR_14->has_xtd_perm) if (!(VAR_8->i_sb->s_flags & VAR_3)) {
  FUNC_5(VAR_17->i_sb, "ACLs or XPERM found. This is probably HPFS386. This driver doesn't support it now. Send me some info on these structures");
  goto bail1;
 }






 if (!VAR_17->i_ctime.tv_sec) {
  if (!(VAR_17->i_ctime.tv_sec = FUNC_12(VAR_8->i_sb, VAR_14->creation_date)))
   VAR_17->i_ctime.tv_sec = 1;
  VAR_17->i_ctime.tv_nsec = 0;
  VAR_17->i_mtime.tv_sec = FUNC_12(VAR_8->i_sb, VAR_14->write_date);
  VAR_17->i_mtime.tv_nsec = 0;
  VAR_17->i_atime.tv_sec = FUNC_12(VAR_8->i_sb, VAR_14->read_date);
  VAR_17->i_atime.tv_nsec = 0;
  VAR_18->i_ea_size = VAR_14->ea_size;
  if (!VAR_18->i_ea_mode && VAR_14->read_only)
   VAR_17->i_mode &= ~0222;
  if (!VAR_14->directory) {
   if (VAR_17->i_size == -1) {
    VAR_17->i_size = VAR_14->file_size;
    VAR_17->i_data.a_ops = &VAR_5;
    FUNC_6(VAR_17)->mmu_private = VAR_17->i_size;






    VAR_17->i_blocks = 1 + ((VAR_17->i_size + 511) >> 9);
   }
  }
 }

 FUNC_2(&VAR_13);





 end:
 end_add:
 FUNC_10(VAR_9);
 FUNC_15();
 FUNC_1(VAR_9, VAR_17);
 return ((void*)0);




 bail1:

 FUNC_2(&VAR_13);



 FUNC_15();
 return FUNC_0(-VAR_1);
}
