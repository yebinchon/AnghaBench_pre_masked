
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtip_port {TYPE_1__* dd; int allocated; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int slot_groups; TYPE_2__* pdev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,unsigned int,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct mtip_port *VAR_0)
{
 int VAR_1, VAR_2;
 unsigned int VAR_3 = VAR_0->dd->slot_groups * 32;
 for (VAR_2 = 0; VAR_2 < 10; VAR_2++) {
  VAR_1 = FUNC_1(VAR_0->allocated,
      VAR_3, 1);
  if ((VAR_1 < VAR_3) &&
      (!FUNC_4(VAR_1, VAR_0->allocated)))
   return VAR_1;
 }
 FUNC_0(&VAR_0->dd->pdev->dev, "Failed to get a tag.\n");

 if (FUNC_2(VAR_0->dd->pdev)) {

  FUNC_3(VAR_0->dd);
 }
 return -1;
}
