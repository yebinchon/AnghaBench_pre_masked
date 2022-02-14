
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;
struct TYPE_2__ {int p_encap; } ;
typedef TYPE_1__ isdn_net_local ;


 int VAR_0 ;


 int FUNC_0 (struct net_device*,struct ifreq*,int) ;
 int FUNC_1 (struct net_device*,struct ifreq*,int) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
     struct ifreq *VAR_2, int VAR_3)
{
 isdn_net_local *VAR_4 = (isdn_net_local *) FUNC_2(VAR_1);

 switch (VAR_4->p_encap) {




 case 129:
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 default:
  return -VAR_0;
 }
}
