
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucc_geth_private {int timeout_work; } ;
struct net_device {int dummy; } ;


 struct ucc_geth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct ucc_geth_private *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0);
 FUNC_2(&VAR_1->timeout_work);
}
