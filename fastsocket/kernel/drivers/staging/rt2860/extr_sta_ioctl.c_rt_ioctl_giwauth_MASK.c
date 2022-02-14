
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iw_param {int flags; int value; } ;
union iwreq_data {struct iw_param param; } ;
struct net_device {TYPE_2__* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_4__ {int AuthMode; int WepStatus; } ;
struct TYPE_5__ {TYPE_1__ StaCfg; } ;
typedef TYPE_2__* PRTMP_ADAPTER ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_2(struct net_device *VAR_10,
          struct iw_request_info *VAR_11,
          union iwreq_data *VAR_12, char *VAR_13)
{
 PRTMP_ADAPTER VAR_14 = VAR_10->ml_priv;
 struct iw_param *VAR_15 = &VAR_12->param;


 if(!FUNC_1(VAR_14, VAR_9))
    {
    FUNC_0(VAR_8, ("INFO::Network is down!\n"));
     return -VAR_0;
    }

 switch (VAR_15->flags & VAR_4) {
 case 129:
        VAR_15->value = (VAR_14->StaCfg.WepStatus == VAR_7) ? 0 : 1;
  break;

 case 130:
        VAR_15->value = (VAR_14->StaCfg.AuthMode == VAR_5) ? VAR_3 : VAR_2;
  break;

 case 128:
  VAR_15->value = (VAR_14->StaCfg.AuthMode >= VAR_6) ? 1 : 0;
  break;

 default:
  return -VAR_1;
 }
    FUNC_0(VAR_8, ("rt_ioctl_giwauth::param->value = %d!\n", VAR_15->value));
 return 0;
}
