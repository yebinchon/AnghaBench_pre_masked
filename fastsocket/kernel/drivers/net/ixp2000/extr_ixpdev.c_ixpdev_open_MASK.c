
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ixpdev_priv {int channel; int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 struct ixpdev_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ,int ,char*,int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_6)
{
 struct ixpdev_priv *VAR_7 = FUNC_3(VAR_6);
 int VAR_8;

 FUNC_2(&VAR_7->napi);
 if (!VAR_5++) {
  VAR_8 = FUNC_5(VAR_1, VAR_3,
     VAR_0, "ixp2000_eth", VAR_4);
  if (VAR_8) {
   VAR_5--;
   FUNC_1(&VAR_7->napi);
   return VAR_8;
  }

  FUNC_0(VAR_2, 0xffff);
 }

 FUNC_6(VAR_7->channel, 1);
 FUNC_4(VAR_6);

 return 0;
}
