
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ isvfat; scalar_t__ sys_immutable; scalar_t__ showexec; int fs_gid; int fs_uid; } ;
struct msdos_sb_info {int fat_bits; int cluster_size; TYPE_2__ options; int * dir_ops; } ;
struct msdos_dir_entry {int attr; int adate; int ctime_cs; int cdate; int ctime; int date; int time; int size; int starthi; int start; scalar_t__ name; } ;
struct inode {int i_generation; int i_size; int i_blocks; int i_mtime; int i_atime; int i_ctime; int i_flags; TYPE_1__* i_mapping; int * i_fop; int * i_op; void* i_mode; int i_nlink; int i_version; int i_gid; int i_uid; int i_sb; } ;
typedef int loff_t ;
struct TYPE_6__ {int i_start; int i_logstart; int mmu_private; scalar_t__ i_pos; } ;
struct TYPE_4__ {int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 struct msdos_sb_info* FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct inode*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_4 (struct msdos_sb_info*,int,int) ;
 int FUNC_5 (struct inode*,int) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct msdos_sb_info*,int *,int ,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_10, struct msdos_dir_entry *VAR_11)
{
 struct msdos_sb_info *VAR_12 = FUNC_2(VAR_10->i_sb);
 int VAR_13;

 FUNC_1(VAR_10)->i_pos = 0;
 VAR_10->i_uid = VAR_12->options.fs_uid;
 VAR_10->i_gid = VAR_12->options.fs_gid;
 VAR_10->i_version++;
 VAR_10->i_generation = FUNC_8();

 if ((VAR_11->attr & VAR_0) && !FUNC_0(VAR_11->name)) {
  VAR_10->i_generation &= ~1;
  VAR_10->i_mode = FUNC_4(VAR_12, VAR_11->attr, VAR_4);
  VAR_10->i_op = VAR_12->dir_ops;
  VAR_10->i_fop = &VAR_7;

  FUNC_1(VAR_10)->i_start = FUNC_10(VAR_11->start);
  if (VAR_12->fat_bits == 32)
   FUNC_1(VAR_10)->i_start |= (FUNC_10(VAR_11->starthi) << 16);

  FUNC_1(VAR_10)->i_logstart = FUNC_1(VAR_10)->i_start;
  VAR_13 = FUNC_3(VAR_10);
  if (VAR_13 < 0)
   return VAR_13;
  FUNC_1(VAR_10)->mmu_private = VAR_10->i_size;

  VAR_10->i_nlink = FUNC_6(VAR_10);
 } else {
  VAR_10->i_generation |= 1;
  VAR_10->i_mode = FUNC_4(VAR_12, VAR_11->attr,
   ((VAR_12->options.showexec && !FUNC_9(VAR_11->name + 8))
    ? VAR_3|VAR_5 : VAR_4));
  FUNC_1(VAR_10)->i_start = FUNC_10(VAR_11->start);
  if (VAR_12->fat_bits == 32)
   FUNC_1(VAR_10)->i_start |= (FUNC_10(VAR_11->starthi) << 16);

  FUNC_1(VAR_10)->i_logstart = FUNC_1(VAR_10)->i_start;
  VAR_10->i_size = FUNC_11(VAR_11->size);
  VAR_10->i_op = &VAR_8;
  VAR_10->i_fop = &VAR_9;
  VAR_10->i_mapping->a_ops = &VAR_6;
  FUNC_1(VAR_10)->mmu_private = VAR_10->i_size;
 }
 if (VAR_11->attr & VAR_1) {
  if (VAR_12->options.sys_immutable)
   VAR_10->i_flags |= VAR_2;
 }
 FUNC_5(VAR_10, VAR_11->attr);

 VAR_10->i_blocks = ((VAR_10->i_size + (VAR_12->cluster_size - 1))
      & ~((loff_t)VAR_12->cluster_size - 1)) >> 9;

 FUNC_7(VAR_12, &VAR_10->i_mtime, VAR_11->time, VAR_11->date, 0);
 if (VAR_12->options.isvfat) {
  FUNC_7(VAR_12, &VAR_10->i_ctime, VAR_11->ctime,
      VAR_11->cdate, VAR_11->ctime_cs);
  FUNC_7(VAR_12, &VAR_10->i_atime, 0, VAR_11->adate, 0);
 } else
  VAR_10->i_ctime = VAR_10->i_atime = VAR_10->i_mtime;

 return 0;
}
