
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {struct mlx4_ib_fast_reg_page_list* page_list; } ;
struct mlx4_ib_fast_reg_page_list {TYPE_1__ ibfrpl; int map; int mapped_page_list; } ;
struct mlx4_ib_dev {TYPE_3__* dev; } ;
struct ib_fast_reg_page_list {int max_page_list_len; int device; } ;
struct TYPE_6__ {TYPE_2__* pdev; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (struct mlx4_ib_fast_reg_page_list*) ;
 struct mlx4_ib_dev* FUNC_2 (int ) ;
 struct mlx4_ib_fast_reg_page_list* FUNC_3 (struct ib_fast_reg_page_list*) ;

void FUNC_4(struct ib_fast_reg_page_list *VAR_0)
{
 struct mlx4_ib_dev *VAR_1 = FUNC_2(VAR_0->device);
 struct mlx4_ib_fast_reg_page_list *VAR_2 = FUNC_3(VAR_0);
 int VAR_3 = VAR_0->max_page_list_len * sizeof (u64);

 FUNC_0(&VAR_1->dev->pdev->dev, VAR_3, VAR_2->mapped_page_list,
     VAR_2->map);
 FUNC_1(VAR_2->ibfrpl.page_list);
 FUNC_1(VAR_2);
}
