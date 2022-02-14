
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {int m; int e; } ;
typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_4__ {int Channel; } ;
struct TYPE_5__ {TYPE_1__ CommonCfg; } ;
typedef TYPE_2__* PRTMP_ADAPTER ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 TYPE_2__* FUNC_2 (struct net_device*) ;
 int VAR_1 ;

int FUNC_3(struct net_device *VAR_2,
     struct iw_request_info *VAR_3,
     struct iw_freq *VAR_4, char *VAR_5)
{
 PRTMP_ADAPTER VAR_6 = ((void*)0);
 UCHAR VAR_7;
 ULONG VAR_8 = 2412000;

 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6 == ((void*)0))
 {


  return -VAR_0;
 }

  VAR_7 = VAR_6->CommonCfg.Channel;

 FUNC_0(VAR_1,("==>rt_ioctl_giwfreq  %d\n", VAR_7));

 FUNC_1(VAR_7, VAR_8);
 VAR_4->m = VAR_8 * 100;
 VAR_4->e = 1;
 return 0;
}
