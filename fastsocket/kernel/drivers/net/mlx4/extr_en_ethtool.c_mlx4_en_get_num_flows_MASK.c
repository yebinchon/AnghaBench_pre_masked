
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_en_priv {TYPE_1__* ethtool_rules; } ;
struct TYPE_2__ {scalar_t__ id; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mlx4_en_priv *VAR_1)
{

 int VAR_2, VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->ethtool_rules[VAR_2].id)
   VAR_3++;
 }
 return VAR_3;

}
