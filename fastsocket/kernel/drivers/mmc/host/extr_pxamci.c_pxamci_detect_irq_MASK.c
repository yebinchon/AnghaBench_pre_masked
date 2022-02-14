
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxamci_host {TYPE_1__* pdata; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int detect_delay; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ) ;
 struct pxamci_host* FUNC_1 (void*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct pxamci_host *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_2, VAR_3->pdata->detect_delay);
 return VAR_0;
}
