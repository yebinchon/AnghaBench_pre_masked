
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int flags; int mc_count; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {int dmi_addrlen; int* dmi_addr; struct dev_mc_list* next; } ;
struct bcm_enet_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct bcm_enet_priv*,int ) ;
 int FUNC_3 (struct bcm_enet_priv*,int,int ) ;
 struct bcm_enet_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_6)
{
 struct bcm_enet_priv *VAR_7;
 struct dev_mc_list *VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_7 = FUNC_4(VAR_6);

 VAR_9 = FUNC_2(VAR_7, VAR_3);

 if (VAR_6->flags & VAR_5)
  VAR_9 |= VAR_2;
 else
  VAR_9 &= ~VAR_2;



 if ((VAR_6->flags & VAR_4) || VAR_6->mc_count > 3)
  VAR_9 |= VAR_1;
 else
  VAR_9 &= ~VAR_1;



 if (VAR_9 & VAR_1) {
  FUNC_3(VAR_7, VAR_9, VAR_3);
  return;
 }

 for (VAR_10 = 0, VAR_8 = VAR_6->mc_list;
      (VAR_8 != ((void*)0)) && (VAR_10 < VAR_6->mc_count) && (VAR_10 < 3);
      VAR_10++, VAR_8 = VAR_8->next) {
  u8 *VAR_11;
  u32 VAR_12;


  if (VAR_8->dmi_addrlen != 6)
   continue;


  VAR_11 = VAR_8->dmi_addr;
  VAR_12 = (VAR_11[2] << 24) | (VAR_11[3] << 16) |
   (VAR_11[4] << 8) | VAR_11[5];
  FUNC_3(VAR_7, VAR_12, FUNC_1(VAR_10 + 1));

  VAR_12 = (VAR_11[0] << 8 | VAR_11[1]);
  VAR_12 |= VAR_0;
  FUNC_3(VAR_7, VAR_12, FUNC_0(VAR_10 + 1));
 }

 for (; VAR_10 < 3; VAR_10++) {
  FUNC_3(VAR_7, 0, FUNC_1(VAR_10 + 1));
  FUNC_3(VAR_7, 0, FUNC_0(VAR_10 + 1));
 }

 FUNC_3(VAR_7, VAR_9, VAR_3);
}
