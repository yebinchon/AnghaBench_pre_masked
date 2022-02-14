
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int mac_addr; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct e1000_hw*,int ,int,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct e1000_hw*,int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct e1000_hw *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;

 FUNC_3("e1000_init_rx_addrs");


 FUNC_3("Programming MAC Address into RAR[0]\n");

 FUNC_2(VAR_2, VAR_2->mac_addr, 0);

 VAR_4 = VAR_0;


 FUNC_3("Clearing RAR[1-15]\n");
 for (VAR_3 = 1; VAR_3 < VAR_4; VAR_3++) {
  FUNC_1(VAR_2, VAR_1, (VAR_3 << 1), 0);
  FUNC_0();
  FUNC_1(VAR_2, VAR_1, ((VAR_3 << 1) + 1), 0);
  FUNC_0();
 }
}
