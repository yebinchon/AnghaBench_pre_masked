
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udc {scalar_t__ connected; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct udc*) ;

__attribute__((used)) static void FUNC_3(struct udc *VAR_1)
{

 FUNC_0(&VAR_1->pdev->dev, "USB Disconnect\n");

 VAR_1->connected = 0;


 FUNC_2(VAR_1);






 FUNC_1(&VAR_0);
}
