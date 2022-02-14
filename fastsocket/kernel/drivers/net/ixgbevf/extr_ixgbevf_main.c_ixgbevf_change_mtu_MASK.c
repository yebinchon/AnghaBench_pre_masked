
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct TYPE_3__ {int type; } ;
struct TYPE_4__ {int api_version; TYPE_1__ mac; } ;
struct ixgbevf_adapter {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,char*,int,int) ;
 int VAR_5 ;

 int FUNC_1 (struct ixgbevf_adapter*) ;
 struct ixgbevf_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_6, int VAR_7)
{
 struct ixgbevf_adapter *VAR_8 = FUNC_2(VAR_6);
 int VAR_9 = VAR_7 + VAR_2 + VAR_1;
 int VAR_10 = VAR_4;

 switch (VAR_8->hw.api_version) {
 case 128:
  VAR_10 = VAR_3;
  break;
 default:
  if (VAR_8->hw.mac.type == VAR_5)
   VAR_10 = VAR_3;
  break;
 }


 if ((VAR_7 < 68) || (VAR_9 > VAR_10))
  return -VAR_0;

 FUNC_0(&VAR_8->hw, "changing MTU from %d to %d\n",
        VAR_6->mtu, VAR_7);

 VAR_6->mtu = VAR_7;

 if (FUNC_3(VAR_6))
  FUNC_1(VAR_8);

 return 0;
}
