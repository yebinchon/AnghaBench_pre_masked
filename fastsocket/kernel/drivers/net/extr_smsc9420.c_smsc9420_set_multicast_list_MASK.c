
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smsc9420_pdata {int dummy; } ;
struct net_device {int flags; scalar_t__ mc_count; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {struct dev_mc_list* next; int dmi_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct smsc9420_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct smsc9420_pdata*) ;
 int FUNC_3 (struct smsc9420_pdata*,int ) ;
 int FUNC_4 (struct smsc9420_pdata*,int ,int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_9)
{
 struct smsc9420_pdata *VAR_10 = FUNC_0(VAR_9);
 u32 VAR_11 = FUNC_3(VAR_10, VAR_5);

 if (VAR_9->flags & VAR_4) {
  FUNC_5(VAR_2, "Promiscuous Mode Enabled");
  VAR_11 |= VAR_8;
  VAR_11 &= (~VAR_7);
  VAR_11 &= (~VAR_6);
 } else if (VAR_9->flags & VAR_3) {
  FUNC_5(VAR_2, "Receive all Multicast Enabled");
  VAR_11 &= (~VAR_8);
  VAR_11 |= VAR_7;
  VAR_11 &= (~VAR_6);
 } else if (VAR_9->mc_count > 0) {
  struct dev_mc_list *VAR_12 = VAR_9->mc_list;
  u32 VAR_13 = 0, VAR_14 = 0;

  FUNC_5(VAR_2, "Multicast filter enabled");
  while (VAR_12) {
   u32 VAR_15 = FUNC_1(VAR_12->dmi_addr);
   u32 VAR_16 = 1 << (VAR_15 & 0x1F);

   if (VAR_15 & 0x20)
    VAR_14 |= VAR_16;
   else
    VAR_13 |= VAR_16;

   VAR_12 = VAR_12->next;
  }
  FUNC_4(VAR_10, VAR_0, VAR_14);
  FUNC_4(VAR_10, VAR_1, VAR_13);

  VAR_11 &= (~VAR_8);
  VAR_11 &= (~VAR_7);
  VAR_11 |= VAR_6;
 } else {
  FUNC_5(VAR_2, "Receive own packets only.");
  FUNC_4(VAR_10, VAR_0, 0);
  FUNC_4(VAR_10, VAR_1, 0);

  VAR_11 &= (~VAR_8);
  VAR_11 &= (~VAR_7);
  VAR_11 &= (~VAR_6);
 }

 FUNC_4(VAR_10, VAR_5, VAR_11);
 FUNC_2(VAR_10);
}
