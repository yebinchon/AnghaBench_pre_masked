
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct mlx4_dev*,int*) ;
 int FUNC_1 (struct mlx4_dev*,int) ;
 int FUNC_2 (struct mlx4_dev*,int,int,int,int ,int ) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(struct mlx4_dev *VAR_2, int VAR_3, int VAR_4, int VAR_5,
    u64 VAR_6, u64 *VAR_7)
{
 int VAR_8;
 int VAR_9;

 switch (VAR_4) {
 case 128:
  VAR_9 = FUNC_0(VAR_2, &VAR_8);
  if (VAR_9)
   break;

  VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_8, 1, VAR_1, 0);
  if (VAR_9) {
   FUNC_1(VAR_2, VAR_8);
   break;
  }

  FUNC_3(VAR_7, VAR_8);
  break;

 default:
  VAR_9 = -VAR_0;
 }

 return VAR_9;
}
