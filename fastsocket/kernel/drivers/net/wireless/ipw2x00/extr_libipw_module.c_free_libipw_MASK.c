
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int wiphy; } ;
struct libipw_device {TYPE_1__ wdev; int crypt_info; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct libipw_device*) ;
 struct libipw_device* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct net_device *VAR_0, int VAR_1)
{
 struct libipw_device *VAR_2 = FUNC_3(VAR_0);

 FUNC_1(&VAR_2->crypt_info);

 FUNC_2(VAR_2);


 if (!VAR_1)
  FUNC_4(VAR_2->wdev.wiphy);

 FUNC_0(VAR_0);
}
