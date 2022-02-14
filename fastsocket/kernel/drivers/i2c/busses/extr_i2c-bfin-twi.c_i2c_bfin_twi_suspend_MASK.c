
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct bfin_twi_iface {int saved_control; int irq; int saved_clkdiv; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct bfin_twi_iface*) ;
 struct bfin_twi_iface* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct bfin_twi_iface*) ;
 int FUNC_3 (struct bfin_twi_iface*) ;
 int FUNC_4 (struct bfin_twi_iface*,int) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1, pm_message_t VAR_2)
{
 struct bfin_twi_iface *VAR_3 = FUNC_1(VAR_1);

 VAR_3->saved_clkdiv = FUNC_2(VAR_3);
 VAR_3->saved_control = FUNC_3(VAR_3);

 FUNC_0(VAR_3->irq, VAR_3);


 FUNC_4(VAR_3, VAR_3->saved_control & ~VAR_0);

 return 0;
}
