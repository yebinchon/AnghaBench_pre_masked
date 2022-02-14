
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {size_t id; } ;
struct bfin_twi_iface {int regs_base; int irq; int adap; } ;


 int FUNC_0 (int ,struct bfin_twi_iface*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bfin_twi_iface*) ;
 int FUNC_4 (int ) ;
 int * VAR_0 ;
 struct bfin_twi_iface* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct bfin_twi_iface *VAR_2 = FUNC_5(VAR_1);

 FUNC_6(VAR_1, ((void*)0));

 FUNC_1(&(VAR_2->adap));
 FUNC_0(VAR_2->irq, VAR_2);
 FUNC_4(VAR_0[VAR_1->id]);
 FUNC_2(VAR_2->regs_base);
 FUNC_3(VAR_2);

 return 0;
}
