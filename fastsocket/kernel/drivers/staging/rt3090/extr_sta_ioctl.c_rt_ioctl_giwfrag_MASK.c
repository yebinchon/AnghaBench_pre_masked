
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int disabled; int fixed; int value; } ;
struct TYPE_5__ {int FragmentThreshold; } ;
struct TYPE_6__ {TYPE_1__ CommonCfg; } ;
typedef TYPE_2__* PRTMP_ADAPTER ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_3(struct net_device *VAR_4,
   struct iw_request_info *VAR_5,
   struct iw_param *VAR_6, char *VAR_7)
{
 PRTMP_ADAPTER VAR_8 = FUNC_1(VAR_4);

 if (VAR_8 == ((void*)0))
 {


  return -VAR_0;
 }


 if(!FUNC_2(VAR_8, VAR_3))
 {
  FUNC_0(VAR_2, ("INFO::Network is down!\n"));
  return -VAR_0;
 }

 VAR_6->value = VAR_8->CommonCfg.FragmentThreshold;
 VAR_6->disabled = (VAR_6->value == VAR_1);
 VAR_6->fixed = 1;

 return 0;
}
