
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_tmu_priv {TYPE_2__* pdev; } ;
struct sh_timer_config {int timer_bit; } ;
struct TYPE_3__ {struct sh_timer_config* platform_data; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct sh_tmu_priv*,int ) ;
 int FUNC_1 (struct sh_tmu_priv*,int ,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct sh_tmu_priv *VAR_2, int VAR_3)
{
 struct sh_timer_config *VAR_4 = VAR_2->pdev->dev.platform_data;
 unsigned long VAR_5, VAR_6;


 FUNC_2(&VAR_1, VAR_5);
 VAR_6 = FUNC_0(VAR_2, VAR_0);

 if (VAR_3)
  VAR_6 |= 1 << VAR_4->timer_bit;
 else
  VAR_6 &= ~(1 << VAR_4->timer_bit);

 FUNC_1(VAR_2, VAR_0, VAR_6);
 FUNC_3(&VAR_1, VAR_5);
}
