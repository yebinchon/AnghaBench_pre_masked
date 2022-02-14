
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sep_device {int shared_bus; int shared_addr; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct sep_device *VAR_0, int VAR_1)
{
 FUNC_0(&VAR_0->pdev->dev, VAR_1,
    VAR_0->shared_addr, VAR_0->shared_bus);
}
