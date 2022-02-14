
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
typedef int u32 ;
struct TYPE_2__ {int sb_bsize_shift; int sb_bsize; } ;
struct gfs2_sbd {int sd_fsb2bb_shift; int sd_fsb2bb; int sd_diptrs; int sd_inptrs; int sd_jbsize; int sd_hash_bsize; int sd_hash_bsize_shift; int sd_hash_ptrs; int sd_qc_per_block; int sd_blocks_per_bitmap; int sd_max_dirres; int* sd_heightsize; unsigned int sd_max_height; int* sd_jheightsize; unsigned int sd_max_jheight; TYPE_1__ sd_sb; } ;
struct gfs2_quota_change {int dummy; } ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_dinode {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (struct gfs2_sbd*,char*) ;
 int FUNC_3 (struct gfs2_sbd*,int) ;
 int FUNC_4 (struct gfs2_sbd*,TYPE_1__*,int) ;
 int FUNC_5 (struct gfs2_sbd*,int) ;

__attribute__((used)) static int FUNC_6(struct gfs2_sbd *VAR_5, int VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9;
 u32 VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 VAR_12 = FUNC_5(VAR_5, VAR_4 >> VAR_5->sd_fsb2bb_shift);
 if (VAR_12) {
  if (!VAR_6)
   FUNC_2(VAR_5, "can't read superblock\n");
  return VAR_12;
 }

 VAR_12 = FUNC_4(VAR_5, &VAR_5->sd_sb, VAR_6);
 if (VAR_12)
  return VAR_12;

 VAR_5->sd_fsb2bb_shift = VAR_5->sd_sb.sb_bsize_shift -
          VAR_0;
 VAR_5->sd_fsb2bb = 1 << VAR_5->sd_fsb2bb_shift;
 VAR_5->sd_diptrs = (VAR_5->sd_sb.sb_bsize -
     sizeof(struct gfs2_dinode)) / sizeof(u64);
 VAR_5->sd_inptrs = (VAR_5->sd_sb.sb_bsize -
     sizeof(struct gfs2_meta_header)) / sizeof(u64);
 VAR_5->sd_jbsize = VAR_5->sd_sb.sb_bsize - sizeof(struct gfs2_meta_header);
 VAR_5->sd_hash_bsize = VAR_5->sd_sb.sb_bsize / 2;
 VAR_5->sd_hash_bsize_shift = VAR_5->sd_sb.sb_bsize_shift - 1;
 VAR_5->sd_hash_ptrs = VAR_5->sd_hash_bsize / sizeof(u64);
 VAR_5->sd_qc_per_block = (VAR_5->sd_sb.sb_bsize -
    sizeof(struct gfs2_meta_header)) /
           sizeof(struct gfs2_quota_change);
 VAR_5->sd_blocks_per_bitmap = (VAR_5->sd_sb.sb_bsize -
         sizeof(struct gfs2_meta_header))
  * VAR_3;



 VAR_7 = FUNC_0(sizeof(u64) * (1 << VAR_1),
        VAR_5->sd_jbsize);

 VAR_8 = 0;
 for (VAR_10 = VAR_7; VAR_10 > VAR_5->sd_diptrs;) {
  VAR_10 = FUNC_0(VAR_10, VAR_5->sd_inptrs);
  VAR_8 += VAR_10;
 }

 VAR_9 = 2 + VAR_1;

 VAR_5->sd_max_dirres = VAR_7 + VAR_8 + VAR_9;

 VAR_5->sd_heightsize[0] = VAR_5->sd_sb.sb_bsize -
    sizeof(struct gfs2_dinode);
 VAR_5->sd_heightsize[1] = VAR_5->sd_sb.sb_bsize * VAR_5->sd_diptrs;
 for (VAR_11 = 2;; VAR_11++) {
  u64 VAR_13, VAR_14;
  u32 VAR_15;

  VAR_13 = VAR_5->sd_heightsize[VAR_11 - 1] * VAR_5->sd_inptrs;
  VAR_14 = VAR_13;
  VAR_15 = FUNC_1(VAR_14, VAR_5->sd_inptrs);

  if (VAR_14 != VAR_5->sd_heightsize[VAR_11 - 1] || VAR_15)
   break;
  VAR_5->sd_heightsize[VAR_11] = VAR_13;
 }
 VAR_5->sd_max_height = VAR_11;
 VAR_5->sd_heightsize[VAR_11] = ~0;
 FUNC_3(VAR_5, VAR_5->sd_max_height <= VAR_2);

 VAR_5->sd_jheightsize[0] = VAR_5->sd_sb.sb_bsize -
     sizeof(struct gfs2_dinode);
 VAR_5->sd_jheightsize[1] = VAR_5->sd_jbsize * VAR_5->sd_diptrs;
 for (VAR_11 = 2;; VAR_11++) {
  u64 VAR_16, VAR_17;
  u32 VAR_18;

  VAR_16 = VAR_5->sd_jheightsize[VAR_11 - 1] * VAR_5->sd_inptrs;
  VAR_17 = VAR_16;
  VAR_18 = FUNC_1(VAR_17, VAR_5->sd_inptrs);

  if (VAR_17 != VAR_5->sd_jheightsize[VAR_11 - 1] || VAR_18)
   break;
  VAR_5->sd_jheightsize[VAR_11] = VAR_16;
 }
 VAR_5->sd_max_jheight = VAR_11;
 VAR_5->sd_jheightsize[VAR_11] = ~0;
 FUNC_3(VAR_5, VAR_5->sd_max_jheight <= VAR_2);

 return 0;
}
