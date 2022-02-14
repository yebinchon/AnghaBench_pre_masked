
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ixpdev_priv {int channel; int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct ixpdev_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4)
{
 struct ixpdev_priv *VAR_5 = FUNC_3(VAR_4);

 FUNC_4(VAR_4);
 FUNC_2(&VAR_5->napi);
 FUNC_5(VAR_5->channel, 0);

 if (!--VAR_3) {
  FUNC_1(VAR_1, 0xffff);
  FUNC_0(VAR_0, VAR_2);
 }

 return 0;
}
