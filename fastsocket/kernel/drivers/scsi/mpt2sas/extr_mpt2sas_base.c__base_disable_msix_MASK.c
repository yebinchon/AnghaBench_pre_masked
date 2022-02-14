
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPT2SAS_ADAPTER {scalar_t__ msix_enable; int pdev; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct MPT2SAS_ADAPTER *VAR_0)
{
 if (VAR_0->msix_enable) {
  FUNC_0(VAR_0->pdev);
  VAR_0->msix_enable = 0;
 }
}
