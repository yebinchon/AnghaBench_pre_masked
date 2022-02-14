
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct mlx4_qp {int dummy; } ;
struct TYPE_2__ {int steering_mode; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
typedef enum mlx4_steer_type { ____Placeholder_mlx4_steer_type } mlx4_steer_type ;
typedef enum mlx4_protocol { ____Placeholder_mlx4_protocol } mlx4_protocol ;


 int VAR_0 ;


 int FUNC_0 (struct mlx4_dev*,int ) ;
 int FUNC_1 (struct mlx4_dev*,struct mlx4_qp*,int *,int,int) ;

__attribute__((used)) static int FUNC_2(struct mlx4_dev *VAR_1, struct mlx4_qp *VAR_2, u8 VAR_3[16],
       enum mlx4_protocol VAR_4, enum mlx4_steer_type VAR_5,
       u64 VAR_6)
{
 switch (VAR_1->caps.steering_mode) {
 case 128:
  return FUNC_0(VAR_1, VAR_6);
 case 129:
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 default:
  return -VAR_0;
 }
}
