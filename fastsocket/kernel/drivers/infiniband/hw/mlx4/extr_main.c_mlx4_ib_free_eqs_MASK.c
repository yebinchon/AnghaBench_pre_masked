
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num_comp_vectors; } ;
struct mlx4_ib_dev {scalar_t__* eq_table; int eq_added; TYPE_1__ ib_dev; } ;
struct TYPE_4__ {scalar_t__ num_comp_vectors; } ;
struct mlx4_dev {TYPE_2__ caps; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct mlx4_dev*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mlx4_dev *VAR_0, struct mlx4_ib_dev *VAR_1)
{
 int VAR_2;


 if (!VAR_1->eq_table)
  return;


 VAR_1->ib_dev.num_comp_vectors = VAR_0->caps.num_comp_vectors;


 for (VAR_2 = 0; VAR_2 < VAR_1->eq_added; VAR_2++) {

  if (VAR_1->eq_table[VAR_2] <= VAR_0->caps.num_comp_vectors)
   continue;
  FUNC_1(VAR_0, VAR_1->eq_table[VAR_2]);
 }

 FUNC_0(VAR_1->eq_table);
}
