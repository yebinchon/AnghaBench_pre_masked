
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bonding {scalar_t__ wq; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct net_device*) ;
 struct bonding* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct bonding *VAR_1 = FUNC_2(VAR_0);
 if (VAR_1->wq)
  FUNC_0(VAR_1->wq);
 FUNC_1(VAR_0);
}
