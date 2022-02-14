
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int mtu; int features; } ;
struct jme_adapter {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 struct jme_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_2, u32 VAR_3)
{
 struct jme_adapter *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3) {
  FUNC_2(VAR_0, &VAR_4->flags);
  if (VAR_2->mtu <= 1900)
   VAR_2->features |= VAR_1;
 } else {
  FUNC_0(VAR_0, &VAR_4->flags);
  VAR_2->features &= ~VAR_1;
 }

 return 0;
}
