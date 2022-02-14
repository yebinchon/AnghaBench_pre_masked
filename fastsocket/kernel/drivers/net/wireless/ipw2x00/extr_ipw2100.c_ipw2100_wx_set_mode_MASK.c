
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union iwreq_data {scalar_t__ mode; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int status; int action_mutex; TYPE_1__* ieee; } ;
struct TYPE_2__ {scalar_t__ iw_mode; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;




 int VAR_1 ;
 int FUNC_1 (struct ipw2100_priv*,int const) ;
 struct ipw2100_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2,
          struct iw_request_info *VAR_3,
          union iwreq_data *VAR_4, char *VAR_5)
{
 struct ipw2100_priv *VAR_6 = FUNC_2(VAR_2);
 int VAR_7 = 0;

 FUNC_0("SET Mode -> %d\n", VAR_4->mode);

 if (VAR_4->mode == VAR_6->ieee->iw_mode)
  return 0;

 FUNC_3(&VAR_6->action_mutex);
 if (!(VAR_6->status & VAR_1)) {
  VAR_7 = -VAR_0;
  goto done;
 }

 switch (VAR_4->mode) {





 case 131:
  VAR_7 = FUNC_1(VAR_6, 131);
  break;
 case 129:
 case 130:
 default:
  VAR_7 = FUNC_1(VAR_6, 129);
  break;
 }

      done:
 FUNC_4(&VAR_6->action_mutex);
 return VAR_7;
}
