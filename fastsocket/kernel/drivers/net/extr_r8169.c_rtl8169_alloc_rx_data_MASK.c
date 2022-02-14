
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void sk_buff ;
struct rtl8169_private {struct net_device* dev; TYPE_1__* pci_dev; } ;
struct TYPE_4__ {scalar_t__ parent; } ;
struct net_device {TYPE_2__ dev; } ;
struct device {int dummy; } ;
struct RxDesc {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,void*,scalar_t__,int ) ;
 int FUNC_2 (struct device*,int ) ;
 int VAR_2 ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct rtl8169_private*,int ,struct net_device*,char*) ;
 void* FUNC_7 (void*) ;
 int FUNC_8 (struct RxDesc*,int ,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static struct sk_buff *FUNC_10(struct rtl8169_private *VAR_4,
          struct RxDesc *VAR_5)
{
 void *VAR_6;
 dma_addr_t VAR_7;
 struct device *VAR_8 = &VAR_4->pci_dev->dev;
 struct net_device *VAR_9 = VAR_4->dev;
 int VAR_10 = VAR_9->dev.parent ? FUNC_0(VAR_9->dev.parent) : -1;

 VAR_6 = FUNC_4(VAR_3, VAR_1, VAR_10);
 if (!VAR_6)
  return ((void*)0);

 if (FUNC_7(VAR_6) != VAR_6) {
  FUNC_3(VAR_6);
  VAR_6 = FUNC_4(VAR_3 + 15, VAR_1, VAR_10);
  if (!VAR_6)
   return ((void*)0);
 }

 VAR_7 = FUNC_1(VAR_8, FUNC_7(VAR_6), VAR_3,
     VAR_0);
 if (FUNC_9(FUNC_2(VAR_8, VAR_7))) {
  if (FUNC_5())
   FUNC_6(VAR_4, VAR_2, VAR_4->dev, "Failed to map RX DMA!\n");
  goto err_out;
 }

 FUNC_8(VAR_5, VAR_7, VAR_3);
 return VAR_6;

err_out:
 FUNC_3(VAR_6);
 return ((void*)0);
}
