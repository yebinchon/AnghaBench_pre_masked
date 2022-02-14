
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {scalar_t__* data; } ;
struct smsc95xx_priv {int mac_cr; int mac_cr_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usbnet*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct usbnet *VAR_2)
{
 struct smsc95xx_priv *VAR_3 = (struct smsc95xx_priv *)(VAR_2->data[0]);
 unsigned long VAR_4;

 FUNC_1(&VAR_3->mac_cr_lock, VAR_4);
 VAR_3->mac_cr |= VAR_1;
 FUNC_2(&VAR_3->mac_cr_lock, VAR_4);

 FUNC_0(VAR_2, VAR_0, VAR_3->mac_cr);
}
