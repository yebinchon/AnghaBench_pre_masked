
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct TYPE_11__ {int * a_ops; } ;
struct TYPE_10__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_9__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_8__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct inode {int i_mode; int i_nlink; int i_blocks; scalar_t__ i_uid; scalar_t__ i_gid; int i_sb; void* i_ino; TYPE_5__ i_data; scalar_t__ i_size; TYPE_4__ i_atime; TYPE_3__ i_mtime; TYPE_2__ i_ctime; int * i_fop; int * i_op; } ;
struct hpfs_dirent {int read_only; int archive; int hidden; int creation_date; int read_date; int write_date; void* fnode; } ;
struct fnode {unsigned int len; void* up; int name; } ;
struct TYPE_7__ {char* name; unsigned int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct buffer_head {int dummy; } ;
typedef void* fnode_secno ;
struct TYPE_12__ {int i_mutex; scalar_t__ mmu_private; scalar_t__ i_ea_size; void* i_parent_dir; int i_dno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct inode*,char*,unsigned int,struct hpfs_dirent*,int ) ;
 struct fnode* FUNC_7 (int ,int ,void**,struct buffer_head**) ;
 int VAR_5 ;
 int FUNC_8 (char*,unsigned int*) ;
 int FUNC_9 (struct inode*,char*,unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int ,void*,int) ;
 TYPE_6__* FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 () ;
 int FUNC_18 (struct buffer_head*) ;
 int FUNC_19 (int ,char const*,int) ;
 int FUNC_20 (struct hpfs_dirent*,int ,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 struct inode* FUNC_23 (int ) ;
 int FUNC_24 () ;

__attribute__((used)) static int FUNC_25(struct inode *VAR_8, struct dentry *VAR_9, int VAR_10, struct nameidata *VAR_11)
{
 const char *VAR_12 = VAR_9->d_name.name;
 unsigned VAR_13 = VAR_9->d_name.len;
 struct inode *VAR_14 = ((void*)0);
 struct buffer_head *VAR_15;
 struct fnode *VAR_16;
 fnode_secno VAR_17;
 int VAR_18;
 struct hpfs_dirent VAR_19;
 int VAR_20;
 if ((VAR_20 = FUNC_8((char *)VAR_12, &VAR_13)))
  return VAR_20==-VAR_2 ? -VAR_1 : VAR_20;
 FUNC_17();
 VAR_20 = -VAR_3;
 VAR_16 = FUNC_7(VAR_8->i_sb, FUNC_11(VAR_8)->i_dno, &VAR_17, &VAR_15);
 if (!VAR_16)
  goto bail;
 FUNC_20(&VAR_19, 0, sizeof VAR_19);
 if (!(VAR_10 & 0222)) VAR_19.read_only = 1;
 VAR_19.archive = 1;
 VAR_19.hidden = VAR_12[0] == '.';
 VAR_19.fnode = VAR_17;
 VAR_19.creation_date = VAR_19.write_date = VAR_19.read_date = FUNC_5(VAR_8->i_sb, FUNC_4());

 VAR_14 = FUNC_23(VAR_8->i_sb);
 if (!VAR_14)
  goto bail1;

 FUNC_12(VAR_14);
 VAR_14->i_ino = VAR_17;
 VAR_14->i_mode |= VAR_4;
 VAR_14->i_mode &= ~0111;
 VAR_14->i_op = &VAR_6;
 VAR_14->i_fop = &VAR_7;
 VAR_14->i_nlink = 1;
 FUNC_9(VAR_14, (char *)VAR_12, VAR_13);
 FUNC_11(VAR_14)->i_parent_dir = VAR_8->i_ino;
 VAR_14->i_ctime.tv_sec = VAR_14->i_mtime.tv_sec = VAR_14->i_atime.tv_sec = FUNC_16(VAR_8->i_sb, VAR_19.creation_date);
 VAR_14->i_ctime.tv_nsec = 0;
 VAR_14->i_mtime.tv_nsec = 0;
 VAR_14->i_atime.tv_nsec = 0;
 FUNC_11(VAR_14)->i_ea_size = 0;
 if (VAR_19.read_only)
  VAR_14->i_mode &= ~0222;
 VAR_14->i_blocks = 1;
 VAR_14->i_size = 0;
 VAR_14->i_data.a_ops = &VAR_5;
 FUNC_11(VAR_14)->mmu_private = 0;

 FUNC_21(&FUNC_11(VAR_8)->i_mutex);
 VAR_18 = FUNC_6(VAR_8, (char *)VAR_12, VAR_13, &VAR_19, 0);
 if (VAR_18 == 1)
  goto bail2;
 if (VAR_18 == -1) {
  VAR_20 = -VAR_0;
  goto bail2;
 }
 VAR_16->len = VAR_13;
 FUNC_19(VAR_16->name, VAR_12, VAR_13 > 15 ? 15 : VAR_13);
 VAR_16->up = VAR_8->i_ino;
 FUNC_18(VAR_15);
 FUNC_0(VAR_15);

 FUNC_14(VAR_14);

 if (VAR_14->i_uid != FUNC_2() ||
     VAR_14->i_gid != FUNC_1() ||
     VAR_14->i_mode != (VAR_10 | VAR_4)) {
  VAR_14->i_uid = FUNC_2();
  VAR_14->i_gid = FUNC_1();
  VAR_14->i_mode = VAR_10 | VAR_4;
  FUNC_13(VAR_14);
 }
 FUNC_3(VAR_9, VAR_14);
 FUNC_22(&FUNC_11(VAR_8)->i_mutex);
 FUNC_24();
 return 0;

bail2:
 FUNC_22(&FUNC_11(VAR_8)->i_mutex);
 FUNC_15(VAR_14);
bail1:
 FUNC_0(VAR_15);
 FUNC_10(VAR_8->i_sb, VAR_17, 1);
bail:
 FUNC_24();
 return VAR_20;
}
