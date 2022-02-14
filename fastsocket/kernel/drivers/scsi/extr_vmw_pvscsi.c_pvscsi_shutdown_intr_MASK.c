
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_adapter {scalar_t__ use_msix; int dev; scalar_t__ use_msi; scalar_t__ irq; } ;


 int FUNC_0 (scalar_t__,struct pvscsi_adapter*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pvscsi_adapter *VAR_0)
{
 if (VAR_0->irq) {
  FUNC_0(VAR_0->irq, VAR_0);
  VAR_0->irq = 0;
 }
 if (VAR_0->use_msi) {
  FUNC_1(VAR_0->dev);
  VAR_0->use_msi = 0;
 } else if (VAR_0->use_msix) {
  FUNC_2(VAR_0->dev);
  VAR_0->use_msix = 0;
 }
}
