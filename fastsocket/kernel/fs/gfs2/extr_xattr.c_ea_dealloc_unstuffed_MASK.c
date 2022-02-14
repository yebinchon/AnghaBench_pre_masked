
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_rgrpd {scalar_t__ rd_length; int rd_gl; } ;
struct TYPE_3__ {int i_ctime; } ;
struct gfs2_inode {int i_gl; TYPE_1__ i_inode; } ;
struct gfs2_holder {int dummy; } ;
struct gfs2_ea_header {unsigned int ea_num_ptrs; int ea_type; int ea_flags; int ea_rec_len; } ;
struct buffer_head {int b_data; } ;
typedef scalar_t__ __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* FUNC_0 (struct gfs2_ea_header*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct gfs2_ea_header*) ;
 scalar_t__ FUNC_2 (struct gfs2_ea_header*) ;
 scalar_t__ FUNC_3 (struct gfs2_ea_header*) ;
 struct gfs2_sbd* FUNC_4 (TYPE_1__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_1__*,int) ;
 struct gfs2_rgrpd* FUNC_9 (struct gfs2_sbd*,scalar_t__,int) ;
 int FUNC_10 (struct gfs2_inode*) ;
 int FUNC_11 (struct gfs2_inode*,int ) ;
 int FUNC_12 (struct gfs2_inode*,scalar_t__,unsigned int) ;
 int FUNC_13 (struct gfs2_holder*) ;
 int FUNC_14 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_15 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_16 (struct gfs2_sbd*) ;
 int FUNC_17 (int ,struct buffer_head*) ;
 int FUNC_18 (struct gfs2_sbd*,scalar_t__,unsigned int) ;
 int FUNC_19 (struct gfs2_sbd*) ;

__attribute__((used)) static int FUNC_20(struct gfs2_inode *VAR_9, struct buffer_head *VAR_10,
    struct gfs2_ea_header *VAR_11,
    struct gfs2_ea_header *VAR_12, void *VAR_13)
{
 int *VAR_14 = VAR_13;
 struct gfs2_sbd *VAR_15 = FUNC_4(&VAR_9->i_inode);
 struct gfs2_rgrpd *VAR_16;
 struct gfs2_holder VAR_17;
 struct buffer_head *VAR_18;
 __be64 *VAR_19;
 u64 VAR_20 = 0;
 u64 VAR_21 = 0;
 unsigned int VAR_22 = 0;
 unsigned int VAR_23 = 0;
 unsigned int VAR_24;
 int VAR_25;

 VAR_25 = FUNC_16(VAR_15);
 if (VAR_25)
  return VAR_25;

 if (FUNC_2(VAR_11))
  return 0;

 VAR_19 = FUNC_0(VAR_11);
 for (VAR_24 = 0; VAR_24 < VAR_11->ea_num_ptrs; VAR_24++, VAR_19++) {
  if (*VAR_19) {
   VAR_23++;
   VAR_20 = FUNC_5(*VAR_19);
  }
 }
 if (!VAR_23)
  return 0;

 VAR_16 = FUNC_9(VAR_15, VAR_20, 1);
 if (!VAR_16) {
  FUNC_10(VAR_9);
  return -VAR_1;
 }

 VAR_25 = FUNC_14(VAR_16->rd_gl, VAR_4, 0, &VAR_17);
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_18(VAR_15, VAR_16->rd_length + VAR_5 +
     VAR_6 + VAR_8 + VAR_7, VAR_23);
 if (VAR_25)
  goto out_gunlock;

 FUNC_17(VAR_9->i_gl, VAR_10);

 VAR_19 = FUNC_0(VAR_11);
 for (VAR_24 = 0; VAR_24 < VAR_11->ea_num_ptrs; VAR_24++, VAR_19++) {
  if (!*VAR_19)
   break;
  VAR_20 = FUNC_5(*VAR_19);

  if (VAR_21 + VAR_22 == VAR_20)
   VAR_22++;
  else {
   if (VAR_21)
    FUNC_12(VAR_9, VAR_21, VAR_22);
   VAR_21 = VAR_20;
   VAR_22 = 1;
  }

  *VAR_19 = 0;
  FUNC_8(&VAR_9->i_inode, -1);
 }
 if (VAR_21)
  FUNC_12(VAR_9, VAR_21, VAR_22);

 if (VAR_12 && !VAR_14) {
  u32 VAR_26;

  VAR_26 = FUNC_3(VAR_12) + FUNC_3(VAR_11);
  VAR_12->ea_rec_len = FUNC_7(VAR_26);

  if (FUNC_1(VAR_11))
   VAR_12->ea_flags |= VAR_2;
 } else {
  VAR_11->ea_type = VAR_3;
  VAR_11->ea_num_ptrs = 0;
 }

 VAR_25 = FUNC_15(VAR_9, &VAR_18);
 if (!VAR_25) {
  VAR_9->i_inode.i_ctime = VAR_0;
  FUNC_17(VAR_9->i_gl, VAR_18);
  FUNC_11(VAR_9, VAR_18->b_data);
  FUNC_6(VAR_18);
 }

 FUNC_19(VAR_15);

out_gunlock:
 FUNC_13(&VAR_17);
 return VAR_25;
}
