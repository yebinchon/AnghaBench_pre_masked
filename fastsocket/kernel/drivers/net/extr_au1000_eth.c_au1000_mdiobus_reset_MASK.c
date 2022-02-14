
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mii_bus {struct net_device* priv; } ;


 int FUNC_0 (struct net_device* const,int ) ;

__attribute__((used)) static int FUNC_1(struct mii_bus *VAR_0)
{
 struct net_device *const VAR_1 = VAR_0->priv;

 FUNC_0(VAR_1, 0);

 return 0;
}
