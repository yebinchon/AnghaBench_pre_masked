
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
 int FUNC_2 (struct mlx4_dev*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mlx4_dev*,int,int,int ,int *,int ) ;
 int FUNC_6 (struct mlx4_dev*,int,int,int,int ,int ) ;
 int FUNC_7 (struct mlx4_dev*,int,int ,int) ;
 int FUNC_8 (struct mlx4_dev*,int,int) ;

__attribute__((used)) static int FUNC_9(struct mlx4_dev *VAR_3, int VAR_4, int VAR_5, int VAR_6,
         u64 VAR_7)
{
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 switch (VAR_5) {
 case 128:
  VAR_10 = FUNC_4(&VAR_7) & 0x7fffff;
  VAR_9 = FUNC_3(&VAR_7);
  VAR_8 = FUNC_6(VAR_3, VAR_4, VAR_10, VAR_9, VAR_1, 0);
  if (VAR_8)
   break;
  FUNC_1(VAR_3, VAR_10, VAR_9);
  break;
 case 129:
  VAR_11 = FUNC_4(&VAR_7) & 0x7fffff;
  VAR_8 = FUNC_5(VAR_3, VAR_4, VAR_11, VAR_2,
        ((void*)0), 0);
  if (VAR_8)
   return VAR_8;

  if (!FUNC_2(VAR_3, VAR_11))
   FUNC_0(VAR_3, VAR_11);

  FUNC_7(VAR_3, VAR_4, VAR_1, VAR_11);

  if (FUNC_8(VAR_3, VAR_4, VAR_11))
   VAR_8 = FUNC_6(VAR_3, VAR_4, VAR_11, 1, VAR_1, 0);
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }
 return VAR_8;
}
