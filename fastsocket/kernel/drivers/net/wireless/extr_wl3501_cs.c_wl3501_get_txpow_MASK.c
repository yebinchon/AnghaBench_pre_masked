
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; scalar_t__ fixed; scalar_t__ disabled; int value; } ;
union iwreq_data {TYPE_1__ txpower; } ;
typedef int u16 ;
typedef int txpow ;
struct wl3501_card {int dummy; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wl3501_card* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct wl3501_card*,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
       struct iw_request_info *VAR_3,
       union iwreq_data *VAR_4, char *VAR_5)
{
 u16 VAR_6;
 struct wl3501_card *VAR_7 = FUNC_0(VAR_2);
 int VAR_8 = FUNC_1(VAR_7,
          VAR_1,
          &VAR_6, sizeof(VAR_6));
 if (!VAR_8) {
  VAR_4->txpower.value = VAR_6;
  VAR_4->txpower.disabled = 0;




  VAR_4->txpower.fixed = 0;
  VAR_4->txpower.flags = VAR_0;
 }
 return VAR_8;
}
