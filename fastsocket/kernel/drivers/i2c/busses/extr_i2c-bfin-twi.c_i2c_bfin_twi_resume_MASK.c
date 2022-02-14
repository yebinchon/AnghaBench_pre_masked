
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; int name; } ;
struct bfin_twi_iface {int saved_control; int saved_clkdiv; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 struct bfin_twi_iface* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ,int ,int ,int ,struct bfin_twi_iface*) ;
 int FUNC_3 (struct bfin_twi_iface*,int ) ;
 int FUNC_4 (struct bfin_twi_iface*,int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct bfin_twi_iface *VAR_4 = FUNC_1(VAR_3);

 int VAR_5 = FUNC_2(VAR_4->irq, VAR_2,
  VAR_1, VAR_3->name, VAR_4);
 if (VAR_5) {
  FUNC_0(&VAR_3->dev, "Can't get IRQ %d !\n", VAR_4->irq);
  return -VAR_0;
 }


 FUNC_3(VAR_4, VAR_4->saved_clkdiv);


 FUNC_4(VAR_4, VAR_4->saved_control);

 return 0;
}
