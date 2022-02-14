
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbnet {scalar_t__* data; } ;
struct smsc95xx_priv {scalar_t__ use_rx_csum; scalar_t__ use_tx_csum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usbnet*,char*,int ) ;
 int FUNC_1 (struct usbnet*,char*,int) ;
 scalar_t__ FUNC_2 (struct usbnet*) ;
 int FUNC_3 (struct usbnet*,int ,int *) ;
 int FUNC_4 (struct usbnet*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct usbnet *VAR_3)
{
 struct smsc95xx_priv *VAR_4 = (struct smsc95xx_priv *)(VAR_3->data[0]);
 u32 VAR_5;
 int VAR_6 = FUNC_3(VAR_3, VAR_0, &VAR_5);
 if (VAR_6 < 0) {
  FUNC_1(VAR_3, "Failed to read COE_CR: %d", VAR_6);
  return VAR_6;
 }

 if (VAR_4->use_tx_csum)
  VAR_5 |= VAR_2;
 else
  VAR_5 &= ~VAR_2;

 if (VAR_4->use_rx_csum)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;

 VAR_6 = FUNC_4(VAR_3, VAR_0, VAR_5);
 if (VAR_6 < 0) {
  FUNC_1(VAR_3, "Failed to write COE_CR: %d", VAR_6);
  return VAR_6;
 }

 if (FUNC_2(VAR_3))
  FUNC_0(VAR_3, "COE_CR = 0x%08x", VAR_5);
 return 0;
}
