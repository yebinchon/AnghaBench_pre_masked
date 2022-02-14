
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {scalar_t__ ipath_intconfig; scalar_t__ ipath_irq; } ;


 int FUNC_0 (scalar_t__,struct ipath_devdata*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ipath_devdata *VAR_0)
{
 FUNC_0(VAR_0->ipath_irq, VAR_0);
 FUNC_1(VAR_0->ipath_irq);
 VAR_0->ipath_irq = 0;
 VAR_0->ipath_intconfig = 0;
}
