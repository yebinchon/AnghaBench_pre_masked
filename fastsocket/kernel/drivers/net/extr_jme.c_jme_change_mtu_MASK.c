
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; int mtu; } ;
struct jme_adapter {int old_mtu; int flags; int reg_rxcs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct jme_adapter*) ;
 int FUNC_1 (struct jme_adapter*) ;
 struct jme_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_12, int VAR_13)
{
 struct jme_adapter *VAR_14 = FUNC_2(VAR_12);

 if (VAR_13 == VAR_14->old_mtu)
  return 0;

 if (((VAR_13 + VAR_1) > VAR_5) ||
  ((VAR_13) < VAR_2))
  return -VAR_0;

 if (VAR_13 > 4000) {
  VAR_14->reg_rxcs &= ~VAR_9;
  VAR_14->reg_rxcs |= VAR_11;
  FUNC_1(VAR_14);
 } else {
  VAR_14->reg_rxcs &= ~VAR_9;
  VAR_14->reg_rxcs |= VAR_10;
  FUNC_1(VAR_14);
 }

 if (VAR_13 > 1900) {
  VAR_12->features &= ~(VAR_6 |
    VAR_7 |
    VAR_8);
 } else {
  if (FUNC_3(VAR_4, &VAR_14->flags))
   VAR_12->features |= VAR_6;
  if (FUNC_3(VAR_3, &VAR_14->flags))
   VAR_12->features |= VAR_7 | VAR_8;
 }

 VAR_12->mtu = VAR_13;
 FUNC_0(VAR_14);

 return 0;
}
