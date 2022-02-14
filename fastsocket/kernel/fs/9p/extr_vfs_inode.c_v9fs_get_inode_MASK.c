
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v9fs_session_info {int dummy; } ;
struct super_block {struct v9fs_session_info* s_fs_info; } ;
struct inode {int i_mode; int * i_fop; int * i_op; scalar_t__ i_rdev; TYPE_1__* i_mapping; int i_ctime; int i_mtime; int i_atime; scalar_t__ i_blocks; int i_gid; int i_uid; } ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;





 int VAR_6 ;


 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,int,scalar_t__) ;
 int FUNC_7 (struct inode*) ;
 struct inode* FUNC_8 (struct super_block*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (struct v9fs_session_info*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

struct inode *FUNC_10(struct super_block *VAR_14, int VAR_15)
{
 int VAR_16;
 struct inode *VAR_17;
 struct v9fs_session_info *VAR_18 = VAR_14->s_fs_info;

 FUNC_1(VAR_5, "super block: %p mode: %o\n", VAR_14, VAR_15);

 VAR_17 = FUNC_8(VAR_14);
 if (!VAR_17) {
  FUNC_2(VAR_3, "Problem allocating inode\n");
  return FUNC_0(-VAR_2);
 }

 VAR_17->i_mode = VAR_15;
 VAR_17->i_uid = FUNC_4();
 VAR_17->i_gid = FUNC_3();
 VAR_17->i_blocks = 0;
 VAR_17->i_rdev = 0;
 VAR_17->i_atime = VAR_17->i_mtime = VAR_17->i_ctime = VAR_0;
 VAR_17->i_mapping->a_ops = &VAR_7;

 switch (VAR_15 & VAR_6) {
 case 131:
 case 134:
 case 133:
 case 128:
  if (!FUNC_9(VAR_18)) {
   FUNC_1(VAR_4,
       "special files without extended mode\n");
   VAR_16 = -VAR_1;
   goto error;
  }
  FUNC_6(VAR_17, VAR_17->i_mode, VAR_17->i_rdev);
  break;
 case 129:
  VAR_17->i_op = &VAR_11;
  VAR_17->i_fop = &VAR_12;
  break;
 case 130:
  if (!FUNC_9(VAR_18)) {
   FUNC_1(VAR_4,
       "extended modes used w/o 9P2000.u\n");
   VAR_16 = -VAR_1;
   goto error;
  }
  VAR_17->i_op = &VAR_13;
  break;
 case 132:
  FUNC_5(VAR_17);
  if (FUNC_9(VAR_18))
   VAR_17->i_op = &VAR_9;
  else
   VAR_17->i_op = &VAR_8;
  VAR_17->i_fop = &VAR_10;
  break;
 default:
  FUNC_1(VAR_4, "BAD mode 0x%x S_IFMT 0x%x\n",
      VAR_15, VAR_15 & VAR_6);
  VAR_16 = -VAR_1;
  goto error;
 }

 return VAR_17;

error:
 FUNC_7(VAR_17);
 return FUNC_0(VAR_16);
}
