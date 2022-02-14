
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx4_sriov_alias_guid_info_rec_det {int status; int all_recs; int guid_indexes; } ;
struct TYPE_7__ {TYPE_4__* ports_guid; } ;
struct TYPE_5__ {TYPE_3__ alias_guid; } ;
struct mlx4_ib_dev {TYPE_1__ sriov; } ;
struct TYPE_8__ {TYPE_2__* all_rec_per_port; } ;
struct TYPE_6__ {int status; int all_recs; int guid_indexes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct mlx4_ib_dev *VAR_2, int VAR_3,
          int VAR_4,
          struct mlx4_sriov_alias_guid_info_rec_det *VAR_5)
{
 VAR_2->sriov.alias_guid.ports_guid[VAR_3].all_rec_per_port[VAR_4].guid_indexes =
  VAR_5->guid_indexes;
 FUNC_0(VAR_2->sriov.alias_guid.ports_guid[VAR_3].all_rec_per_port[VAR_4].all_recs,
        VAR_5->all_recs, VAR_1 * VAR_0);
 VAR_2->sriov.alias_guid.ports_guid[VAR_3].all_rec_per_port[VAR_4].status =
  VAR_5->status;
}
