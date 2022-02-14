
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bonding {int bond_list; } ;


 int FUNC_0 (struct bonding*) ;
 int FUNC_1 (struct bonding*) ;
 int FUNC_2 (int *) ;
 struct bonding* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct bonding *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(&VAR_1->bond_list);

 FUNC_1(VAR_1);

 FUNC_0(VAR_1);
}
