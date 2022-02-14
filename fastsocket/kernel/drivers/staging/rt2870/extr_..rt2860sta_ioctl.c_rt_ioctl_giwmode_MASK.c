
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int ml_priv; } ;
struct iw_request_info {int dummy; } ;
typedef int __u32 ;
typedef int PRTMP_ADAPTER ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_4 ;

int FUNC_4(struct net_device *VAR_5,
     struct iw_request_info *VAR_6,
     __u32 *VAR_7, char *VAR_8)
{
 PRTMP_ADAPTER VAR_9 = VAR_5->ml_priv;

 if (FUNC_0(VAR_9))
  *VAR_7 = VAR_0;
    else if (FUNC_2(VAR_9))
  *VAR_7 = VAR_2;
    else if (FUNC_3(VAR_9))
    {
        *VAR_7 = VAR_3;
    }
    else
        *VAR_7 = VAR_1;

 FUNC_1(VAR_4, ("==>rt_ioctl_giwmode(mode=%d)\n", *VAR_7));
 return 0;
}
