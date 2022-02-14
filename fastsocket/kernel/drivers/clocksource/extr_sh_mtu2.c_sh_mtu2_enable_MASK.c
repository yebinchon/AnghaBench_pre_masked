
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_timer_config {int clk; } ;
struct sh_mtu2_priv {int rate; int periodic; int clk; TYPE_1__* pdev; } ;
struct TYPE_4__ {struct sh_timer_config* platform_data; } ;
struct TYPE_3__ {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct sh_mtu2_priv*,int) ;
 int FUNC_4 (struct sh_mtu2_priv*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct sh_mtu2_priv *VAR_7)
{
 struct sh_timer_config *VAR_8 = VAR_7->pdev->dev.platform_data;
 int VAR_9;


 VAR_9 = FUNC_0(VAR_7->clk);
 if (VAR_9) {
  FUNC_2("sh_mtu2: cannot enable clock \"%s\"\n", VAR_8->clk);
  return VAR_9;
 }


 FUNC_3(VAR_7, 0);

 VAR_7->rate = FUNC_1(VAR_7->clk) / 64;
 VAR_7->periodic = (VAR_7->rate + VAR_0/2) / VAR_0;


 FUNC_4(VAR_7, VAR_2, 0x23);
 FUNC_4(VAR_7, VAR_5, 0);
 FUNC_4(VAR_7, VAR_3, VAR_7->periodic);
 FUNC_4(VAR_7, VAR_1, 0);
 FUNC_4(VAR_7, VAR_6, 0);
 FUNC_4(VAR_7, VAR_4, 0x01);


 FUNC_3(VAR_7, 1);

 return 0;
}
