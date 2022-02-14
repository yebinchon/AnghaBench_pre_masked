
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int maxrate; } ;
struct ieee_maxrate {scalar_t__* tc_maxrate; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct mlx4_en_priv*,int *,int *) ;
 struct mlx4_en_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
  struct ieee_maxrate *VAR_3)
{
 struct mlx4_en_priv *VAR_4 = FUNC_3(VAR_2);
 u16 VAR_5[VAR_0];
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {




  VAR_5[VAR_6] = FUNC_0(VAR_3->tc_maxrate[VAR_6] +
     VAR_1 - 1,
     VAR_1);
 }

 VAR_7 = FUNC_2(VAR_4, ((void*)0), VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_1(VAR_4->maxrate, VAR_5, sizeof(VAR_4->maxrate));

 return 0;
}
