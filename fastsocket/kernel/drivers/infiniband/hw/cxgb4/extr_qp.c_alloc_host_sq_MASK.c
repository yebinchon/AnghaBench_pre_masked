
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct t4_sq {int dma_addr; int queue; int phys_addr; int memsize; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct c4iw_rdev {TYPE_2__ lldi; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct t4_sq*,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct c4iw_rdev *VAR_3, struct t4_sq *VAR_4)
{
 VAR_4->queue = FUNC_0(&(VAR_3->lldi.pdev->dev), VAR_4->memsize,
           &(VAR_4->dma_addr), VAR_1);
 if (!VAR_4->queue)
  return -VAR_0;
 VAR_4->phys_addr = FUNC_2(VAR_4->queue);
 FUNC_1(VAR_4, VAR_2, VAR_4->dma_addr);
 return 0;
}
