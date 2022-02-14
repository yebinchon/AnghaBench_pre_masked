
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct wpan_phy {int pib_lock; void* current_page; void* current_channel; } ;
struct net_device {int dummy; } ;
struct ieee802154_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct wpan_phy* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1,
  struct ieee802154_addr *VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct wpan_phy *VAR_6 = FUNC_4(VAR_1);

 FUNC_2(&VAR_6->pib_lock);
 VAR_6->current_channel = VAR_3;
 VAR_6->current_page = VAR_4;
 FUNC_3(&VAR_6->pib_lock);


 return FUNC_1(VAR_1, FUNC_0(VAR_1),
   VAR_0);
}
