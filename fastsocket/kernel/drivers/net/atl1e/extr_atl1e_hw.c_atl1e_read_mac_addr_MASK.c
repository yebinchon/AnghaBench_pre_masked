
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atl1e_hw {int perm_mac_addr; int mac_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct atl1e_hw*) ;
 int FUNC_1 (int ,int ,int) ;

int FUNC_2(struct atl1e_hw *VAR_1)
{
 int VAR_2 = 0;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_0;
 FUNC_1(VAR_1->mac_addr, VAR_1->perm_mac_addr, sizeof(VAR_1->perm_mac_addr));
 return 0;
}
