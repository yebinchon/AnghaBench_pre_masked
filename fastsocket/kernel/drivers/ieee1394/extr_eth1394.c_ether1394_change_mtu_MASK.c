
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; int name; } ;
struct eth1394_priv {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_4 < 68)
  return -VAR_0;

 VAR_5 = FUNC_1(
   ((struct eth1394_priv *)FUNC_2(VAR_3))->host);
 if (VAR_4 > VAR_5) {
  FUNC_0(VAR_2, VAR_3->name,
         "Local node constrains MTU to %d\n", VAR_5);
  return -VAR_1;
 }

 VAR_3->mtu = VAR_4;
 return 0;
}
