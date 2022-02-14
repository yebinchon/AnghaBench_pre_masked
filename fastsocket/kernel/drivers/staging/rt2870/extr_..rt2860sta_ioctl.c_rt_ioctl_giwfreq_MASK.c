
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {TYPE_2__* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {int m; int e; } ;
typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_3__ {int Channel; } ;
struct TYPE_4__ {TYPE_1__ CommonCfg; } ;
typedef TYPE_2__* PRTMP_ADAPTER ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;

int FUNC_2(struct net_device *VAR_1,
     struct iw_request_info *VAR_2,
     struct iw_freq *VAR_3, char *VAR_4)
{
 PRTMP_ADAPTER VAR_5 = VAR_1->ml_priv;
 UCHAR VAR_6 = VAR_5->CommonCfg.Channel;
 ULONG VAR_7;

 FUNC_0(VAR_0,("==>rt_ioctl_giwfreq  %d\n", VAR_6));

    FUNC_1(VAR_6, VAR_7);
 VAR_3->m = VAR_7 * 100;
 VAR_3->e = 1;
 return 0;
}
