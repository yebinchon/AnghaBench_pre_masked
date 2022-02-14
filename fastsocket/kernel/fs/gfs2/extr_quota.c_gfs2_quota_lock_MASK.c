
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ ar_quota; } ;
struct gfs2_sbd {TYPE_1__ sd_args; } ;
struct gfs2_quota_data {int qd_flags; } ;
struct gfs2_inode {TYPE_2__* i_res; int i_flags; int i_inode; } ;
struct TYPE_4__ {unsigned int rs_qa_qd_num; int * rs_qa_qd_ghs; struct gfs2_quota_data** rs_qa_qd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct gfs2_sbd* FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct gfs2_quota_data*,int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct gfs2_inode*,int ,int ) ;
 int FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct gfs2_quota_data**,unsigned int,int,int ,int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (int ,int *) ;

int FUNC_9(struct gfs2_inode *VAR_7, u32 VAR_8, u32 VAR_9)
{
 struct gfs2_sbd *VAR_10 = FUNC_0(&VAR_7->i_inode);
 struct gfs2_quota_data *VAR_11;
 unsigned int VAR_12;
 int VAR_13 = 0;

 VAR_13 = FUNC_4(VAR_7, VAR_8, VAR_9);
 if (VAR_13)
  return VAR_13;

 if (FUNC_1(VAR_0) ||
     VAR_10->sd_args.ar_quota != VAR_2)
  return 0;

 FUNC_7(VAR_7->i_res->rs_qa_qd, VAR_7->i_res->rs_qa_qd_num,
      sizeof(struct gfs2_quota_data *), VAR_6, ((void*)0));

 for (VAR_12 = 0; VAR_12 < VAR_7->i_res->rs_qa_qd_num; VAR_12++) {
  int VAR_14 = VAR_4;
  VAR_11 = VAR_7->i_res->rs_qa_qd[VAR_12];
  if (FUNC_8(VAR_5, &VAR_11->qd_flags))
   VAR_14 = VAR_1;
  VAR_13 = FUNC_2(VAR_11, VAR_14, &VAR_7->i_res->rs_qa_qd_ghs[VAR_12]);
  if (VAR_13)
   break;
 }

 if (!VAR_13)
  FUNC_6(VAR_3, &VAR_7->i_flags);
 else {
  while (VAR_12--)
   FUNC_3(&VAR_7->i_res->rs_qa_qd_ghs[VAR_12]);
  FUNC_5(VAR_7);
 }

 return VAR_13;
}
