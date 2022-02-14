
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_dev {int dummy; } ;
typedef enum mlx4_resource { ____Placeholder_mlx4_resource } mlx4_resource ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,int,int,int) ;
 int FUNC_1 () ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct mlx4_dev *VAR_2, int VAR_3,
    enum mlx4_resource VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 VAR_5 = VAR_1;
 do {
  VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, 0);
  if (FUNC_2(VAR_1, VAR_5 + 5 * VAR_0))
   break;
  if (VAR_6)
   FUNC_1();
 } while (VAR_6);

 if (VAR_6)
  VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, 1);

 return VAR_6;
}
