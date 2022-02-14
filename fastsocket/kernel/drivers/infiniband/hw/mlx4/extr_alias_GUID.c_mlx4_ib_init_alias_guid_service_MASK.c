
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct mlx4_sriov_alias_guid_port_rec_det {int dummy; } ;
struct TYPE_7__ {int * sa_client; TYPE_5__* ports_guid; int ag_work_lock; } ;
struct TYPE_8__ {TYPE_2__ alias_guid; } ;
struct TYPE_9__ {scalar_t__ (* query_gid ) (TYPE_4__*,int,int ,union ib_gid*) ;} ;
struct mlx4_ib_dev {int num_ports; TYPE_3__ sriov; TYPE_4__ ib_dev; int dev; } ;
typedef int __be64 ;
struct TYPE_10__ {int port; int * wq; int alias_guid_work; TYPE_2__* parent; int cb_list; TYPE_1__* all_rec_per_port; } ;
struct TYPE_6__ {int * all_recs; int ownership; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mlx4_ib_dev*,int,int) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int,int ) ;
 int FUNC_10 (TYPE_5__*,int ,int) ;
 scalar_t__ VAR_10 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (struct mlx4_ib_dev*,int) ;
 int FUNC_14 (char*,int,char*,int) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (TYPE_4__*,int,int ,union ib_gid*) ;

int FUNC_17(struct mlx4_ib_dev *VAR_11)
{
 char VAR_12[15];
 int VAR_13 = 0;
 int VAR_14, VAR_15, VAR_16;
 union ib_gid VAR_17;

 if (!FUNC_11(VAR_11->dev))
  return 0;
 VAR_11->sriov.alias_guid.sa_client =
  FUNC_9(sizeof *VAR_11->sriov.alias_guid.sa_client, VAR_2);
 if (!VAR_11->sriov.alias_guid.sa_client)
  return -VAR_1;

 FUNC_5(VAR_11->sriov.alias_guid.sa_client);

 FUNC_15(&VAR_11->sriov.alias_guid.ag_work_lock);

 for (VAR_14 = 1; VAR_14 <= VAR_11->num_ports; ++VAR_14) {
  if (VAR_11->ib_dev.query_gid(&VAR_11->ib_dev , VAR_14, 0, &VAR_17)) {
   VAR_13 = -VAR_0;
   goto err_unregister;
  }
 }

 for (VAR_14 = 0 ; VAR_14 < VAR_11->num_ports; VAR_14++) {
  FUNC_10(&VAR_11->sriov.alias_guid.ports_guid[VAR_14], 0,
         sizeof (struct mlx4_sriov_alias_guid_port_rec_det));

  for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
   if (VAR_10) {
    VAR_11->sriov.alias_guid.ports_guid[VAR_14].
     all_rec_per_port[VAR_15].
     ownership = VAR_4;
    continue;
   }
   VAR_11->sriov.alias_guid.ports_guid[VAR_14].all_rec_per_port[VAR_15].
     ownership = VAR_6;


   for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {
    *(__be64 *)&VAR_11->sriov.alias_guid.ports_guid[VAR_14].
     all_rec_per_port[VAR_15].all_recs[VAR_3 * VAR_16] =
      FUNC_2(VAR_5);
   }
  }
  FUNC_1(&VAR_11->sriov.alias_guid.ports_guid[VAR_14].cb_list);

  for (VAR_15 = 0 ; VAR_15 < VAR_8; VAR_15++)
   FUNC_7(VAR_11, VAR_14 + 1, VAR_15);

  VAR_11->sriov.alias_guid.ports_guid[VAR_14].parent = &VAR_11->sriov.alias_guid;
  VAR_11->sriov.alias_guid.ports_guid[VAR_14].port = VAR_14;
  if (VAR_10)
   FUNC_13(VAR_11, VAR_14);

  FUNC_14(VAR_12, sizeof VAR_12, "alias_guid%d", VAR_14);
  VAR_11->sriov.alias_guid.ports_guid[VAR_14].wq =
   FUNC_3(VAR_12);
  if (!VAR_11->sriov.alias_guid.ports_guid[VAR_14].wq) {
   VAR_13 = -VAR_1;
   goto err_thread;
  }
  FUNC_0(&VAR_11->sriov.alias_guid.ports_guid[VAR_14].alias_guid_work,
     VAR_9);
 }
 return 0;

err_thread:
 for (--VAR_14; VAR_14 >= 0; VAR_14--) {
  FUNC_4(VAR_11->sriov.alias_guid.ports_guid[VAR_14].wq);
  VAR_11->sriov.alias_guid.ports_guid[VAR_14].wq = ((void*)0);
 }

err_unregister:
 FUNC_6(VAR_11->sriov.alias_guid.sa_client);
 FUNC_8(VAR_11->sriov.alias_guid.sa_client);
 VAR_11->sriov.alias_guid.sa_client = ((void*)0);
 FUNC_12("init_alias_guid_service: Failed. (ret:%d)\n", VAR_13);
 return VAR_13;
}
