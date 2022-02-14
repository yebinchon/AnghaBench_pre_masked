
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int features; } ;
struct ipoib_dev_priv {int hca_caps; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ipoib_dev_priv*,char*) ;
 struct ipoib_dev_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_5, u32 VAR_6)
{
 struct ipoib_dev_priv *VAR_7 = FUNC_1(VAR_5);

 if (VAR_6) {
  if (!FUNC_2(VAR_2, &VAR_7->flags) &&
      (VAR_5->features & VAR_3) &&
      (VAR_7->hca_caps & VAR_1)) {
   VAR_5->features |= VAR_4;
  } else {
   FUNC_0(VAR_7, "can't set TSO on\n");
   return -VAR_0;
  }
 } else
  VAR_5->features &= ~VAR_4;

 return 0;
}
