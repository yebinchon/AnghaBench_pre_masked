
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_devdata {TYPE_1__* cspec; } ;
struct TYPE_2__ {scalar_t__ irq; } ;


 int FUNC_0 (scalar_t__,struct qib_devdata*) ;
 int FUNC_1 (struct qib_devdata*) ;

__attribute__((used)) static void FUNC_2(struct qib_devdata *VAR_0)
{
 if (VAR_0->cspec->irq) {
  FUNC_0(VAR_0->cspec->irq, VAR_0);
  VAR_0->cspec->irq = 0;
 }
 FUNC_1(VAR_0);
}
