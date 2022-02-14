
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int* dev_addr; int flags; int mc_count; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {int dmi_addr; struct dev_mc_list* next; } ;
struct catc {int* multicast; int* rxmode; int is_f5u011; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int*,int*) ;
 int FUNC_1 (struct catc*,int ,int) ;
 int FUNC_2 (struct catc*,int,int*,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct catc*,int*) ;
 int FUNC_6 (struct catc*,int*) ;
 int FUNC_7 (int*,int,int) ;
 struct catc* FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_8)
{
 struct catc *VAR_9 = FUNC_8(VAR_8);
 struct dev_mc_list *VAR_10;
 u8 VAR_11[6];
 u8 VAR_12 = VAR_3 | VAR_5 | VAR_4;
 int VAR_13;

 FUNC_7(VAR_11, 0xff, 6);
 FUNC_7(VAR_9->multicast, 0, 64);

 FUNC_0(VAR_11, VAR_9->multicast);
 FUNC_0(VAR_8->dev_addr, VAR_9->multicast);

 if (VAR_8->flags & VAR_2) {
  FUNC_7(VAR_9->multicast, 0xff, 64);
  VAR_12 |= (!VAR_9->is_f5u011) ? VAR_6 : VAR_0;
 }

 if (VAR_8->flags & VAR_1) {
  FUNC_7(VAR_9->multicast, 0xff, 64);
 } else {
  for (VAR_13 = 0, VAR_10 = VAR_8->mc_list; VAR_10 && VAR_13 < VAR_8->mc_count; VAR_13++, VAR_10 = VAR_10->next) {
   u32 VAR_14 = FUNC_4(6, VAR_10->dmi_addr);
   if (!VAR_9->is_f5u011) {
    VAR_9->multicast[(VAR_14 >> 3) & 0x3f] |= 1 << (VAR_14 & 7);
   } else {
    VAR_9->multicast[7-(VAR_14 >> 29)] |= 1 << ((VAR_14 >> 26) & 7);
   }
  }
 }
 if (!VAR_9->is_f5u011) {
  FUNC_1(VAR_9, VAR_7, VAR_12);
  FUNC_2(VAR_9, 0xfa80, VAR_9->multicast, 64);
 } else {
  FUNC_5(VAR_9, VAR_9->multicast);
  if (VAR_9->rxmode[0] != VAR_12) {
   VAR_9->rxmode[0] = VAR_12;
   FUNC_3("Setting RX mode to %2.2X %2.2X", VAR_9->rxmode[0], VAR_9->rxmode[1]);
   FUNC_6(VAR_9, VAR_9->rxmode);
  }
 }
}
