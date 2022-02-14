
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usbnet {TYPE_1__* net; scalar_t__* data; } ;
struct smsc95xx_priv {int mac_cr; int mac_cr_lock; } ;
struct net_device {int dummy; } ;
struct dev_mc_list {scalar_t__ dmi_addrlen; struct dev_mc_list* next; int dmi_addr; } ;
struct TYPE_2__ {int flags; scalar_t__ mc_count; struct dev_mc_list* mc_list; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct usbnet*,char*,...) ;
 int FUNC_1 (struct usbnet*,char*) ;
 struct usbnet* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct usbnet*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usbnet*,int ,int*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_9)
{
 struct usbnet *VAR_10 = FUNC_2(VAR_9);
 struct smsc95xx_priv *VAR_11 = (struct smsc95xx_priv *)(VAR_10->data[0]);
 u32 VAR_12 = 0;
 u32 VAR_13 = 0;
 unsigned long VAR_14;

 FUNC_6(&VAR_11->mac_cr_lock, VAR_14);

 if (VAR_10->net->flags & VAR_4) {
  if (FUNC_3(VAR_10))
   FUNC_0(VAR_10, "promiscuous mode enabled");
  VAR_11->mac_cr |= VAR_8;
  VAR_11->mac_cr &= ~(VAR_7 | VAR_6);
 } else if (VAR_10->net->flags & VAR_3) {
  if (FUNC_3(VAR_10))
   FUNC_0(VAR_10, "receive all multicast enabled");
  VAR_11->mac_cr |= VAR_7;
  VAR_11->mac_cr &= ~(VAR_8 | VAR_6);
 } else if (VAR_10->net->mc_count > 0) {
  struct dev_mc_list *VAR_15 = VAR_10->net->mc_list;
  int VAR_16 = 0;

  VAR_11->mac_cr |= VAR_6;
  VAR_11->mac_cr &= ~(VAR_8 | VAR_7);

  while (VAR_15) {
   VAR_16++;
   if (VAR_15->dmi_addrlen == VAR_0) {
    u32 VAR_17 = FUNC_4(VAR_15->dmi_addr);
    u32 VAR_18 = 0x01 << (VAR_17 & 0x1F);
    if (VAR_17 & 0x20)
     VAR_12 |= VAR_18;
    else
     VAR_13 |= VAR_18;
   } else {
    FUNC_1(VAR_10, "dmi_addrlen != 6");
   }
   VAR_15 = VAR_15->next;
  }

  if (VAR_16 != ((u32)VAR_10->net->mc_count))
   FUNC_1(VAR_10, "mc_count != dev->mc_count");

  if (FUNC_3(VAR_10))
   FUNC_0(VAR_10, "HASHH=0x%08X, HASHL=0x%08X", VAR_12,
    VAR_13);
 } else {
  if (FUNC_3(VAR_10))
   FUNC_0(VAR_10, "receive own packets only");
  VAR_11->mac_cr &=
   ~(VAR_8 | VAR_7 | VAR_6);
 }

 FUNC_7(&VAR_11->mac_cr_lock, VAR_14);


 FUNC_5(VAR_10, VAR_1, &VAR_12);
 FUNC_5(VAR_10, VAR_2, &VAR_13);
 FUNC_5(VAR_10, VAR_5, &VAR_11->mac_cr);
}
