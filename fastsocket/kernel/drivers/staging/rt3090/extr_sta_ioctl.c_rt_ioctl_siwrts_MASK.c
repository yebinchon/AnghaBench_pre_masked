
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {scalar_t__ value; scalar_t__ disabled; } ;
struct TYPE_5__ {scalar_t__ RtsThreshold; } ;
struct TYPE_6__ {TYPE_1__ CommonCfg; } ;
typedef TYPE_2__* PRTMP_ADAPTER ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_3(struct net_device *VAR_5,
         struct iw_request_info *VAR_6,
         struct iw_param *VAR_7, char *VAR_8)
{
 PRTMP_ADAPTER VAR_9 = FUNC_1(VAR_5);
 u16 VAR_10;


    if(!FUNC_2(VAR_9, VAR_4))
    {
        FUNC_0(VAR_3, ("INFO::Network is down!\n"));
        return -VAR_1;
    }

 if (VAR_7->disabled)
  VAR_10 = VAR_2;
 else if (VAR_7->value < 0 || VAR_7->value > VAR_2)
  return -VAR_0;
 else if (VAR_7->value == 0)
     VAR_10 = VAR_2;
 else
  VAR_10 = VAR_7->value;

 if (VAR_10 != VAR_9->CommonCfg.RtsThreshold)
  VAR_9->CommonCfg.RtsThreshold = VAR_10;

 return 0;
}
