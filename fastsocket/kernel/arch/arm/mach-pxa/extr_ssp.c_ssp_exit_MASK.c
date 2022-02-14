
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_device {int clk; } ;
struct ssp_dev {scalar_t__ irq; struct ssp_device* ssp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,struct ssp_dev*) ;
 int FUNC_2 (struct ssp_dev*) ;
 int FUNC_3 (struct ssp_device*) ;

void FUNC_4(struct ssp_dev *VAR_1)
{
 struct ssp_device *VAR_2 = VAR_1->ssp;

 FUNC_2(VAR_1);
 if (VAR_1->irq != VAR_0)
  FUNC_1(VAR_1->irq, VAR_1);
 FUNC_0(VAR_2->clk);
 FUNC_3(VAR_2);
}
