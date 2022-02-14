
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gfs2_sbd {int sd_quota_inode; } ;
struct gfs2_quota_data {int qd_flags; int qd_change_sync; TYPE_2__* qd_gl; } ;
struct gfs2_quota {int dummy; } ;
struct TYPE_4__ {int i_mutex; } ;
struct gfs2_inode {TYPE_2__* i_gl; TYPE_1__ i_inode; } ;
struct gfs2_holder {int dummy; } ;
struct gfs2_alloc_parms {unsigned int target; int aflags; } ;
typedef int loff_t ;
struct TYPE_5__ {struct gfs2_sbd* gl_sbd; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct gfs2_quota_data*,int ) ;
 int FUNC_2 (struct gfs2_inode*,int ,int ,struct gfs2_quota_data*,int *) ;
 int FUNC_3 (struct gfs2_holder*) ;
 int FUNC_4 (TYPE_2__*,int ,int ,struct gfs2_holder*) ;
 int FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 int FUNC_7 (struct gfs2_sbd*,TYPE_2__*) ;
 scalar_t__ FUNC_8 (struct gfs2_inode*,unsigned int) ;
 int FUNC_9 (struct gfs2_inode*) ;
 int FUNC_10 (struct gfs2_sbd*,unsigned int,int ) ;
 int FUNC_11 (struct gfs2_sbd*) ;
 int FUNC_12 (struct gfs2_inode*,int ,int,int*) ;
 int FUNC_13 (struct gfs2_inode*,int,unsigned int*,unsigned int*) ;
 struct gfs2_holder* FUNC_14 (unsigned int,int,int ) ;
 int FUNC_15 (struct gfs2_holder*) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct gfs2_quota_data*) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (struct gfs2_quota_data**,unsigned int,int,int ,int *) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_21(unsigned int VAR_9, struct gfs2_quota_data **VAR_10)
{
 struct gfs2_sbd *VAR_11 = (*VAR_10)->qd_gl->gl_sbd;
 struct gfs2_inode *VAR_12 = FUNC_0(VAR_11->sd_quota_inode);
 struct gfs2_alloc_parms VAR_13 = { .aflags = 0, };
 unsigned int VAR_14, VAR_15;
 struct gfs2_holder *VAR_16, VAR_17;
 unsigned int VAR_18, VAR_19;
 struct gfs2_quota_data *VAR_20;
 unsigned VAR_21;
 loff_t VAR_22;
 unsigned int VAR_23 = 0, VAR_24;
 int VAR_25;

 VAR_25 = FUNC_9(VAR_12);
 if (VAR_25)
  return VAR_25;

 FUNC_13(VAR_12, sizeof(struct gfs2_quota),
         &VAR_14, &VAR_15);

 VAR_16 = FUNC_14(VAR_9, sizeof(struct gfs2_holder), VAR_1);
 if (!VAR_16)
  return -VAR_0;

 FUNC_20(VAR_10, VAR_9, sizeof(struct gfs2_quota_data *), VAR_8, ((void*)0));
 FUNC_16(&VAR_12->i_inode.i_mutex, VAR_3);
 for (VAR_18 = 0; VAR_18 < VAR_9; VAR_18++) {
  VAR_25 = FUNC_4(VAR_10[VAR_18]->qd_gl, VAR_4,
        VAR_2, &VAR_16[VAR_18]);
  if (VAR_25)
   goto out;
 }

 VAR_25 = FUNC_4(VAR_12->i_gl, VAR_4, 0, &VAR_17);
 if (VAR_25)
  goto out;

 for (VAR_19 = 0; VAR_19 < VAR_9; VAR_19++) {
  int VAR_26;

  VAR_22 = FUNC_18(VAR_10[VAR_19]);
  VAR_25 = FUNC_12(VAR_12, VAR_22,
        sizeof(struct gfs2_quota),
        &VAR_26);
  if (VAR_25)
   goto out_alloc;
  if (VAR_26)
   VAR_23++;
 }
 VAR_24 = VAR_9 * VAR_14 + VAR_6 + VAR_9 + 3;

 VAR_21 = 1 + (VAR_23 * (VAR_14 + VAR_15));
 VAR_13.target = VAR_21;
 VAR_25 = FUNC_6(VAR_12, &VAR_13);
 if (VAR_25)
  goto out_alloc;

 if (VAR_23)
  VAR_24 += FUNC_8(VAR_12, VAR_21) + VAR_23 * VAR_15 + VAR_7;

 VAR_25 = FUNC_10(VAR_11, VAR_24, 0);
 if (VAR_25)
  goto out_ipres;

 for (VAR_19 = 0; VAR_19 < VAR_9; VAR_19++) {
  VAR_20 = VAR_10[VAR_19];
  VAR_22 = FUNC_18(VAR_20);
  VAR_25 = FUNC_2(VAR_12, VAR_22, VAR_20->qd_change_sync, VAR_20, ((void*)0));
  if (VAR_25)
   goto out_end_trans;

  FUNC_1(VAR_20, -VAR_20->qd_change_sync);
  FUNC_19(VAR_5, &VAR_20->qd_flags);
 }

 VAR_25 = 0;

out_end_trans:
 FUNC_11(VAR_11);
out_ipres:
 FUNC_5(VAR_12);
out_alloc:
 FUNC_3(&VAR_17);
out:
 while (VAR_18--)
  FUNC_3(&VAR_16[VAR_18]);
 FUNC_17(&VAR_12->i_inode.i_mutex);
 FUNC_15(VAR_16);
 FUNC_7(VAR_12->i_gl->gl_sbd, VAR_12->i_gl);
 return VAR_25;
}
