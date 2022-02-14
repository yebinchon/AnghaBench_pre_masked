
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_local {int dmabuffer; int pdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;
 struct net_local* FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_1)
{
 struct net_local *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 FUNC_0(VAR_2->pdev, VAR_2->dmabuffer, sizeof(struct net_local),
  VAR_0);
}
