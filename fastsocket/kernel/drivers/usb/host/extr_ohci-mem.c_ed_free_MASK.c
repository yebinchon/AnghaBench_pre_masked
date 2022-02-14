
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ohci_hcd {int ed_cache; } ;
struct ed {int dma; } ;


 int FUNC_0 (int ,struct ed*,int ) ;

__attribute__((used)) static void
FUNC_1 (struct ohci_hcd *VAR_0, struct ed *VAR_1)
{
 FUNC_0 (VAR_0->ed_cache, VAR_1, VAR_1->dma);
}
