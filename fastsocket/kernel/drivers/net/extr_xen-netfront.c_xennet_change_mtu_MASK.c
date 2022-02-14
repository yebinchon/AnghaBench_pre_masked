
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_4, int VAR_5)
{
 int VAR_6 = FUNC_0(VAR_4) ?
  VAR_3 - VAR_2 : VAR_1;

 if (VAR_5 > VAR_6)
  return -VAR_0;
 VAR_4->mtu = VAR_5;
 return 0;
}
