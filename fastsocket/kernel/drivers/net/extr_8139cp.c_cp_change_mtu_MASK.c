
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct cp_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct cp_private*) ;
 struct cp_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3, int VAR_4)
{
 struct cp_private *VAR_5 = FUNC_3(VAR_3);


 if (VAR_4 < VAR_1 || VAR_4 > VAR_0)
  return -VAR_2;


 if (!FUNC_4(VAR_3)) {
  VAR_3->mtu = VAR_4;
  FUNC_2(VAR_5);
  return 0;
 }


 FUNC_0(VAR_3);
 VAR_3->mtu = VAR_4;
 FUNC_2(VAR_5);
 return FUNC_1(VAR_3);
}
