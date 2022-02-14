
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_local {unsigned short CMDqueue; } ;
struct net_device {int dummy; } ;


 struct net_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0, unsigned short VAR_1)
{
 struct net_local *VAR_2 = FUNC_0(VAR_0);

 VAR_2->CMDqueue |= VAR_1;
 FUNC_1(VAR_0);

 return;
}
