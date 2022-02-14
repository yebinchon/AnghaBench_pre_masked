
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct ib_fast_reg_page_list {struct mlx4_ib_fast_reg_page_list* page_list; } ;
struct mlx4_ib_fast_reg_page_list {int map; struct ib_fast_reg_page_list ibfrpl; int mapped_page_list; } ;
struct mlx4_ib_dev {TYPE_2__* dev; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_fast_reg_page_list* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,int*,int ) ;
 int FUNC_3 (struct mlx4_ib_fast_reg_page_list*) ;
 void* FUNC_4 (int,int ) ;
 struct mlx4_ib_dev* FUNC_5 (struct ib_device*) ;

struct ib_fast_reg_page_list *FUNC_6(struct ib_device *VAR_4,
              int VAR_5)
{
 struct mlx4_ib_dev *VAR_6 = FUNC_5(VAR_4);
 struct mlx4_ib_fast_reg_page_list *VAR_7;
 int VAR_8 = VAR_5 * sizeof (u64);

 if (VAR_5 > VAR_3)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_4(sizeof *VAR_7, VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_7->ibfrpl.page_list = FUNC_4(VAR_8, VAR_2);
 if (!VAR_7->ibfrpl.page_list)
  goto err_free;

 VAR_7->mapped_page_list = FUNC_2(&VAR_6->dev->pdev->dev,
           VAR_8, &VAR_7->map,
           VAR_2);
 if (!VAR_7->mapped_page_list)
  goto err_free;

 FUNC_1(VAR_7->map & 0x3f);

 return &VAR_7->ibfrpl;

err_free:
 FUNC_3(VAR_7->ibfrpl.page_list);
 FUNC_3(VAR_7);
 return FUNC_0(-VAR_1);
}
