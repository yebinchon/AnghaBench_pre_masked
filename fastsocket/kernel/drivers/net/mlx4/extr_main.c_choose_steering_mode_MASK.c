
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_dev_cap {int flags2; scalar_t__ fs_max_num_qp_per_entry; int fs_log_max_ucast_qp_range_size; } ;
struct TYPE_2__ {scalar_t__ num_qp_per_mgm; int flags; int steering_mode; int fs_log_max_ucast_qp_range_size; } ;
struct mlx4_dev {int oper_log_mgm_entry_size; TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mlx4_dev*,char*,int ,int,int) ;
 scalar_t__ FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*) ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mlx4_dev*,char*) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void FUNC_6(struct mlx4_dev *VAR_10,
     struct mlx4_dev_cap *VAR_11)
{
 if (VAR_8 == -1 &&
     VAR_11->flags2 & VAR_1 &&
     (!FUNC_3(VAR_10) ||
      (VAR_11->fs_max_num_qp_per_entry >= (VAR_9 + 1))) &&
     FUNC_0(VAR_11->fs_max_num_qp_per_entry) >=
  VAR_4) {
  VAR_10->oper_log_mgm_entry_size =
   FUNC_0(VAR_11->fs_max_num_qp_per_entry);
  VAR_10->caps.steering_mode = VAR_7;
  VAR_10->caps.num_qp_per_mgm = VAR_11->fs_max_num_qp_per_entry;
  VAR_10->caps.fs_log_max_ucast_qp_range_size =
   VAR_11->fs_log_max_ucast_qp_range_size;
 } else {
  if (VAR_10->caps.flags & VAR_3 &&
      VAR_10->caps.flags & VAR_2)
   VAR_10->caps.steering_mode = VAR_6;
  else {
   VAR_10->caps.steering_mode = VAR_5;

   if (VAR_10->caps.flags & VAR_3 ||
       VAR_10->caps.flags & VAR_2)
    FUNC_5(VAR_10, "Must have both UC_STEER and MC_STEER flags "
       "set to use B0 steering. Falling back to A0 steering mode.\n");
  }
  VAR_10->oper_log_mgm_entry_size =
   VAR_8 > 0 ?
   VAR_8 :
   VAR_0;
  VAR_10->caps.num_qp_per_mgm = FUNC_2(VAR_10);
 }
 FUNC_1(VAR_10, "Steering mode is: %s, oper_log_mgm_entry_size = %d, "
   "modparam log_num_mgm_entry_size = %d\n",
   FUNC_4(VAR_10->caps.steering_mode),
   VAR_10->oper_log_mgm_entry_size,
   VAR_8);
}
