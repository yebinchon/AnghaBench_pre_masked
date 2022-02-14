
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dlci_local {int slave; } ;


 int FUNC_0 (int ,int) ;
 struct dlci_local* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, int VAR_1)
{
 struct dlci_local *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2->slave, VAR_1);
}
