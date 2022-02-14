
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_rtc {int irq_1Hz; int irq_Alrm; int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pxa_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,struct device*) ;
 int FUNC_2 (struct pxa_rtc*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_3)
{
 struct pxa_rtc *VAR_4 = FUNC_0(VAR_3);

 FUNC_3(&VAR_4->lock);
 FUNC_2(VAR_4, VAR_1 | VAR_2 | VAR_0);
 FUNC_4(&VAR_4->lock);

 FUNC_1(VAR_4->irq_Alrm, VAR_3);
 FUNC_1(VAR_4->irq_1Hz, VAR_3);
}
