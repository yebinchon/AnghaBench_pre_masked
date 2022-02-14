
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct r8180_priv {int wx_sem; TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_4__ {scalar_t__ bHwRadioOff; } ;


 int FUNC_0 (int *) ;
 struct r8180_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0,
          struct iw_request_info *VAR_1,
          union iwreq_data *VAR_2, char *VAR_3)
{

 int VAR_4=0;
        struct r8180_priv *VAR_5 = FUNC_1(VAR_0);


 if(VAR_5->ieee80211->bHwRadioOff)
  return 0;

        FUNC_0(&VAR_5->wx_sem);

        VAR_4 = FUNC_2(VAR_5->ieee80211, VAR_3, VAR_2->data.length);

        FUNC_3(&VAR_5->wx_sem);

        return VAR_4;


}
