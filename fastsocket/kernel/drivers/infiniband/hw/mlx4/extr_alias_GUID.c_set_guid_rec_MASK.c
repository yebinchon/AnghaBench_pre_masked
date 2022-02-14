
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx4_sriov_alias_guid_info_rec_det {int guid_indexes; int method; int all_recs; } ;
struct TYPE_5__ {int ag_work_lock; TYPE_1__* ports_guid; int sa_client; } ;
struct TYPE_6__ {int going_down_lock; TYPE_2__ alias_guid; int is_going_down; } ;
struct mlx4_ib_dev {TYPE_3__ sriov; } ;
struct mlx4_alias_guid_work_context {int port; int block_num; scalar_t__ query_id; int list; int sa_query; int done; struct mlx4_ib_dev* dev; } ;
struct list_head {int dummy; } ;
struct ib_sa_guidinfo_rec {int block_num; int guid_info_list; int lid; } ;
struct ib_port_attr {scalar_t__ state; int lid; } ;
struct ib_device {int dummy; } ;
typedef int ib_sa_comp_mask ;
struct TYPE_4__ {int alias_guid_work; int wq; struct list_head cb_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ib_device*,int,struct ib_port_attr*,int) ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,struct ib_device*,int,struct ib_sa_guidinfo_rec*,int,int ,int,int ,int ,struct mlx4_alias_guid_work_context*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mlx4_ib_dev*,int,int) ;
 int FUNC_5 (struct mlx4_alias_guid_work_context*) ;
 struct mlx4_alias_guid_work_context* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,struct list_head*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (struct ib_sa_guidinfo_rec*,int ,int) ;
 int FUNC_11 (char*,int,...) ;
 int FUNC_12 (int ,int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 struct mlx4_ib_dev* FUNC_15 (struct ib_device*) ;

__attribute__((used)) static int FUNC_16(struct ib_device *VAR_10,
   u8 VAR_11, int VAR_12,
   struct mlx4_sriov_alias_guid_info_rec_det *VAR_13)
{
 int VAR_14;
 struct mlx4_ib_dev *VAR_15 = FUNC_15(VAR_10);
 struct ib_sa_guidinfo_rec VAR_16;
 ib_sa_comp_mask VAR_17;
 struct ib_port_attr VAR_18;
 struct mlx4_alias_guid_work_context *VAR_19;
 unsigned long VAR_20, VAR_21, VAR_22;
 struct list_head *VAR_23 =
  &VAR_15->sriov.alias_guid.ports_guid[VAR_11 - 1].cb_list;

 VAR_14 = FUNC_0(VAR_10, VAR_11, &VAR_18, 1);
 if (VAR_14) {
  FUNC_11("mlx4_ib_query_port failed (err: %d), port: %d\n",
    VAR_14, VAR_11);
  return VAR_14;
 }

 if (VAR_18.state != VAR_5) {
  FUNC_11("port %d not active...rescheduling\n", VAR_11);
  VAR_20 = 5 * VAR_4;
  VAR_14 = -VAR_0;
  goto new_schedule;
 }

 VAR_19 = FUNC_6(sizeof *VAR_19, VAR_2);
 if (!VAR_19) {
  VAR_14 = -VAR_1;
  VAR_20 = VAR_4 * 5;
  goto new_schedule;
 }
 VAR_19->port = VAR_11;
 VAR_19->dev = VAR_15;
 VAR_19->block_num = VAR_12;

 FUNC_10(&VAR_16, 0, sizeof (struct ib_sa_guidinfo_rec));

 VAR_16.lid = FUNC_1(VAR_18.lid);
 VAR_16.block_num = VAR_12;

 FUNC_9(VAR_16.guid_info_list, VAR_13->all_recs,
        VAR_3 * VAR_8);
 VAR_17 = VAR_7 | VAR_6 |
  VAR_13->guid_indexes;

 FUNC_3(&VAR_19->done);
 FUNC_13(&VAR_15->sriov.alias_guid.ag_work_lock, VAR_22);
 FUNC_7(&VAR_19->list, VAR_23);
 FUNC_14(&VAR_15->sriov.alias_guid.ag_work_lock, VAR_22);

 VAR_19->query_id =
  FUNC_2(VAR_15->sriov.alias_guid.sa_client,
       VAR_10, VAR_11, &VAR_16,
       VAR_17, VAR_13->method, 1000,
       VAR_2, VAR_9,
       VAR_19,
       &VAR_19->sa_query);
 if (VAR_19->query_id < 0) {
  FUNC_11("ib_sa_guid_info_rec_query failed, query_id: "
    "%d. will reschedule to the next 1 sec.\n",
    VAR_19->query_id);
  FUNC_13(&VAR_15->sriov.alias_guid.ag_work_lock, VAR_22);
  FUNC_8(&VAR_19->list);
  FUNC_5(VAR_19);
  FUNC_14(&VAR_15->sriov.alias_guid.ag_work_lock, VAR_22);
  VAR_20 = 1 * VAR_4;
  VAR_14 = -VAR_0;
  goto new_schedule;
 }
 VAR_14 = 0;
 goto out;

new_schedule:
 FUNC_13(&VAR_15->sriov.going_down_lock, VAR_21);
 FUNC_13(&VAR_15->sriov.alias_guid.ag_work_lock, VAR_22);
 FUNC_4(VAR_15, VAR_11, VAR_12);
 if (!VAR_15->sriov.is_going_down) {
  FUNC_12(VAR_15->sriov.alias_guid.ports_guid[VAR_11 - 1].wq,
       &VAR_15->sriov.alias_guid.ports_guid[VAR_11 - 1].alias_guid_work,
       VAR_20);
 }
 FUNC_14(&VAR_15->sriov.alias_guid.ag_work_lock, VAR_22);
 FUNC_14(&VAR_15->sriov.going_down_lock, VAR_21);

out:
 return VAR_14;
}
