
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {int e; int m; } ;
struct TYPE_6__ {int Channel; } ;
struct TYPE_7__ {TYPE_1__ CommonCfg; } ;
typedef TYPE_2__* PRTMP_ADAPTER ;


 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 TYPE_2__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

int FUNC_5(struct net_device *VAR_7,
   struct iw_request_info *VAR_8,
   struct iw_freq *VAR_9, char *VAR_10)
{
 PRTMP_ADAPTER VAR_11 = FUNC_3(VAR_7);
 int VAR_12 = -1;


    if(!FUNC_4(VAR_11, VAR_6))
    {
        FUNC_1(VAR_3, ("INFO::Network is down!\n"));
        return -VAR_1;
    }


 if (VAR_9->e > 1)
  return -VAR_0;

 if((VAR_9->e == 0) && (VAR_9->m <= 1000))
  VAR_12 = VAR_9->m;
 else
  FUNC_2( (VAR_9->m /100) , VAR_12);

    if (FUNC_0(VAR_11, VAR_12) == VAR_5)
    {
 VAR_11->CommonCfg.Channel = VAR_12;
 FUNC_1(VAR_2, ("==>rt_ioctl_siwfreq::SIOCSIWFREQ[cmd=0x%x] (Channel=%d)\n", VAR_4, VAR_11->CommonCfg.Channel));
    }
    else
        return -VAR_0;

 return 0;
}
