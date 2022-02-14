
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


struct TYPE_10__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_9__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_8__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct inode {int i_nlink; int i_blocks; int i_sb; void* i_ino; scalar_t__ i_size; int i_gid; int i_uid; TYPE_4__ i_atime; TYPE_3__ i_mtime; TYPE_2__ i_ctime; } ;
struct hpfs_dirent {int read_only; int archive; int hidden; int creation_date; int read_date; int write_date; void* fnode; } ;
struct fnode {unsigned int len; void* up; int name; } ;
struct TYPE_7__ {char* name; unsigned int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct buffer_head {int dummy; } ;
typedef void* fnode_secno ;
typedef int dev_t ;
struct TYPE_12__ {int i_mutex; scalar_t__ i_ea_size; void* i_parent_dir; int i_dno; } ;
struct TYPE_11__ {int sb_eas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct inode*,char*,unsigned int,struct hpfs_dirent*,int ) ;
 struct fnode* FUNC_7 (int ,int ,void**,struct buffer_head**) ;
 int FUNC_8 (char*,unsigned int*) ;
 int FUNC_9 (int ,void*,int) ;
 TYPE_6__* FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 TYPE_5__* FUNC_12 (int ) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*,int,int ) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 () ;
 int FUNC_19 (struct buffer_head*) ;
 int FUNC_20 (int ,char const*,int) ;
 int FUNC_21 (struct hpfs_dirent*,int ,int) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 struct inode* FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 () ;

__attribute__((used)) static int FUNC_27(struct inode *VAR_5, struct dentry *VAR_6, int VAR_7, dev_t VAR_8)
{
 const char *VAR_9 = VAR_6->d_name.name;
 unsigned VAR_10 = VAR_6->d_name.len;
 struct buffer_head *VAR_11;
 struct fnode *VAR_12;
 fnode_secno VAR_13;
 int VAR_14;
 struct hpfs_dirent VAR_15;
 struct inode *VAR_16 = ((void*)0);
 int VAR_17;
 if ((VAR_17 = FUNC_8((char *)VAR_9, &VAR_10))) return VAR_17==-VAR_2 ? -VAR_1 : VAR_17;
 if (FUNC_12(VAR_5->i_sb)->sb_eas < 2) return -VAR_4;
 if (!FUNC_25(VAR_8))
  return -VAR_1;
 FUNC_18();
 VAR_17 = -VAR_3;
 VAR_12 = FUNC_7(VAR_5->i_sb, FUNC_10(VAR_5)->i_dno, &VAR_13, &VAR_11);
 if (!VAR_12)
  goto bail;
 FUNC_21(&VAR_15, 0, sizeof VAR_15);
 if (!(VAR_7 & 0222)) VAR_15.read_only = 1;
 VAR_15.archive = 1;
 VAR_15.hidden = VAR_9[0] == '.';
 VAR_15.fnode = VAR_13;
 VAR_15.creation_date = VAR_15.write_date = VAR_15.read_date = FUNC_5(VAR_5->i_sb, FUNC_4());

 VAR_16 = FUNC_24(VAR_5->i_sb);
 if (!VAR_16)
  goto bail1;

 FUNC_11(VAR_16);
 VAR_16->i_ino = VAR_13;
 FUNC_10(VAR_16)->i_parent_dir = VAR_5->i_ino;
 VAR_16->i_ctime.tv_sec = VAR_16->i_mtime.tv_sec = VAR_16->i_atime.tv_sec = FUNC_17(VAR_5->i_sb, VAR_15.creation_date);
 VAR_16->i_ctime.tv_nsec = 0;
 VAR_16->i_mtime.tv_nsec = 0;
 VAR_16->i_atime.tv_nsec = 0;
 FUNC_10(VAR_16)->i_ea_size = 0;
 VAR_16->i_uid = FUNC_2();
 VAR_16->i_gid = FUNC_1();
 VAR_16->i_nlink = 1;
 VAR_16->i_size = 0;
 VAR_16->i_blocks = 1;
 FUNC_14(VAR_16, VAR_7, VAR_8);

 FUNC_22(&FUNC_10(VAR_5)->i_mutex);
 VAR_14 = FUNC_6(VAR_5, (char *)VAR_9, VAR_10, &VAR_15, 0);
 if (VAR_14 == 1)
  goto bail2;
 if (VAR_14 == -1) {
  VAR_17 = -VAR_0;
  goto bail2;
 }
 VAR_12->len = VAR_10;
 FUNC_20(VAR_12->name, VAR_9, VAR_10 > 15 ? 15 : VAR_10);
 VAR_12->up = VAR_5->i_ino;
 FUNC_19(VAR_11);

 FUNC_15(VAR_16);

 FUNC_13(VAR_16);
 FUNC_3(VAR_6, VAR_16);
 FUNC_23(&FUNC_10(VAR_5)->i_mutex);
 FUNC_0(VAR_11);
 FUNC_26();
 return 0;
bail2:
 FUNC_23(&FUNC_10(VAR_5)->i_mutex);
 FUNC_16(VAR_16);
bail1:
 FUNC_0(VAR_11);
 FUNC_9(VAR_5->i_sb, VAR_13, 1);
bail:
 FUNC_26();
 return VAR_17;
}
