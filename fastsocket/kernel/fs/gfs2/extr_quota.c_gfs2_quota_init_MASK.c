
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {unsigned int sb_bsize_shift; int sb_bsize; } ;
struct gfs2_sbd {unsigned int sd_quota_slots; unsigned int sd_qc_per_block; unsigned int sd_quota_chunks; int sd_quota_count; int sd_quota_list; int * sd_quota_bitmap; TYPE_1__ sd_sb; int sd_qc_inode; } ;
struct gfs2_quota_data {unsigned int qd_slot; int qd_slot_count; int qd_list; scalar_t__ qd_change; int qd_flags; } ;
struct gfs2_quota_change_host {int qc_flags; scalar_t__ qc_change; int qc_id; } ;
struct gfs2_quota_change {int dummy; } ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_inode {int i_gl; int i_inode; } ;
struct buffer_head {scalar_t__ b_data; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfs2_inode* FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct gfs2_sbd*,char*,unsigned int) ;
 int FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (int *,unsigned int,int*,int *,scalar_t__*) ;
 int FUNC_7 (struct gfs2_sbd*,int *,unsigned int,int) ;
 struct buffer_head* FUNC_8 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_9 (struct gfs2_sbd*,struct buffer_head*,int ) ;
 int FUNC_10 (struct gfs2_quota_change_host*,scalar_t__) ;
 int FUNC_11 (struct gfs2_sbd*) ;
 unsigned int FUNC_12 (int *) ;
 int * FUNC_13 (unsigned int,int,int ) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (struct gfs2_sbd*,int,int ,struct gfs2_quota_data**) ;
 int VAR_7 ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

int FUNC_20(struct gfs2_sbd *VAR_8)
{
 struct gfs2_inode *VAR_9 = FUNC_1(VAR_8->sd_qc_inode);
 unsigned int VAR_10 = FUNC_12(&VAR_9->i_inode);
 unsigned int VAR_11 = VAR_10 >> VAR_8->sd_sb.sb_bsize_shift;
 unsigned int VAR_12, VAR_13 = 0;
 unsigned int VAR_14 = 0;
 u64 VAR_15;
 u32 VAR_16 = 0;
 int VAR_17;

 if (!VAR_10 || VAR_10 > (64 << 20) ||
     VAR_10 & (VAR_8->sd_sb.sb_bsize - 1)) {
  FUNC_5(VAR_9);
  return -VAR_0;
 }
 VAR_8->sd_quota_slots = VAR_11 * VAR_8->sd_qc_per_block;
 VAR_8->sd_quota_chunks = FUNC_0(VAR_8->sd_quota_slots, 8 * VAR_5);

 VAR_17 = -VAR_1;

 VAR_8->sd_quota_bitmap = FUNC_13(VAR_8->sd_quota_chunks,
           sizeof(unsigned char *), VAR_2);
 if (!VAR_8->sd_quota_bitmap)
  return VAR_17;

 for (VAR_12 = 0; VAR_12 < VAR_8->sd_quota_chunks; VAR_12++) {
  VAR_8->sd_quota_bitmap[VAR_12] = FUNC_14(VAR_5, VAR_2);
  if (!VAR_8->sd_quota_bitmap[VAR_12])
   goto fail;
 }

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  struct buffer_head *VAR_18;
  unsigned int VAR_19;

  if (!VAR_16) {
   int VAR_20 = 0;
   VAR_17 = FUNC_6(&VAR_9->i_inode, VAR_12, &VAR_20, &VAR_15, &VAR_16);
   if (VAR_17)
    goto fail;
  }
  VAR_17 = -VAR_0;
  VAR_18 = FUNC_8(VAR_9->i_gl, VAR_15, VAR_16);
  if (!VAR_18)
   goto fail;
  if (FUNC_9(VAR_8, VAR_18, VAR_3)) {
   FUNC_3(VAR_18);
   goto fail;
  }

  for (VAR_19 = 0; VAR_19 < VAR_8->sd_qc_per_block && VAR_13 < VAR_8->sd_quota_slots;
       VAR_19++, VAR_13++) {
   struct gfs2_quota_change_host VAR_21;
   struct gfs2_quota_data *VAR_22;

   FUNC_10(&VAR_21, VAR_18->b_data +
       sizeof(struct gfs2_meta_header) +
       VAR_19 * sizeof(struct gfs2_quota_change));
   if (!VAR_21.qc_change)
    continue;

   VAR_17 = FUNC_16(VAR_8, (VAR_21.qc_flags & VAR_4),
      VAR_21.qc_id, &VAR_22);
   if (VAR_17) {
    FUNC_3(VAR_18);
    goto fail;
   }

   FUNC_17(VAR_6, &VAR_22->qd_flags);
   VAR_22->qd_change = VAR_21.qc_change;
   VAR_22->qd_slot = VAR_13;
   VAR_22->qd_slot_count = 1;

   FUNC_18(&VAR_7);
   FUNC_7(VAR_8, VAR_8->sd_quota_bitmap, VAR_13, 1);
   FUNC_15(&VAR_22->qd_list, &VAR_8->sd_quota_list);
   FUNC_2(&VAR_8->sd_quota_count);
   FUNC_19(&VAR_7);

   VAR_14++;
  }

  FUNC_3(VAR_18);
  VAR_15++;
  VAR_16--;
 }

 if (VAR_14)
  FUNC_4(VAR_8, "found %u quota changes\n", VAR_14);

 return 0;

fail:
 FUNC_11(VAR_8);
 return VAR_17;
}
