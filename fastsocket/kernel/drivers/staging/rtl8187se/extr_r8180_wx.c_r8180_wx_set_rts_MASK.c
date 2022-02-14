
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ value; scalar_t__ disabled; } ;
union iwreq_data {TYPE_2__ rts; } ;
struct r8180_priv {scalar_t__ rts; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_3__ {scalar_t__ bHwRadioOff; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct r8180_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_4,
        struct iw_request_info *VAR_5,
        union iwreq_data *VAR_6, char *VAR_7)
{
 struct r8180_priv *VAR_8 = FUNC_0(VAR_4);


 if(VAR_8->ieee80211->bHwRadioOff)
  return 0;

 if (VAR_6->rts.disabled)
  VAR_8->rts = VAR_0;
 else {
  if (VAR_6->rts.value < VAR_3 ||
      VAR_6->rts.value > VAR_2)
   return -VAR_1;

  VAR_8->rts = VAR_6->rts.value;
 }

 return 0;
}
