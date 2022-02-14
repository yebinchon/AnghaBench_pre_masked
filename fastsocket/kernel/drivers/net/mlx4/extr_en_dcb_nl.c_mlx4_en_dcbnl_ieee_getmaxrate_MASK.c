
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx4_en_priv {int* maxrate; } ;
struct ieee_maxrate {int* tc_maxrate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlx4_en_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3,
       struct ieee_maxrate *VAR_4)
{
 struct mlx4_en_priv *VAR_5 = FUNC_0(VAR_3);
 int VAR_6;

 if (!VAR_5->maxrate)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  VAR_4->tc_maxrate[VAR_6] =
   VAR_5->maxrate[VAR_6] * VAR_2;

 return 0;
}
