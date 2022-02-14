
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipw_priv {int* mac_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ipw_priv *VAR_1, u8 * VAR_2)
{

 VAR_2[0] = VAR_1->mac_addr[0];
 VAR_2[1] = VAR_1->mac_addr[1];
 VAR_2[2] = VAR_1->mac_addr[2];


 FUNC_0(&VAR_2[3], VAR_0 - 3);

 VAR_2[0] &= 0xfe;
 VAR_2[0] |= 0x02;
}
