
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtip_port {TYPE_2__* dd; struct mtip_cmd* commands; } ;
struct mtip_cmd {int * comp_func; int * async_callback; } ;
struct completion {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct completion*) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct mtip_port *VAR_1,
       int VAR_2,
       void *VAR_3,
       int VAR_4)
{
 struct mtip_cmd *VAR_5 = &VAR_1->commands[VAR_2];
 struct completion *VAR_6 = VAR_3;
 if (FUNC_2(VAR_4 == VAR_0))
  FUNC_1(&VAR_1->dd->pdev->dev,
   "Internal command %d completed with TFE\n", VAR_2);

 VAR_5->async_callback = ((void*)0);
 VAR_5->comp_func = ((void*)0);

 FUNC_0(VAR_6);
}
