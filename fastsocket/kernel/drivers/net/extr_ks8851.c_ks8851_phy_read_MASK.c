
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ks8851_net {int lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ks8851_net*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ks8851_net* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0, int VAR_1, int VAR_2)
{
 struct ks8851_net *VAR_3 = FUNC_4(VAR_0);
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_2);
 if (!VAR_4)
  return 0x0;

 FUNC_2(&VAR_3->lock);
 VAR_5 = FUNC_1(VAR_3, VAR_4);
 FUNC_3(&VAR_3->lock);

 return VAR_5;
}
