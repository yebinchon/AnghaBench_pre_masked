
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct quad_buffer_head {int dummy; } ;
struct TYPE_12__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_11__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_10__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct inode {int i_mode; int i_blocks; int i_size; int i_nlink; scalar_t__ i_uid; scalar_t__ i_gid; int i_sb; void* i_ino; int * i_fop; int * i_op; TYPE_4__ i_atime; TYPE_3__ i_mtime; TYPE_2__ i_ctime; } ;
struct hpfs_dirent {int directory; int read_only; int hidden; int first; void* fnode; void* read_date; void* write_date; void* creation_date; } ;
struct TYPE_15__ {TYPE_6__* external; } ;
struct TYPE_13__ {int n_free_nodes; int n_used_nodes; int first_free; } ;
struct fnode {unsigned int len; int dirflag; TYPE_7__ u; TYPE_5__ btree; void* up; int name; } ;
struct dnode {int root_dnode; void* up; } ;
struct TYPE_9__ {char* name; unsigned int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct buffer_head {int dummy; } ;
typedef void* fnode_secno ;
typedef void* dnode_secno ;
struct TYPE_16__ {int i_mutex; scalar_t__ i_ea_size; void* i_dno; void* i_parent_dir; } ;
struct TYPE_14__ {int file_secno; void* disk_secno; } ;


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
 void* FUNC_5 (int ,int ) ;
 struct hpfs_dirent* FUNC_6 (int ,struct dnode*,char*,int,int ) ;
 int FUNC_7 (struct inode*,char*,unsigned int,struct hpfs_dirent*,int ) ;
 struct dnode* FUNC_8 (int ,void*,void**,struct quad_buffer_head*,int) ;
 struct fnode* FUNC_9 (int ,void*,void**,struct buffer_head**) ;
 int FUNC_10 (struct quad_buffer_head*) ;
 int FUNC_11 (char*,unsigned int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (int ,void*) ;
 int FUNC_13 (int ,void*,int) ;
 TYPE_8__* FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct quad_buffer_head*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (int ,void*) ;
 int FUNC_22 () ;
 int FUNC_23 (struct buffer_head*) ;
 int FUNC_24 (int ,char const*,int) ;
 int FUNC_25 (struct hpfs_dirent*,int ,int) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 struct inode* FUNC_28 (int ) ;
 int FUNC_29 () ;

__attribute__((used)) static int FUNC_30(struct inode *VAR_7, struct dentry *VAR_8, int VAR_9)
{
 const char *VAR_10 = VAR_8->d_name.name;
 unsigned VAR_11 = VAR_8->d_name.len;
 struct quad_buffer_head VAR_12;
 struct buffer_head *VAR_13;
 struct hpfs_dirent *VAR_14;
 struct fnode *VAR_15;
 struct dnode *VAR_16;
 struct inode *VAR_17;
 fnode_secno VAR_18;
 dnode_secno VAR_19;
 int VAR_20;
 struct hpfs_dirent VAR_21;
 int VAR_22;
 if ((VAR_22 = FUNC_11((char *)VAR_10, &VAR_11))) return VAR_22==-VAR_2 ? -VAR_1 : VAR_22;
 FUNC_22();
 VAR_22 = -VAR_3;
 VAR_15 = FUNC_9(VAR_7->i_sb, FUNC_14(VAR_7)->i_dno, &VAR_18, &VAR_13);
 if (!VAR_15)
  goto bail;
 VAR_16 = FUNC_8(VAR_7->i_sb, VAR_18, &VAR_19, &VAR_12, 1);
 if (!VAR_16)
  goto bail1;
 FUNC_25(&VAR_21, 0, sizeof VAR_21);
 VAR_21.directory = 1;
 if (!(VAR_9 & 0222)) VAR_21.read_only = 1;

 VAR_21.hidden = VAR_10[0] == '.';
 VAR_21.fnode = VAR_18;
 VAR_21.creation_date = VAR_21.write_date = VAR_21.read_date = FUNC_5(VAR_7->i_sb, FUNC_4());
 VAR_17 = FUNC_28(VAR_7->i_sb);
 if (!VAR_17)
  goto bail2;
 FUNC_15(VAR_17);
 VAR_17->i_ino = VAR_18;
 FUNC_14(VAR_17)->i_parent_dir = VAR_7->i_ino;
 FUNC_14(VAR_17)->i_dno = VAR_19;
 VAR_17->i_ctime.tv_sec = VAR_17->i_mtime.tv_sec = VAR_17->i_atime.tv_sec = FUNC_21(VAR_7->i_sb, VAR_21.creation_date);
 VAR_17->i_ctime.tv_nsec = 0;
 VAR_17->i_mtime.tv_nsec = 0;
 VAR_17->i_atime.tv_nsec = 0;
 FUNC_14(VAR_17)->i_ea_size = 0;
 VAR_17->i_mode |= VAR_4;
 VAR_17->i_op = &VAR_5;
 VAR_17->i_fop = &VAR_6;
 VAR_17->i_blocks = 4;
 VAR_17->i_size = 2048;
 VAR_17->i_nlink = 2;
 if (VAR_21.read_only)
  VAR_17->i_mode &= ~0222;

 FUNC_26(&FUNC_14(VAR_7)->i_mutex);
 VAR_20 = FUNC_7(VAR_7, (char *)VAR_10, VAR_11, &VAR_21, 0);
 if (VAR_20 == 1)
  goto bail3;
 if (VAR_20 == -1) {
  VAR_22 = -VAR_0;
  goto bail3;
 }
 VAR_15->len = VAR_11;
 FUNC_24(VAR_15->name, VAR_10, VAR_11 > 15 ? 15 : VAR_11);
 VAR_15->up = VAR_7->i_ino;
 VAR_15->dirflag = 1;
 VAR_15->btree.n_free_nodes = 7;
 VAR_15->btree.n_used_nodes = 1;
 VAR_15->btree.first_free = 0x14;
 VAR_15->u.external[0].disk_secno = VAR_19;
 VAR_15->u.external[0].file_secno = -1;
 VAR_16->root_dnode = 1;
 VAR_16->up = VAR_18;
 VAR_14 = FUNC_6(VAR_7->i_sb, VAR_16, "\001\001", 2, 0);
 VAR_14->creation_date = VAR_14->write_date = VAR_14->read_date = FUNC_5(VAR_7->i_sb, FUNC_4());
 if (!(VAR_9 & 0222)) VAR_14->read_only = 1;
 VAR_14->first = VAR_14->directory = 1;

 VAR_14->fnode = VAR_18;
 FUNC_23(VAR_13);
 FUNC_0(VAR_13);
 FUNC_16(&VAR_12);
 FUNC_10(&VAR_12);
 FUNC_18(VAR_7);
 FUNC_19(VAR_17);

 if (VAR_17->i_uid != FUNC_2() ||
     VAR_17->i_gid != FUNC_1() ||
     VAR_17->i_mode != (VAR_9 | VAR_4)) {
  VAR_17->i_uid = FUNC_2();
  VAR_17->i_gid = FUNC_1();
  VAR_17->i_mode = VAR_9 | VAR_4;
  FUNC_17(VAR_17);
 }
 FUNC_3(VAR_8, VAR_17);
 FUNC_27(&FUNC_14(VAR_7)->i_mutex);
 FUNC_29();
 return 0;
bail3:
 FUNC_27(&FUNC_14(VAR_7)->i_mutex);
 FUNC_20(VAR_17);
bail2:
 FUNC_10(&VAR_12);
 FUNC_12(VAR_7->i_sb, VAR_19);
bail1:
 FUNC_0(VAR_13);
 FUNC_13(VAR_7->i_sb, VAR_18, 1);
bail:
 FUNC_29();
 return VAR_22;
}
