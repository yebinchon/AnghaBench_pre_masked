
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ks8851_net {int mii; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int *) ;
 int FUNC_1 (struct ifreq*) ;
 struct ks8851_net* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct ks8851_net *VAR_4 = FUNC_2(VAR_1);

 if (!FUNC_3(VAR_1))
  return -VAR_0;

 return FUNC_0(&VAR_4->mii, FUNC_1(VAR_2), VAR_3, ((void*)0));
}
