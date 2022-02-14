
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int owner; int group; } ;
struct net_device {int destructor; int * ethtool_ops; } ;


 struct tun_struct* FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2)
{
 struct tun_struct *VAR_3 = FUNC_0(VAR_2);

 VAR_3->owner = -1;
 VAR_3->group = -1;

 VAR_2->ethtool_ops = &VAR_0;
 VAR_2->destructor = VAR_1;
}
