
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sa_data; int sa_family; } ;
union iwreq_data {TYPE_2__ ap_addr; } ;
struct TYPE_3__ {int bssid; } ;
struct ieee80211_device {scalar_t__ state; int dev; TYPE_1__ current_network; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,union iwreq_data*,int *) ;

void FUNC_3(struct ieee80211_device *VAR_4)
{
 union iwreq_data VAR_5;
 VAR_5.ap_addr.sa_family = VAR_0;
 if (VAR_4->state == VAR_2)
  FUNC_0(VAR_5.ap_addr.sa_data, VAR_4->current_network.bssid, VAR_1);
 else
  FUNC_1(VAR_5.ap_addr.sa_data, 0, VAR_1);
 FUNC_2(VAR_4->dev, VAR_3, &VAR_5, ((void*)0));
}
