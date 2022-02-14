
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int umode_t ;
typedef int uid_t ;
struct super_block {int s_flags; struct hpfs_sb_info* s_fs_info; int s_root; int * s_op; int s_magic; } ;
struct quad_buffer_head {int dummy; } ;
struct TYPE_7__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct TYPE_6__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct TYPE_5__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct inode {int i_size; int i_blocks; int i_ino; TYPE_3__ i_ctime; TYPE_2__ i_mtime; TYPE_1__ i_atime; } ;
struct hpfs_super_block {scalar_t__ magic; int funcversion; int n_sectors; scalar_t__ bitmaps; scalar_t__ dir_band_start; scalar_t__ n_dir_band; scalar_t__ dir_band_bitmap; scalar_t__ dir_band_end; int root; scalar_t__ version; } ;
struct hpfs_spare_block {scalar_t__ magic; int dirty; scalar_t__ n_dnode_spares; scalar_t__ n_dnode_spares_free; int code_page_dir; scalar_t__ n_code_pages; scalar_t__ n_spares_used; scalar_t__ hotfixes_used; scalar_t__ old_wrote; } ;
struct hpfs_sb_info {int sb_fs_size; scalar_t__ sb_bitmaps; scalar_t__ sb_dirband_start; scalar_t__ sb_dirband_size; scalar_t__ sb_dmap; int sb_mode; int sb_n_free; int sb_n_free_dnodes; int sb_lowercase; int sb_conv; int sb_eas; int sb_chk; int sb_chkdsk; int sb_err; int sb_timeshift; int sb_c_bitmap; int sb_max_fwd_alloc; struct hpfs_sb_info* sb_cp_table; struct hpfs_sb_info* sb_bmp_dir; int sb_root; scalar_t__ sb_was_error; int sb_gid; int sb_uid; int hpfs_creation_de; } ;
struct hpfs_dirent {int ea_size; int creation_date; int write_date; int read_date; } ;
struct hpfs_boot_block {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int gid_t ;
typedef scalar_t__ dnode_secno ;
struct TYPE_8__ {int i_parent_dir; int i_ea_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct quad_buffer_head*) ;
 scalar_t__ FUNC_6 (struct super_block*,scalar_t__,int,char*) ;
 int FUNC_7 (struct super_block*,char*,...) ;
 scalar_t__ FUNC_8 (struct super_block*,int ) ;
 int FUNC_9 () ;
 TYPE_4__* FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 struct hpfs_sb_info* FUNC_12 (struct super_block*,scalar_t__) ;
 struct hpfs_sb_info* FUNC_13 (struct super_block*,int ) ;
 void* FUNC_14 (struct super_block*,int,struct buffer_head**,int) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (int ) ;
 int VAR_9 ;
 struct inode* FUNC_17 (struct super_block*,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (struct hpfs_sb_info*) ;
 struct hpfs_sb_info* FUNC_21 (int,int ) ;
 void* FUNC_22 (struct super_block*,int ) ;
 struct hpfs_dirent* FUNC_23 (struct inode*,scalar_t__,char*,int,int *,struct quad_buffer_head*) ;
 int FUNC_24 (struct buffer_head*) ;
 int FUNC_25 (struct super_block*) ;
 int FUNC_26 (void*,int *,int *,int*,int*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_27 (char*,...) ;
 int FUNC_28 (struct super_block*,void*) ;
 int FUNC_29 (struct super_block*,int) ;
 int FUNC_30 (struct inode*) ;

__attribute__((used)) static int FUNC_31(struct super_block *VAR_10, void *VAR_11, int VAR_12)
{
 struct buffer_head *VAR_13, *VAR_14, *VAR_15;
 struct hpfs_boot_block *VAR_16;
 struct hpfs_super_block *VAR_17;
 struct hpfs_spare_block *VAR_18;
 struct hpfs_sb_info *VAR_19;
 struct inode *VAR_20;

 uid_t VAR_21;
 gid_t VAR_22;
 umode_t VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;

 dnode_secno VAR_31;
 struct hpfs_dirent *VAR_32 = ((void*)0);
 struct quad_buffer_head VAR_33;

 int VAR_34;

 FUNC_28(VAR_10, VAR_11);

 VAR_19 = FUNC_21(sizeof(*VAR_19), VAR_3);
 if (!VAR_19)
  return -VAR_2;
 VAR_10->s_fs_info = VAR_19;

 VAR_19->sb_bmp_dir = ((void*)0);
 VAR_19->sb_cp_table = ((void*)0);

 FUNC_18(&VAR_19->hpfs_creation_de);

 VAR_21 = FUNC_2();
 VAR_22 = FUNC_1();
 VAR_23 = FUNC_3();
 VAR_24 = 0;
 VAR_25 = VAR_0;
 VAR_26 = 2;
 VAR_27 = 1;
 VAR_28 = 1;
 VAR_29 = 1;
 VAR_30 = 0;

 if (!(VAR_34 = FUNC_26(VAR_11, &VAR_21, &VAR_22, &VAR_23, &VAR_24, &VAR_25,
     &VAR_26, &VAR_27, &VAR_28, &VAR_29, &VAR_30))) {
  FUNC_27("HPFS: bad mount options.\n");
  goto bail0;
 }
 if (VAR_34==2) {
  FUNC_9();
  goto bail0;
 }


 FUNC_29(VAR_10, 512);
 VAR_19->sb_fs_size = -1;
 if (!(VAR_16 = FUNC_14(VAR_10, 0, &VAR_13, 0))) goto bail1;
 if (!(VAR_17 = FUNC_14(VAR_10, 16, &VAR_14, 1))) goto bail2;
 if (!(VAR_18 = FUNC_14(VAR_10, 17, &VAR_15, 0))) goto bail3;


 if ( VAR_17->magic != VAR_7

     || VAR_18->magic != VAR_8) {
  if (!VAR_12) FUNC_27("HPFS: Bad magic ... probably not HPFS\n");
  goto bail4;
 }


 if (!(VAR_10->s_flags & VAR_6) &&
       VAR_17->funcversion != 2 && VAR_17->funcversion != 3) {
  FUNC_27("HPFS: Bad version %d,%d. Mount readonly to go around\n",
   (int)VAR_17->version, (int)VAR_17->funcversion);
  FUNC_27("HPFS: please try recent version of HPFS driver at http://artax.karlin.mff.cuni.cz/~mikulas/vyplody/hpfs/index-e.cgi and if it still can't understand this format, contact author - mikulas@artax.karlin.mff.cuni.cz\n");
  goto bail4;
 }

 VAR_10->s_flags |= VAR_5;


 VAR_10->s_magic = VAR_4;
 VAR_10->s_op = &VAR_9;

 VAR_19->sb_root = VAR_17->root;
 VAR_19->sb_fs_size = VAR_17->n_sectors;
 VAR_19->sb_bitmaps = VAR_17->bitmaps;
 VAR_19->sb_dirband_start = VAR_17->dir_band_start;
 VAR_19->sb_dirband_size = VAR_17->n_dir_band;
 VAR_19->sb_dmap = VAR_17->dir_band_bitmap;
 VAR_19->sb_uid = VAR_21;
 VAR_19->sb_gid = VAR_22;
 VAR_19->sb_mode = 0777 & ~VAR_23;
 VAR_19->sb_n_free = -1;
 VAR_19->sb_n_free_dnodes = -1;
 VAR_19->sb_lowercase = VAR_24;
 VAR_19->sb_conv = VAR_25;
 VAR_19->sb_eas = VAR_26;
 VAR_19->sb_chk = VAR_27;
 VAR_19->sb_chkdsk = VAR_29;
 VAR_19->sb_err = VAR_28;
 VAR_19->sb_timeshift = VAR_30;
 VAR_19->sb_was_error = 0;
 VAR_19->sb_cp_table = ((void*)0);
 VAR_19->sb_c_bitmap = -1;
 VAR_19->sb_max_fwd_alloc = 0xffffff;


 if (!(VAR_19->sb_bmp_dir = FUNC_12(VAR_10, VAR_17->bitmaps)))
  goto bail4;


 if (VAR_18->dirty && !VAR_18->old_wrote) {
  if (VAR_28 == 2) {
   FUNC_27("HPFS: Improperly stopped, not mounted\n");
   goto bail4;
  }
  FUNC_7(VAR_10, "improperly stopped");
 }

 if (!(VAR_10->s_flags & VAR_6)) {
  VAR_18->dirty = 1;
  VAR_18->old_wrote = 0;
  FUNC_24(VAR_15);
 }

 if (VAR_18->hotfixes_used || VAR_18->n_spares_used) {
  if (VAR_28 >= 2) {
   FUNC_27("HPFS: Hotfixes not supported here, try chkdsk\n");
   FUNC_25(VAR_10);
   goto bail4;
  }
  FUNC_7(VAR_10, "hotfixes not supported here, try chkdsk");
  if (VAR_28 == 0) FUNC_27("HPFS: Proceeding, but your filesystem will be probably corrupted by this driver...\n");
  else FUNC_27("HPFS: This driver may read bad files or crash when operating on disk with hotfixes.\n");
 }
 if (VAR_18->n_dnode_spares != VAR_18->n_dnode_spares_free) {
  if (VAR_28 >= 2) {
   FUNC_27("HPFS: Spare dnodes used, try chkdsk\n");
   FUNC_25(VAR_10);
   goto bail4;
  }
  FUNC_7(VAR_10, "warning: spare dnodes used, try chkdsk");
  if (VAR_28 == 0) FUNC_27("HPFS: Proceeding, but your filesystem could be corrupted if you delete files or directories\n");
 }
 if (VAR_27) {
  unsigned VAR_35;
  if (VAR_17->dir_band_end - VAR_17->dir_band_start + 1 != VAR_17->n_dir_band ||
      VAR_17->dir_band_end < VAR_17->dir_band_start || VAR_17->n_dir_band > 0x4000) {
   FUNC_7(VAR_10, "dir band size mismatch: dir_band_start==%08x, dir_band_end==%08x, n_dir_band==%08x",
    VAR_17->dir_band_start, VAR_17->dir_band_end, VAR_17->n_dir_band);
   goto bail4;
  }
  VAR_35 = VAR_19->sb_dirband_size;
  VAR_19->sb_dirband_size = 0;
  if (FUNC_6(VAR_10, VAR_17->dir_band_start, VAR_17->n_dir_band, "dir_band") ||
      FUNC_6(VAR_10, VAR_17->dir_band_bitmap, 4, "dir_band_bitmap") ||
      FUNC_6(VAR_10, VAR_17->bitmaps, 4, "bitmaps")) {
   FUNC_25(VAR_10);
   goto bail4;
  }
  VAR_19->sb_dirband_size = VAR_35;
 } else FUNC_27("HPFS: You really don't want any checks? You are crazy...\n");


 if (VAR_18->n_code_pages)
  if (!(VAR_19->sb_cp_table = FUNC_13(VAR_10, VAR_18->code_page_dir)))
   FUNC_27("HPFS: Warning: code page support is disabled\n");

 FUNC_0(VAR_15);
 FUNC_0(VAR_14);
 FUNC_0(VAR_13);

 VAR_20 = FUNC_17(VAR_10, VAR_19->sb_root);
 if (!VAR_20)
  goto bail0;
 FUNC_11(VAR_20);
 FUNC_15(VAR_20);
 FUNC_30(VAR_20);
 VAR_10->s_root = FUNC_4(VAR_20);
 if (!VAR_10->s_root) {
  FUNC_19(VAR_20);
  goto bail0;
 }
 FUNC_16(VAR_10->s_root);





 VAR_31 = FUNC_8(VAR_10, VAR_19->sb_root);
 if (VAR_31)
  VAR_32 = FUNC_23(VAR_20, VAR_31, "\001\001", 2, ((void*)0), &VAR_33);
 if (!VAR_32)
  FUNC_7(VAR_10, "unable to find root dir");
 else {
  VAR_20->i_atime.tv_sec = FUNC_22(VAR_10, VAR_32->read_date);
  VAR_20->i_atime.tv_nsec = 0;
  VAR_20->i_mtime.tv_sec = FUNC_22(VAR_10, VAR_32->write_date);
  VAR_20->i_mtime.tv_nsec = 0;
  VAR_20->i_ctime.tv_sec = FUNC_22(VAR_10, VAR_32->creation_date);
  VAR_20->i_ctime.tv_nsec = 0;
  FUNC_10(VAR_20)->i_ea_size = VAR_32->ea_size;
  FUNC_10(VAR_20)->i_parent_dir = VAR_20->i_ino;
  if (VAR_20->i_size == -1)
   VAR_20->i_size = 2048;
  if (VAR_20->i_blocks == -1)
   VAR_20->i_blocks = 5;
  FUNC_5(&VAR_33);
 }
 return 0;

bail4: FUNC_0(VAR_15);
bail3: FUNC_0(VAR_14);
bail2: FUNC_0(VAR_13);
bail1:
bail0:
 FUNC_20(VAR_19->sb_bmp_dir);
 FUNC_20(VAR_19->sb_cp_table);
 VAR_10->s_fs_info = ((void*)0);
 FUNC_20(VAR_19);
 return -VAR_1;
}
