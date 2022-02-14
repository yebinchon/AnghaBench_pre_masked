
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctlr_info {TYPE_1__* pdev; scalar_t__ vaddr; } ;
struct TYPE_2__ {int dev; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,unsigned long) ;
 unsigned long FUNC_1 (scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct ctlr_info *VAR_2)
{
 unsigned long VAR_3 =
  FUNC_1(VAR_2->vaddr + VAR_1);
 FUNC_0(&VAR_2->pdev->dev, "intr_pending %lx\n", VAR_3);
 return VAR_3 & VAR_0;
}
