
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct res_common {int owner; } ;
struct mlx4_dev {int dummy; } ;
typedef enum mlx4_resource { ____Placeholder_mlx4_resource } mlx4_resource ;


 int VAR_0 ;
 int VAR_1 ;
 struct res_common* FUNC_0 (struct mlx4_dev*,int,int) ;
 int FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct mlx4_dev *VAR_2,
        enum mlx4_resource VAR_3,
        u64 VAR_4, int *VAR_5)
{

 struct res_common *VAR_6;
 int VAR_7 = -VAR_0;
 int VAR_8 = VAR_4;

 if (VAR_3 == VAR_1)
  VAR_8 &= 0x7fffff;
 FUNC_2(FUNC_1(VAR_2));

 VAR_6 = FUNC_0(VAR_2, VAR_8, VAR_3);
 if (VAR_6) {
  *VAR_5 = VAR_6->owner;
  VAR_7 = 0;
 }
 FUNC_3(FUNC_1(VAR_2));

 return VAR_7;
}
