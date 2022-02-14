
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct res_common {scalar_t__ state; int owner; scalar_t__ from_state; } ;
struct mlx4_dev {int dummy; } ;
typedef enum mlx4_resource { ____Placeholder_mlx4_resource } mlx4_resource ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct res_common* FUNC_0 (struct mlx4_dev*,int ,int) ;
 int FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mlx4_dev *VAR_4, int VAR_5, u64 VAR_6,
     enum mlx4_resource VAR_7,
     void *VAR_8)
{
 struct res_common *VAR_9;
 int VAR_10 = 0;

 FUNC_2(FUNC_1(VAR_4));
 VAR_9 = FUNC_0(VAR_4, VAR_6, VAR_7);
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto exit;
 }

 if (VAR_9->state == VAR_3) {
  VAR_10 = -VAR_0;
  goto exit;
 }

 if (VAR_9->owner != VAR_5) {
  VAR_10 = -VAR_2;
  goto exit;
 }

 VAR_9->from_state = VAR_9->state;
 VAR_9->state = VAR_3;

 if (VAR_8)
  *((struct res_common **)VAR_8) = VAR_9;

exit:
 FUNC_3(FUNC_1(VAR_4));
 return VAR_10;
}
