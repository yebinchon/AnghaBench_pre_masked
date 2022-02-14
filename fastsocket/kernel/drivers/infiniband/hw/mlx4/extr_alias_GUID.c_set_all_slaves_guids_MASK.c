
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_sriov_alias_guid_info_rec_det {int guid_indexes; int status; int all_recs; } ;
struct mlx4_ib_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct mlx4_ib_dev*,int,int,struct mlx4_sriov_alias_guid_info_rec_det*) ;

__attribute__((used)) static void FUNC_2(struct mlx4_ib_dev *VAR_12, int VAR_13)
{
 int VAR_14;
 struct mlx4_sriov_alias_guid_info_rec_det VAR_15 ;

 for (VAR_14 = 0 ; VAR_14 < VAR_11 ; VAR_14++) {
  FUNC_0(VAR_15.all_recs, 0, VAR_10 * VAR_0);
  VAR_15.guid_indexes = (!VAR_14 ? 0 : VAR_1) |
   VAR_2 | VAR_3 |
   VAR_4 | VAR_5 |
   VAR_6 | VAR_7 |
   VAR_8;
  VAR_15.status = VAR_9;
  FUNC_1(VAR_12, VAR_13, VAR_14, &VAR_15);
 }
}
