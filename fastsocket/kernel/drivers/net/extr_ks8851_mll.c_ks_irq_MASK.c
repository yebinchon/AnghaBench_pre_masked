
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct ks_net {struct net_device* netdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ks_net*,struct net_device*) ;
 int FUNC_1 (struct ks_net*,int ) ;
 int FUNC_2 (struct ks_net*) ;
 int FUNC_3 (struct ks_net*) ;
 int FUNC_4 (struct net_device*,struct ks_net*) ;
 int FUNC_5 (struct ks_net*,int ,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_10, void *VAR_11)
{
 struct ks_net *VAR_12 = VAR_11;
 struct net_device *VAR_13 = VAR_12->netdev;
 u16 VAR_14;


 FUNC_3(VAR_12);

 VAR_14 = FUNC_1(VAR_12, VAR_6);
 if (FUNC_8(!VAR_14)) {
  FUNC_2(VAR_12);
  return VAR_3;
 }

 FUNC_5(VAR_12, VAR_6, VAR_14);

 if (FUNC_6(VAR_14 & VAR_4))
  FUNC_0(VAR_12, VAR_13);

 if (FUNC_8(VAR_14 & VAR_1))
  FUNC_4(VAR_13, VAR_12);

 if (FUNC_8(VAR_14 & VAR_5))
  FUNC_7(VAR_13);

 if (FUNC_8(VAR_14 & VAR_2)) {

  u16 VAR_15 = FUNC_1(VAR_12, VAR_7);
  VAR_15 &= ~VAR_9;
  FUNC_5(VAR_12, VAR_7, VAR_15 | VAR_8);
 }


 FUNC_2(VAR_12);
 return VAR_0;
}
