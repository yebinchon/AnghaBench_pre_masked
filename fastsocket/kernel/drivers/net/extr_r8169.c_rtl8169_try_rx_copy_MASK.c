
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct rtl8169_private {int dev; TYPE_1__* pci_dev; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int,int ) ;
 int FUNC_1 (struct device*,int ,int,int ) ;
 int FUNC_2 (int ,void*,int) ;
 struct sk_buff* FUNC_3 (int ,int) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (void*) ;

__attribute__((used)) static struct sk_buff *FUNC_6(void *VAR_1,
        struct rtl8169_private *VAR_2,
        int VAR_3,
        dma_addr_t VAR_4)
{
 struct sk_buff *VAR_5;
 struct device *VAR_6 = &VAR_2->pci_dev->dev;

 VAR_1 = FUNC_5(VAR_1);
 FUNC_0(VAR_6, VAR_4, VAR_3, VAR_0);
 FUNC_4(VAR_1);
 VAR_5 = FUNC_3(VAR_2->dev, VAR_3);
 if (VAR_5)
  FUNC_2(VAR_5->data, VAR_1, VAR_3);
 FUNC_1(VAR_6, VAR_4, VAR_3, VAR_0);

 return VAR_5;
}
