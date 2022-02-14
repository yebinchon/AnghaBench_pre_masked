
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct TYPE_7__ {TYPE_2__* ports_guid; } ;
struct TYPE_8__ {TYPE_3__ alias_guid; } ;
struct mlx4_ib_dev {TYPE_4__ sriov; } ;
typedef int ib_sa_comp_mask ;
struct TYPE_6__ {TYPE_1__* all_rec_per_port; } ;
struct TYPE_5__ {scalar_t__ ownership; int guid_indexes; int * all_recs; int method; int status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct mlx4_ib_dev *VAR_6, u8 VAR_7, int VAR_8)
{
 int VAR_9;
 u64 VAR_10;
 ib_sa_comp_mask VAR_11 = 0;

 VAR_6->sriov.alias_guid.ports_guid[VAR_7 - 1].all_rec_per_port[VAR_8].status
  = VAR_3;
 VAR_6->sriov.alias_guid.ports_guid[VAR_7 - 1].all_rec_per_port[VAR_8].method
  = VAR_2;


 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_10 =
   *(u64 *)&VAR_6->sriov.alias_guid.ports_guid[VAR_7 - 1].
   all_rec_per_port[VAR_8].all_recs[VAR_0 * VAR_9];






  if (VAR_1 == VAR_10 ||
      (!VAR_8 && !VAR_9) ||
      VAR_4 == VAR_6->sriov.alias_guid.
      ports_guid[VAR_7 - 1].all_rec_per_port[VAR_8].ownership)
   continue;
  VAR_11 |= FUNC_0(VAR_9);
 }
 VAR_6->sriov.alias_guid.ports_guid[VAR_7 - 1].
  all_rec_per_port[VAR_8].guid_indexes = VAR_11;
}
