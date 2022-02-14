
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgb_hw {int * curr_mac_addr; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct ixgb_hw*,int ,int,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct ixgb_hw*,int *) ;
 int FUNC_5 (struct ixgb_hw*,int *,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct ixgb_hw *VAR_2)
{
 u32 VAR_3;

 FUNC_0("ixgb_init_rx_addrs");






 if (!FUNC_6(VAR_2->curr_mac_addr)) {


  FUNC_4(VAR_2, VAR_2->curr_mac_addr);

  FUNC_2(" Keeping Permanent MAC Addr =%.2X %.2X %.2X ",
     VAR_2->curr_mac_addr[0],
     VAR_2->curr_mac_addr[1], VAR_2->curr_mac_addr[2]);
  FUNC_2("%.2X %.2X %.2X\n",
     VAR_2->curr_mac_addr[3],
     VAR_2->curr_mac_addr[4], VAR_2->curr_mac_addr[5]);
 } else {


  FUNC_1("Overriding MAC Address in RAR[0]\n");
  FUNC_2(" New MAC Addr =%.2X %.2X %.2X ",
     VAR_2->curr_mac_addr[0],
     VAR_2->curr_mac_addr[1], VAR_2->curr_mac_addr[2]);
  FUNC_2("%.2X %.2X %.2X\n",
     VAR_2->curr_mac_addr[3],
     VAR_2->curr_mac_addr[4], VAR_2->curr_mac_addr[5]);

  FUNC_5(VAR_2, VAR_2->curr_mac_addr, 0);
 }


 FUNC_1("Clearing RAR[1-15]\n");
 for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {

  FUNC_3(VAR_2, VAR_1, ((VAR_3 << 1) + 1), 0);
  FUNC_3(VAR_2, VAR_1, (VAR_3 << 1), 0);
 }

 return;
}
