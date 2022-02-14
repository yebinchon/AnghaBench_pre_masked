
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ ar_quota; } ;
struct gfs2_sbd {TYPE_4__* sd_vfs; TYPE_1__ sd_args; } ;
struct TYPE_7__ {int qb_warn; int qb_limit; int qb_value; } ;
struct gfs2_quota_data {scalar_t__ qd_id; scalar_t__ qd_change; scalar_t__ qd_last_warn; int qd_flags; TYPE_3__ qd_qb; } ;
struct gfs2_inode {TYPE_2__* i_res; int i_flags; int i_inode; } ;
typedef scalar_t__ s64 ;
struct TYPE_8__ {int s_dev; } ;
struct TYPE_6__ {unsigned int rs_qa_qd_num; struct gfs2_quota_data** rs_qa_qd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct gfs2_sbd* FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct gfs2_sbd*,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (struct gfs2_quota_data*,char*) ;
 int VAR_11 ;
 int FUNC_4 (int ,scalar_t__,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;

int FUNC_9(struct gfs2_inode *VAR_12, u32 VAR_13, u32 VAR_14)
{
 struct gfs2_sbd *VAR_15 = FUNC_0(&VAR_12->i_inode);
 struct gfs2_quota_data *VAR_16;
 s64 VAR_17;
 unsigned int VAR_18;
 int VAR_19 = 0;

 if (!FUNC_7(VAR_2, &VAR_12->i_flags))
  return 0;

        if (VAR_15->sd_args.ar_quota != VAR_1)
                return 0;

 for (VAR_18 = 0; VAR_18 < VAR_12->i_res->rs_qa_qd_num; VAR_18++) {
  VAR_16 = VAR_12->i_res->rs_qa_qd[VAR_18];

  if (!((VAR_16->qd_id == VAR_13 && FUNC_7(VAR_5, &VAR_16->qd_flags)) ||
        (VAR_16->qd_id == VAR_14 && !FUNC_7(VAR_5, &VAR_16->qd_flags))))
   continue;

  VAR_17 = (s64)FUNC_1(VAR_16->qd_qb.qb_value);
  FUNC_5(&VAR_11);
  VAR_17 += VAR_16->qd_change;
  FUNC_6(&VAR_11);

  if (FUNC_1(VAR_16->qd_qb.qb_limit) && (s64)FUNC_1(VAR_16->qd_qb.qb_limit) < VAR_17) {
   FUNC_3(VAR_16, "exceeded");
   FUNC_4(FUNC_7(VAR_5, &VAR_16->qd_flags) ?
        VAR_8 : VAR_3, VAR_16->qd_id,
        VAR_15->sd_vfs->s_dev, VAR_6);

   VAR_19 = -VAR_0;
   break;
  } else if (FUNC_1(VAR_16->qd_qb.qb_warn) &&
      (s64)FUNC_1(VAR_16->qd_qb.qb_warn) < VAR_17 &&
      FUNC_8(VAR_10, VAR_16->qd_last_warn +
      FUNC_2(VAR_15,
      VAR_9) * VAR_4)) {
   FUNC_4(FUNC_7(VAR_5, &VAR_16->qd_flags) ?
        VAR_8 : VAR_3, VAR_16->qd_id,
        VAR_15->sd_vfs->s_dev, VAR_7);
   VAR_19 = FUNC_3(VAR_16, "warning");
   VAR_16->qd_last_warn = VAR_10;
  }
 }

 return VAR_19;
}
