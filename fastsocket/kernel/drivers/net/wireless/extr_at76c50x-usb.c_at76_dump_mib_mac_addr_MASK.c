
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mib_mac_addr {int mac_addr; int * group_addr_status; int * group_addr; int * res; } ;
struct at76_priv {TYPE_1__* hw; int udev; } ;
struct TYPE_2__ {int wiphy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ,int,int ,int ) ;
 int FUNC_2 (int ,int ,struct mib_mac_addr*,int) ;
 int FUNC_3 (struct mib_mac_addr*) ;
 struct mib_mac_addr* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct at76_priv *VAR_3)
{
 int VAR_4;
 int VAR_5;
 struct mib_mac_addr *VAR_6 = FUNC_4(sizeof(struct mib_mac_addr),
      VAR_1);

 if (!VAR_6)
  return;

 VAR_5 = FUNC_2(VAR_3->udev, VAR_2, VAR_6,
      sizeof(struct mib_mac_addr));
 if (VAR_5 < 0) {
  FUNC_5(VAR_3->hw->wiphy,
     "at76_get_mib (MAC_ADDR) failed: %d\n", VAR_5);
  goto exit;
 }

 FUNC_1(VAR_0, "%s: MIB MAC_ADDR: mac_addr %pM res 0x%x 0x%x",
   FUNC_6(VAR_3->hw->wiphy),
   VAR_6->mac_addr, VAR_6->res[0], VAR_6->res[1]);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_6->group_addr); VAR_4++)
  FUNC_1(VAR_0, "%s: MIB MAC_ADDR: group addr %d: %pM, "
    "status %d", FUNC_6(VAR_3->hw->wiphy), VAR_4,
    VAR_6->group_addr[VAR_4], VAR_6->group_addr_status[VAR_4]);
exit:
 FUNC_3(VAR_6);
}
