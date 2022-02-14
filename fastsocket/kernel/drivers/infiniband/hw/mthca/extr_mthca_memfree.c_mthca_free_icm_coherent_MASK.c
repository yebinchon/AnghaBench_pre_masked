
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mthca_icm_chunk {int npages; TYPE_2__* mem; } ;
struct mthca_dev {TYPE_1__* pdev; } ;
struct TYPE_5__ {int length; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct mthca_dev *VAR_0, struct mthca_icm_chunk *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->npages; ++VAR_2) {
  FUNC_0(&VAR_0->pdev->dev, VAR_1->mem[VAR_2].length,
      FUNC_1(FUNC_3(&VAR_1->mem[VAR_2])),
      FUNC_2(&VAR_1->mem[VAR_2]));
 }
}
