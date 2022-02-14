
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8169_private {TYPE_1__* pci_dev; } ;
struct RxDesc {int addr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct RxDesc*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct rtl8169_private *VAR_2,
         void **VAR_3, struct RxDesc *VAR_4)
{
 FUNC_0(&VAR_2->pci_dev->dev, FUNC_2(VAR_4->addr), VAR_1,
    VAR_0);

 FUNC_1(*VAR_3);
 *VAR_3 = ((void*)0);
 FUNC_3(VAR_4);
}
