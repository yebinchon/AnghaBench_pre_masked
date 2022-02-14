
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


struct inode {int i_nlink; int i_mode; int * i_fop; int * i_op; void* i_mtime; void* i_atime; void* i_ctime; int i_size; void* i_ino; TYPE_2__* i_mapping; int i_gid; int i_uid; int i_sb; } ;
struct hfs_sb_info {int s_file_umask; int s_dir_umask; int s_gid; int s_uid; } ;
struct hfs_iget_data {TYPE_4__* rec; int * key; } ;
struct TYPE_9__ {int MdDat; int Val; int DirID; } ;
struct TYPE_7__ {int Flags; int MdDat; int FlNum; int ClpSize; int RPyLen; int RLgLen; int RExtRec; int PyLen; int LgLen; int ExtRec; } ;
struct TYPE_10__ {int type; TYPE_3__ dir; TYPE_1__ file; } ;
typedef TYPE_4__ hfs_cat_rec ;
struct TYPE_12__ {int tz_secondswest; int fs_blocks; int flags; int cat_key; int open_dir_list; int extents_lock; int * rsrc_inode; } ;
struct TYPE_11__ {int tz_minuteswest; } ;
struct TYPE_8__ {int * a_ops; } ;




 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 struct hfs_sb_info* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (struct inode*,int ,int ,int ,int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *) ;
 TYPE_5__ VAR_13 ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_14, void *VAR_15)
{
 struct hfs_iget_data *VAR_16 = VAR_15;
 struct hfs_sb_info *VAR_17 = FUNC_2(VAR_14->i_sb);
 hfs_cat_rec *VAR_18;

 FUNC_0(VAR_14)->flags = 0;
 FUNC_0(VAR_14)->rsrc_inode = ((void*)0);
 FUNC_9(&FUNC_0(VAR_14)->extents_lock);
 FUNC_3(&FUNC_0(VAR_14)->open_dir_list);


 VAR_14->i_uid = VAR_17->s_uid;
 VAR_14->i_gid = VAR_17->s_gid;
 VAR_14->i_nlink = 1;

 if (VAR_16->key)
  FUNC_0(VAR_14)->cat_key = *VAR_16->key;
 else
  FUNC_0(VAR_14)->flags |= VAR_1;
 FUNC_0(VAR_14)->tz_secondswest = VAR_13.tz_minuteswest * 60;

 VAR_18 = VAR_16->rec;
 switch (VAR_18->type) {
 case 128:
  if (!FUNC_1(VAR_14)) {
   FUNC_6(VAR_14, VAR_18->file.ExtRec, VAR_18->file.LgLen,
         VAR_18->file.PyLen, FUNC_4(VAR_18->file.ClpSize));
  } else {
   FUNC_6(VAR_14, VAR_18->file.RExtRec, VAR_18->file.RLgLen,
         VAR_18->file.RPyLen, FUNC_4(VAR_18->file.ClpSize));
  }

  VAR_14->i_ino = FUNC_5(VAR_18->file.FlNum);
  VAR_14->i_mode = VAR_4 | VAR_7;
  if (!(VAR_18->file.Flags & VAR_0))
   VAR_14->i_mode |= VAR_6;
  VAR_14->i_mode &= ~VAR_17->s_file_umask;
  VAR_14->i_mode |= VAR_3;
  VAR_14->i_ctime = VAR_14->i_atime = VAR_14->i_mtime =
    FUNC_7(VAR_18->file.MdDat);
  VAR_14->i_op = &VAR_11;
  VAR_14->i_fop = &VAR_12;
  VAR_14->i_mapping->a_ops = &VAR_8;
  break;
 case 129:
  VAR_14->i_ino = FUNC_5(VAR_18->dir.DirID);
  VAR_14->i_size = FUNC_4(VAR_18->dir.Val) + 2;
  FUNC_0(VAR_14)->fs_blocks = 0;
  VAR_14->i_mode = VAR_2 | (VAR_5 & ~VAR_17->s_dir_umask);
  VAR_14->i_ctime = VAR_14->i_atime = VAR_14->i_mtime =
    FUNC_7(VAR_18->dir.MdDat);
  VAR_14->i_op = &VAR_9;
  VAR_14->i_fop = &VAR_10;
  break;
 default:
  FUNC_8(VAR_14);
 }
 return 0;
}
