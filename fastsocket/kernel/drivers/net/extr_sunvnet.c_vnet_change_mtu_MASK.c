
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_2, int VAR_3)
{
 if (VAR_3 != VAR_1)
  return -VAR_0;

 VAR_2->mtu = VAR_3;
 return 0;
}
