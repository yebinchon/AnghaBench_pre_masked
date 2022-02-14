
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,char*,int ,int,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_3, int VAR_4)
{

 if ((VAR_4 < 68) || (VAR_4 > VAR_1)) {
  FUNC_1(VAR_2, "ifconfig %s mtu %d failed; value must be "
   "between 68 and %ld\n", VAR_3->name, VAR_4,
   VAR_1);
  return -VAR_0;
 }

 VAR_3->mtu = VAR_4;
 FUNC_0(VAR_2, "ifconfig %s mtu set to %d\n", VAR_3->name, VAR_4);
 return 0;
}
