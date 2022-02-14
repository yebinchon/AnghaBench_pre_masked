
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx4_dev*,int) ;
 int FUNC_1 (struct mlx4_dev*,int,int) ;
 int FUNC_2 (struct mlx4_dev*,int,int,int*) ;
 int FUNC_3 (struct mlx4_dev*,int,int,int,int ,int ) ;
 int FUNC_4 (struct mlx4_dev*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mlx4_dev*,int,int,int ,int *,int) ;
 int FUNC_8 (struct mlx4_dev*,int,int ,int) ;
 int FUNC_9 (struct mlx4_dev*,int,int ,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (struct mlx4_dev*,int,int) ;

__attribute__((used)) static int FUNC_12(struct mlx4_dev *VAR_3, int VAR_4, int VAR_5, int VAR_6,
   u64 VAR_7, u64 *VAR_8)
{
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 switch (VAR_5) {
 case 128:
  VAR_10 = FUNC_6(&VAR_7);
  VAR_11 = FUNC_5(&VAR_7);
  VAR_9 = FUNC_2(VAR_3, VAR_10, VAR_11, &VAR_12);
  if (VAR_9)
   return VAR_9;

  VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_12, VAR_10, VAR_1, 0);
  if (VAR_9) {
   FUNC_1(VAR_3, VAR_12, VAR_10);
   return VAR_9;
  }
  FUNC_10(VAR_8, VAR_12);
  break;
 case 129:
  VAR_13 = FUNC_6(&VAR_7) & 0x7fffff;
  if (FUNC_11(VAR_3, VAR_4, VAR_13)) {
   VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_13, 1, VAR_1, 0);
   if (VAR_9)
    return VAR_9;
  }

  VAR_9 = FUNC_7(VAR_3, VAR_4, VAR_13, VAR_2,
        ((void*)0), 1);
  if (VAR_9)
   return VAR_9;

  if (!FUNC_4(VAR_3, VAR_13)) {
   VAR_9 = FUNC_0(VAR_3, VAR_13);
   if (VAR_9) {
    FUNC_8(VAR_3, VAR_4, VAR_1, VAR_13);
    return VAR_9;
   }
  }

  FUNC_9(VAR_3, VAR_4, VAR_1, VAR_13);
  break;

 default:
  VAR_9 = -VAR_0;
  break;
 }
 return VAR_9;
}
