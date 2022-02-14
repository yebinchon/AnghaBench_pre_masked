
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_rtc {int irq_1Hz; int irq_Alrm; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,int) ;
 struct pxa_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,struct device*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ,char*,struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2)
{
 struct pxa_rtc *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_3(VAR_3->irq_1Hz, VAR_1, VAR_0,
     "rtc 1Hz", VAR_2);
 if (VAR_4 < 0) {
  FUNC_0(VAR_2, "can't get irq %i, err %d\n", VAR_3->irq_1Hz,
   VAR_4);
  goto err_irq_1Hz;
 }
 VAR_4 = FUNC_3(VAR_3->irq_Alrm, VAR_1, VAR_0,
     "rtc Alrm", VAR_2);
 if (VAR_4 < 0) {
  FUNC_0(VAR_2, "can't get irq %i, err %d\n", VAR_3->irq_Alrm,
   VAR_4);
  goto err_irq_Alrm;
 }

 return 0;

err_irq_Alrm:
 FUNC_2(VAR_3->irq_1Hz, VAR_2);
err_irq_1Hz:
 return VAR_4;
}
