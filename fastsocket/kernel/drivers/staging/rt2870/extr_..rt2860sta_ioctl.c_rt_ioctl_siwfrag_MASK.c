
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct net_device {TYPE_2__* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; scalar_t__ disabled; } ;
struct TYPE_4__ {int FragmentThreshold; } ;
struct TYPE_5__ {TYPE_1__ CommonCfg; } ;
typedef TYPE_2__* PRTMP_ADAPTER ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;

int FUNC_3(struct net_device *VAR_6,
   struct iw_request_info *VAR_7,
   struct iw_param *VAR_8, char *VAR_9)
{
 PRTMP_ADAPTER VAR_10 = VAR_6->ml_priv;
 u16 VAR_11;


     if(!FUNC_1(VAR_10, VAR_5))
     {
        FUNC_0(VAR_4, ("INFO::Network is down!\n"));
         return -VAR_1;
     }

 if (VAR_8->disabled)
  VAR_11 = VAR_2;
 else if (VAR_8->value >= VAR_3 && VAR_8->value <= VAR_2)
  VAR_11 = FUNC_2(VAR_8->value & ~0x1);
 else if (VAR_8->value == 0)
     VAR_11 = VAR_2;
 else
  return -VAR_0;

 VAR_10->CommonCfg.FragmentThreshold = VAR_11;
 return 0;
}
