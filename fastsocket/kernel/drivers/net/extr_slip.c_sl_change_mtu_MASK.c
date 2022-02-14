
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slip {int dummy; } ;
struct net_device {int mtu; } ;


 int VAR_0 ;
 struct slip* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct slip*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, int VAR_2)
{
 struct slip *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 < 68 || VAR_2 > 65534)
  return -VAR_0;

 if (VAR_2 != VAR_1->mtu)
  return FUNC_1(VAR_3, VAR_2);
 return 0;
}
