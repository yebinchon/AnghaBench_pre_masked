
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ ar_quota; } ;
struct gfs2_sbd {TYPE_1__ sd_args; } ;
struct gfs2_quota_data {int dummy; } ;
struct TYPE_6__ {scalar_t__ i_uid; scalar_t__ i_gid; } ;
struct gfs2_inode {TYPE_2__* i_res; TYPE_3__ i_inode; int i_flags; } ;
struct TYPE_5__ {int rs_qa_qd_num; struct gfs2_quota_data** rs_qa_qd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct gfs2_sbd* FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct gfs2_sbd*,int) ;
 int FUNC_2 (struct gfs2_inode*) ;
 int FUNC_3 (struct gfs2_inode*) ;
 int FUNC_4 (struct gfs2_sbd*,int ,scalar_t__,struct gfs2_quota_data**) ;
 int FUNC_5 (int ,int *) ;

int FUNC_6(struct gfs2_inode *VAR_6, u32 VAR_7, u32 VAR_8)
{
 struct gfs2_sbd *VAR_9 = FUNC_0(&VAR_6->i_inode);
 struct gfs2_quota_data **VAR_10;
 int VAR_11;

 if (VAR_6->i_res == ((void*)0))
  FUNC_3(VAR_6);

 VAR_10 = VAR_6->i_res->rs_qa_qd;

 if (FUNC_1(VAR_9, !VAR_6->i_res->rs_qa_qd_num) ||
     FUNC_1(VAR_9, !FUNC_5(VAR_2, &VAR_6->i_flags)))
  return -VAR_0;

 if (VAR_9->sd_args.ar_quota == VAR_1)
  return 0;

 VAR_11 = FUNC_4(VAR_9, VAR_5, VAR_6->i_inode.i_uid, VAR_10);
 if (VAR_11)
  goto out;
 VAR_6->i_res->rs_qa_qd_num++;
 VAR_10++;

 VAR_11 = FUNC_4(VAR_9, VAR_4, VAR_6->i_inode.i_gid, VAR_10);
 if (VAR_11)
  goto out;
 VAR_6->i_res->rs_qa_qd_num++;
 VAR_10++;

 if (VAR_7 != VAR_3 && VAR_7 != VAR_6->i_inode.i_uid) {
  VAR_11 = FUNC_4(VAR_9, VAR_5, VAR_7, VAR_10);
  if (VAR_11)
   goto out;
  VAR_6->i_res->rs_qa_qd_num++;
  VAR_10++;
 }

 if (VAR_8 != VAR_3 && VAR_8 != VAR_6->i_inode.i_gid) {
  VAR_11 = FUNC_4(VAR_9, VAR_4, VAR_8, VAR_10);
  if (VAR_11)
   goto out;
  VAR_6->i_res->rs_qa_qd_num++;
  VAR_10++;
 }

out:
 if (VAR_11)
  FUNC_2(VAR_6);
 return VAR_11;
}
