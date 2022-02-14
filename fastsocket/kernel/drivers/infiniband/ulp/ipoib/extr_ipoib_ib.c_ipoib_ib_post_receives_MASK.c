
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int) ;
 scalar_t__ FUNC_1 (struct net_device*,int) ;
 int VAR_2 ;
 int FUNC_2 (struct ipoib_dev_priv*,char*,int) ;
 struct ipoib_dev_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3)
{
 struct ipoib_dev_priv *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
  if (!FUNC_0(VAR_3, VAR_5)) {
   FUNC_2(VAR_4, "failed to allocate receive buffer %d\n", VAR_5);
   return -VAR_1;
  }
  if (FUNC_1(VAR_3, VAR_5)) {
   FUNC_2(VAR_4, "ipoib_ib_post_receive failed for buf %d\n", VAR_5);
   return -VAR_0;
  }
 }

 return 0;
}
