
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct cnic_local {int hq_size; int r2tq_size; int task_array_size; int cid_tbl; int fcoe_cid_tbl; struct cnic_context* ctx_tbl; } ;
struct cnic_iscsi {int hq_info; int r2tq_info; int task_array_info; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;
struct TYPE_2__ {struct cnic_iscsi* iscsi; } ;
struct cnic_context {scalar_t__ ulp_proto_id; size_t cid; TYPE_1__ proto; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct cnic_dev*,int *,int,int) ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (struct cnic_dev*,size_t) ;

__attribute__((used)) static int FUNC_4(struct cnic_dev *VAR_3, u32 VAR_4)
{
 u32 VAR_5;
 int VAR_6, VAR_7;
 struct cnic_local *VAR_8 = VAR_3->cnic_priv;
 struct cnic_context *VAR_9 = &VAR_8->ctx_tbl[VAR_4];
 struct cnic_iscsi *VAR_10 = VAR_9->proto.iscsi;

 if (VAR_9->ulp_proto_id == VAR_0) {
  VAR_5 = FUNC_2(&VAR_8->fcoe_cid_tbl);
  if (VAR_5 == -1) {
   VAR_6 = -VAR_1;
   goto error;
  }
  VAR_9->cid = VAR_5;
  return 0;
 }

 VAR_5 = FUNC_2(&VAR_8->cid_tbl);
 if (VAR_5 == -1) {
  VAR_6 = -VAR_1;
  goto error;
 }

 VAR_9->cid = VAR_5;
 VAR_7 = FUNC_0(VAR_8->task_array_size) / VAR_2;

 VAR_6 = FUNC_1(VAR_3, &VAR_10->task_array_info, VAR_7, 1);
 if (VAR_6)
  goto error;

 VAR_7 = FUNC_0(VAR_8->r2tq_size) / VAR_2;
 VAR_6 = FUNC_1(VAR_3, &VAR_10->r2tq_info, VAR_7, 1);
 if (VAR_6)
  goto error;

 VAR_7 = FUNC_0(VAR_8->hq_size) / VAR_2;
 VAR_6 = FUNC_1(VAR_3, &VAR_10->hq_info, VAR_7, 1);
 if (VAR_6)
  goto error;

 return 0;

error:
 FUNC_3(VAR_3, VAR_4);
 return VAR_6;
}
