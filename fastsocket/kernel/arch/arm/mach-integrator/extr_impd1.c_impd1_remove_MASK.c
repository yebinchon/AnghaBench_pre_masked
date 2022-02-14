
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int start; } ;
struct lm_device {TYPE_1__ resource; int dev; } ;
struct impd1_module {int base; int * clks; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct impd1_module*) ;
 struct impd1_module* FUNC_5 (struct lm_device*) ;
 int FUNC_6 (struct lm_device*,int *) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct lm_device *VAR_2)
{
 struct impd1_module *VAR_3 = FUNC_5(VAR_2);
 int VAR_4;

 FUNC_2(&VAR_2->dev, ((void*)0), VAR_1);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3->clks); VAR_4++)
  FUNC_1(VAR_3->clks[VAR_4]);

 FUNC_6(VAR_2, ((void*)0));

 FUNC_3(VAR_3->base);
 FUNC_4(VAR_3);
 FUNC_7(VAR_2->resource.start, VAR_0);
}
