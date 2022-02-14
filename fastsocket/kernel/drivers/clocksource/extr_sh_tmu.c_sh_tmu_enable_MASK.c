
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_tmu_priv {int rate; int clk; TYPE_2__* pdev; } ;
struct sh_timer_config {int clk; } ;
struct TYPE_3__ {struct sh_timer_config* platform_data; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct sh_tmu_priv*,int) ;
 int FUNC_4 (struct sh_tmu_priv*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct sh_tmu_priv *VAR_3)
{
 struct sh_timer_config *VAR_4 = VAR_3->pdev->dev.platform_data;
 int VAR_5;


 VAR_5 = FUNC_0(VAR_3->clk);
 if (VAR_5) {
  FUNC_2("sh_tmu: cannot enable clock \"%s\"\n", VAR_4->clk);
  return VAR_5;
 }


 FUNC_3(VAR_3, 0);


 FUNC_4(VAR_3, VAR_1, 0xffffffff);
 FUNC_4(VAR_3, VAR_0, 0xffffffff);


 VAR_3->rate = FUNC_1(VAR_3->clk) / 4;
 FUNC_4(VAR_3, VAR_2, 0x0000);


 FUNC_3(VAR_3, 1);

 return 0;
}
